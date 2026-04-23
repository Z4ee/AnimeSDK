#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_89;
class Class_1_F684F955DBCEA1AB;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8385F95FFA7FAA1C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E67B60)

inline static constexpr unsigned int Class_1_8385F95FFA7FAA1C_TypeDefinitionIndex = 39034;

class Class_1_8385F95FFA7FAA1C : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_4; // 0x10
	::Class_1_F684F955DBCEA1AB* Field_1_0; // 0x18
	::UnityEngine::GameObject* Field_1_3; // 0x20
	::Class_0_16E4307DCC419505_89* Field_1_1; // 0x28
	::UnityEngine::GameObject* Field_1_2; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::UnityEngine::Quaternion Field_1_9; // 0x3C
	::UnityEngine::Quaternion Field_1_11; // 0x4C
	::UnityEngine::Vector3 Field_1_10; // 0x5C
	::UnityEngine::Vector3 Field_1_8; // 0x68
	::UnityEngine::Vector3 Field_1_6; // 0x74
	::UnityEngine::Vector3 Field_1_7; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8385F95FFA7FAA1C__CTOR_OFFSET))(this);
	}
};
