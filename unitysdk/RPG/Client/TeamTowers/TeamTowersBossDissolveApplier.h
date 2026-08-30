#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamTowers/TeamTowersBossDissolveApplier_Struct_2_26E0B0E4AE40E7EE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_APPLYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1A3A7B10)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A3A7790)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A3A7AC0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_METHOD_5_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x1A3A77E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_PUSHRATETOOPERATIONS_OFFSET UNITYSDK_OFFSET(0x1A3A7C50)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A7D30)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersBossDissolveApplier_TypeDefinitionIndex = 78658;

	class TeamTowersBossDissolveApplier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _DissolveRate; // 0x18
		::Il2CppArray<::RPG::Client::TeamTowers::TeamTowersBossDissolveApplier_Struct_2_26E0B0E4AE40E7EE>* MEEPDDMNLCH; // 0x20
		::System::Single NCNGHODGIHO; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PushRateToOperations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_PUSHRATETOOPERATIONS_OFFSET))(this);
		}

		::System::Void ApplyImmediate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_APPLYIMMEDIATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_5D6CD31BA2372F92()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_METHOD_5_5D6CD31BA2372F92_OFFSET))(this);
		}
	};
}
