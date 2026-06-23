#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2ACAE3B8E89364F1.h"
#include "unitysdk/Foundation/FixedArray2_1.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_44BFEEFC722C6845_METHOD_2_3D6EDFDF43C4B010_OFFSET UNITYSDK_OFFSET(0x7ADD30)
#define STRUCT_2_44BFEEFC722C6845_METHOD_2_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x7ADCB0)
#define STRUCT_2_44BFEEFC722C6845_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x3645D0)
#define STRUCT_2_44BFEEFC722C6845_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x7ADD40)
#define STRUCT_2_44BFEEFC722C6845__CTOR_OFFSET UNITYSDK_OFFSET(0x7ADCA0)

inline static constexpr unsigned int Struct_2_44BFEEFC722C6845_TypeDefinitionIndex = 66226;

struct alignas(4) Struct_2_44BFEEFC722C6845
{
	::Foundation::Unreal::Interval_1<::System::Single> Field_2_0; // 0x10
	::Enum_3_2ACAE3B8E89364F1 Field_2_1; // 0x20
	::Foundation::FixedArray2_1<::System::Single> Field_2_2; // 0x24

	/*
	::System::Void _ctor(::UnityEngine::Keyframe& a1, ::UnityEngine::Keyframe& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_44BFEEFC722C6845__CTOR_OFFSET))(this, a1, a2, a3);
	}
	*/

	::System::Boolean Method_2_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_44BFEEFC722C6845_METHOD_2_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3D6EDFDF43C4B010(::Foundation::Unreal::Interval_1<::System::Single>& a1, ::Foundation::Unreal::Interval_1<::System::Single>& a2, ::System::Boolean& a3, ::System::Boolean& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>&, ::Foundation::Unreal::Interval_1<::System::Single>&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + STRUCT_2_44BFEEFC722C6845_METHOD_2_3D6EDFDF43C4B010_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_44BFEEFC722C6845_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::Enum_3_2ACAE3B8E89364F1 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_2ACAE3B8E89364F1(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_44BFEEFC722C6845_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
