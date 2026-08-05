#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_0D338B4066FCCFC4_1_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x158F0E30)
#define CLASS_3_0D338B4066FCCFC4_1_METHOD_3_7A59883916BCB100_OFFSET UNITYSDK_OFFSET(0x158F0EB0)
#define CLASS_3_0D338B4066FCCFC4_1_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x158F0E40)
#define CLASS_3_0D338B4066FCCFC4_1_METHOD_3_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x158F10A0)
#define CLASS_3_0D338B4066FCCFC4_1_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x158F1200)
#define CLASS_3_0D338B4066FCCFC4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x158F0E50)

inline static constexpr unsigned int Class_3_0D338B4066FCCFC4_1_TypeDefinitionIndex = 53908;

class Class_3_0D338B4066FCCFC4_1 : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::Action_2<::System::Int32, ::System::String*>* Field_3_1; // 0x30
	::System::String* Field_3_0; // 0x38
	::System::String* Field_3_2; // 0x40
	::System::Int32 Field_3_7; // 0x48

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_1_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_1_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_7A59883916BCB100()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_1_METHOD_3_7A59883916BCB100_OFFSET))(this);
	}

	::System::Void Method_3_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_1_METHOD_3_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D338B4066FCCFC4_1_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
