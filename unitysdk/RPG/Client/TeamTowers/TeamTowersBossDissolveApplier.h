#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamTowers/TeamTowersBossDissolveApplier_Struct_2_26E0B0E4AE40E7EE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_AWAKE_OFFSET UNITYSDK_OFFSET(0x18576C20)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18576F00)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSBOSSDISSOLVEAPPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x18577020)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersBossDissolveApplier_TypeDefinitionIndex = 75161;

	class TeamTowersBossDissolveApplier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _DissolveRate; // 0x18
		::Il2CppArray<::RPG::Client::TeamTowers::TeamTowersBossDissolveApplier_Struct_2_26E0B0E4AE40E7EE>* Field_5_1; // 0x20
		::System::Single Field_5_2; // 0x28

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
	};
}
