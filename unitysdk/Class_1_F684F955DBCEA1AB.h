#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F684F955DBCEA1AB__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3E6F0)

inline static constexpr unsigned int Class_1_F684F955DBCEA1AB_TypeDefinitionIndex = 39033;

class Class_1_F684F955DBCEA1AB : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F684F955DBCEA1AB__CTOR_OFFSET))(this);
	}
};
