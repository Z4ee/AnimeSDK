#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_1;
class Class_1_3745C69C00F04B7D_2;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D16DD40)
#define RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16E240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTutorialStageConfigRow_TypeDefinitionIndex = 13538;

	class GridFightTutorialStageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_3745C69C00F04B7D_1*>* ForbiddenAutoOpenShopNodeList; // 0x10
		::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>* ForbiddenSellRoleList; // 0x18
		::System::UInt32 ForbiddenSellRoleBeforeSectionId; // 0x20
		::System::UInt32 RewardQuest; // 0x24
		::RPG::Client::TextID TutorialStageName; // 0x28
		::System::UInt32 IsAlltrial; // 0x38
		::System::UInt32 IsPortal; // 0x3C
		::System::UInt32 IsEnemyShow; // 0x40
		::System::UInt32 IsEquipRecommendShow; // 0x44
		::System::UInt32 ForbiddenBattleFail; // 0x48
		::System::UInt32 IsBossToastShow; // 0x4C
		::System::UInt32 IsRouteShow; // 0x50
		::System::UInt32 IsInitialSupply; // 0x54
		::System::UInt32 DivisionID; // 0x58
		::System::UInt32 ForbiddenSellRoleBeforeChapterId; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightTutorialStageConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightTutorialStageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTUTORIALSTAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
