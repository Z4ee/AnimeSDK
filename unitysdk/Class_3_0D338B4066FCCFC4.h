#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_0D338B4066FCCFC4_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16AD42F0)
#define CLASS_3_0D338B4066FCCFC4_METHOD_3_1A37B8D25B985788_OFFSET UNITYSDK_OFFSET(0x16AD4370)
#define CLASS_3_0D338B4066FCCFC4_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x16AD4300)
#define CLASS_3_0D338B4066FCCFC4_METHOD_3_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x16AD4650)
#define CLASS_3_0D338B4066FCCFC4_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x16AD47B0)
#define CLASS_3_0D338B4066FCCFC4__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD4310)

inline static constexpr unsigned int Class_3_0D338B4066FCCFC4_TypeDefinitionIndex = 43155;

class Class_3_0D338B4066FCCFC4 : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::String* Field_3_6; // 0x30
	::System::Action_2<::System::Int32, ::System::String*>* Field_3_7; // 0x38
	::System::String* Field_3_0; // 0x40
	::System::Int32 Field_3_5; // 0x48

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_1A37B8D25B985788()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_METHOD_3_1A37B8D25B985788_OFFSET))(this);
	}

	::System::Void Method_3_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_METHOD_3_CA20A96113B135EC_OFFSET))(this, a1);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
