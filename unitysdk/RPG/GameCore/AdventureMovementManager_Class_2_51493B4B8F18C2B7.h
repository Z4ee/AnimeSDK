#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMovementManager_Class_1_1DE6262BF29C2AFD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class SphereCollider; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_2_51493B4B8F18C2B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19404100)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_2_51493B4B8F18C2B7_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x194030B0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_2_51493B4B8F18C2B7_METHOD_2_CE66CB9BD31906A2_OFFSET UNITYSDK_OFFSET(0x193FF6F0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_2_51493B4B8F18C2B7__CTOR_OFFSET UNITYSDK_OFFSET(0x193FEEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_Class_2_51493B4B8F18C2B7_TypeDefinitionIndex = 57263;

	class AdventureMovementManager_Class_2_51493B4B8F18C2B7 : public ::RPG::GameCore::AdventureMovementManager_Class_1_1DE6262BF29C2AFD
	{
	public:
		::UnityEngine::SphereCollider* CEEGJCAJAHB; // 0x38
		::System::Single IDKONBFPBLH; // 0x40

		::System::Void _ctor(::UnityEngine::SphereCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SphereCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_2_51493B4B8F18C2B7__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_2_51493B4B8F18C2B7_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_2_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_2_51493B4B8F18C2B7_METHOD_2_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Boolean Method_2_CE66CB9BD31906A2(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3& a4, ::System::Single& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_2_51493B4B8F18C2B7_METHOD_2_CE66CB9BD31906A2_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
