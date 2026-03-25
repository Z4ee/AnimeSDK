#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F684F955DBCEA1AB__CTOR_OFFSET UNITYSDK_OFFSET(0x16898620)

inline static constexpr unsigned int Class_1_F684F955DBCEA1AB_TypeDefinitionIndex = 33243;

class Class_1_F684F955DBCEA1AB : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F684F955DBCEA1AB__CTOR_OFFSET))(this);
	}
};
