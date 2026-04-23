#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_4;
class Class_1_3745C69C00F04B7D_5;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DE4C0)
#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189DE9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTutorialStageConfigRow_TypeDefinitionIndex = 12914;

	class GridFightTutorialStageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>* ForbiddenAutoOpenShopNodeList; // 0x10
		::Il2CppArray<::Class_1_3745C69C00F04B7D_4*>* ForbiddenSellRoleList; // 0x18
		::RPG::Client::TextID TutorialStageName; // 0x20
		::System::UInt32 IsRouteShow; // 0x30
		::System::UInt32 ForbiddenSellRoleBeforeSectionId; // 0x34
		::System::UInt32 ForbiddenBattleFail; // 0x38
		::System::UInt32 RewardQuest; // 0x3C
		::System::UInt32 DivisionID; // 0x40
		::System::UInt32 IsBossToastShow; // 0x44
		::System::UInt32 IsInitialSupply; // 0x48
		::System::UInt32 ForbiddenSellRoleBeforeChapterId; // 0x4C
		::System::UInt32 IsEquipRecommendShow; // 0x50
		::System::UInt32 IsAlltrial; // 0x54
		::System::UInt32 IsEnemyShow; // 0x58
		::System::UInt32 IsPortal; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightTutorialStageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTutorialStageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
