#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_D3FC14854E29BCD7_1_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x126BAA60)
#define CLASS_3_D3FC14854E29BCD7_1_METHOD_3_617412338D2072E4_OFFSET UNITYSDK_OFFSET(0x126BAAD0)
#define CLASS_3_D3FC14854E29BCD7_1_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x126BAA70)
#define CLASS_3_D3FC14854E29BCD7_1_METHOD_3_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x126BAD90)
#define CLASS_3_D3FC14854E29BCD7_1_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x126BAEF0)
#define CLASS_3_D3FC14854E29BCD7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x126BAA80)

inline static constexpr unsigned int Class_3_D3FC14854E29BCD7_1_TypeDefinitionIndex = 61664;

class Class_3_D3FC14854E29BCD7_1 : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::Action_2<::System::Int32, ::System::String*>* Field_3_1; // 0x30
	::System::String* Field_3_0; // 0x38
	::System::String* Field_3_2; // 0x40

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D3FC14854E29BCD7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FC14854E29BCD7_1_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D3FC14854E29BCD7_1_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_617412338D2072E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FC14854E29BCD7_1_METHOD_3_617412338D2072E4_OFFSET))(this);
	}

	::System::Void Method_3_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D3FC14854E29BCD7_1_METHOD_3_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FC14854E29BCD7_1_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
