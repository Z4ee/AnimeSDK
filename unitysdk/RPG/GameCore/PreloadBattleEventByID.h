#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PRELOADBATTLEEVENTBYID_METHOD_3_E9EF96BF6744C302_OFFSET UNITYSDK_OFFSET(0x17511230)
#define RPG_GAMECORE_PRELOADBATTLEEVENTBYID_METHOD_3_F8CB8197A097446B_OFFSET UNITYSDK_OFFSET(0x175112B0)
#define RPG_GAMECORE_PRELOADBATTLEEVENTBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x17511280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadBattleEventByID_TypeDefinitionIndex = 21184;

	class PreloadBattleEventByID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleEventID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENTBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E9EF96BF6744C302(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadBattleEventByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadBattleEventByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENTBYID_METHOD_3_E9EF96BF6744C302_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F8CB8197A097446B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadBattleEventByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadBattleEventByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENTBYID_METHOD_3_F8CB8197A097446B_OFFSET))(a1, a2);
		}
	};
}
