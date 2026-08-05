#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_3_E9CB61782B1950E4_STRUCT_2_66EE559EF62DCFBC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7D4E30)

inline static constexpr unsigned int Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC_TypeDefinitionIndex = 47774;

struct alignas(8) Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC
{
	::Enum_3_F40B865AC61AB8D7 Field_2_1; // 0x10
	::UnityEngine::Vector3 Field_2_0; // 0x14
	::System::Single Field_2_7; // 0x20
	::System::Single Field_2_6; // 0x24
	::System::Int32 Field_2_5; // 0x28
	::UnityEngine::Transform* Field_2_4; // 0x30
	::UnityEngine::Vector3 Field_2_11; // 0x38

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9CB61782B1950E4_STRUCT_2_66EE559EF62DCFBC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
