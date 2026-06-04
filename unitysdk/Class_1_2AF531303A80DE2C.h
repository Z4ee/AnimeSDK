#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ColliderConfig; }
namespace UnityEngine { class Collider; }

#define CLASS_1_2AF531303A80DE2C_METHOD_1_920A50260639D313_OFFSET UNITYSDK_OFFSET(0x12AA1A60)
#define CLASS_1_2AF531303A80DE2C_METHOD_1_9D25BCC853E0030B_OFFSET UNITYSDK_OFFSET(0x12AA1820)

inline static constexpr unsigned int Class_1_2AF531303A80DE2C_TypeDefinitionIndex = 53421;

class Class_1_2AF531303A80DE2C : public ::System::Object
{
public:
	static ::System::Void Method_1_9D25BCC853E0030B(::RPG::GameCore::ColliderConfig* a1, ::UnityEngine::Collider* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::ColliderConfig*, ::UnityEngine::Collider*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2AF531303A80DE2C_METHOD_1_9D25BCC853E0030B_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::ColliderConfig* Method_1_920A50260639D313(::UnityEngine::Collider* a1)
	{
		return ((::RPG::GameCore::ColliderConfig*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_2AF531303A80DE2C_METHOD_1_920A50260639D313_OFFSET))(a1);
	}
};
