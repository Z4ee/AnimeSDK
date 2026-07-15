#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoCharacterHeadPoint; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_DC0A74F700976E73_METHOD_2_047089B1B49D30DB_OFFSET UNITYSDK_OFFSET(0x38FC930)
#define STRUCT_2_DC0A74F700976E73_METHOD_2_D29B4A26B13CD2CF_OFFSET UNITYSDK_OFFSET(0x38FC8F0)

inline static constexpr unsigned int Struct_2_DC0A74F700976E73_TypeDefinitionIndex = 54545;

struct alignas(8) Struct_2_DC0A74F700976E73
{
	::RPG::Client::MonoCharacterHeadPoint* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_2; // 0x1C
	::UnityEngine::Quaternion Field_2_3; // 0x28
	::System::Single Field_2_4; // 0x38
	::UnityEngine::Vector3 Field_2_5; // 0x3C

	::UnityEngine::Vector3 Method_2_D29B4A26B13CD2CF(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_DC0A74F700976E73_METHOD_2_D29B4A26B13CD2CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_047089B1B49D30DB(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + STRUCT_2_DC0A74F700976E73_METHOD_2_047089B1B49D30DB_OFFSET))(this, a1);
	}
};
