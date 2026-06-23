#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System { class String; }

#define STRUCT_2_CECEDD33F79E5905_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x816740)
#define STRUCT_2_CECEDD33F79E5905_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8166F0)
#define STRUCT_2_CECEDD33F79E5905_METHOD_2_7BA115D481D2EE3A_OFFSET UNITYSDK_OFFSET(0x8166E0)
#define STRUCT_2_CECEDD33F79E5905_METHOD_2_F7F6D7E340A947F5_OFFSET UNITYSDK_OFFSET(0x8167E0)
#define STRUCT_2_CECEDD33F79E5905_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8166D0)

inline static constexpr unsigned int Struct_2_CECEDD33F79E5905_TypeDefinitionIndex = 51064;

struct alignas(8) Struct_2_CECEDD33F79E5905
{
	::FluffyUnderware::Curvy::CurvySpline* Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x18
	::UnityEngine::Vector2 Field_2_2; // 0x24
	::System::Single Field_2_3; // 0x2C
	::System::Single Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x34
	::System::Single Field_2_6; // 0x38
	::System::Single Field_2_7; // 0x3C
	::System::Single Field_2_8; // 0x40
	::System::Single Field_2_9; // 0x44
	::System::Single Field_2_10; // 0x48
	::System::Single Field_2_11; // 0x4C
	::System::Single Field_2_12; // 0x50

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CECEDD33F79E5905_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_2_7BA115D481D2EE3A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CECEDD33F79E5905_METHOD_2_7BA115D481D2EE3A_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CECEDD33F79E5905_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CECEDD33F79E5905_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Single Method_2_F7F6D7E340A947F5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CECEDD33F79E5905_METHOD_2_F7F6D7E340A947F5_OFFSET))(this);
	}
};
