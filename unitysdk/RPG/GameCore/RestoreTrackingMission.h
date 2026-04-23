#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTORETRACKINGMISSION_METHOD_3_28630B6D5D312668_OFFSET UNITYSDK_OFFSET(0x18CB7240)
#define RPG_GAMECORE_RESTORETRACKINGMISSION_METHOD_3_A2360D64322E251C_OFFSET UNITYSDK_OFFSET(0x18CB7130)
#define RPG_GAMECORE_RESTORETRACKINGMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB7210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestoreTrackingMission_TypeDefinitionIndex = 19741;

	class RestoreTrackingMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETRACKINGMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A2360D64322E251C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestoreTrackingMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestoreTrackingMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETRACKINGMISSION_METHOD_3_A2360D64322E251C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28630B6D5D312668(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestoreTrackingMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestoreTrackingMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETRACKINGMISSION_METHOD_3_28630B6D5D312668_OFFSET))(a1, a2);
		}
	};
}
