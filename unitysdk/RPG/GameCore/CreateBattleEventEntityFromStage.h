#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventEntitySubType.h"
#include "unitysdk/RPG/GameCore/CreateBattleEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_METHOD_4_0DB97FE35043A923_OFFSET UNITYSDK_OFFSET(0x19681170)
#define RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_METHOD_4_1A11EA6D406D0CAE_OFFSET UNITYSDK_OFFSET(0x19680630)
#define RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19680600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleEventEntityFromStage_TypeDefinitionIndex = 22147;

	class CreateBattleEventEntityFromStage : public ::RPG::GameCore::CreateBattleEvent
	{
	public:
		::Il2CppArray<::System::String*>* DefaultAbilityList; // 0x58
		::Il2CppArray<::RPG::GameCore::BattleEventEntitySubType>* DefaultAbilityTypeList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0DB97FE35043A923(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventEntityFromStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventEntityFromStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_METHOD_4_0DB97FE35043A923_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A11EA6D406D0CAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventEntityFromStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventEntityFromStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTENTITYFROMSTAGE_METHOD_4_1A11EA6D406D0CAE_OFFSET))(a1, a2);
		}
	};
}
