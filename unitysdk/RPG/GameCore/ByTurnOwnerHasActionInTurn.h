#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_0CAF4349E70CCC75_OFFSET UNITYSDK_OFFSET(0x195E0020)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_2440CBBC74B1629E_OFFSET UNITYSDK_OFFSET(0x195DFE60)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_8F70003B96B7B194_OFFSET UNITYSDK_OFFSET(0x195DFD90)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_9BDAB6141F018CB1_OFFSET UNITYSDK_OFFSET(0x195DFFA0)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN__CTOR_OFFSET UNITYSDK_OFFSET(0x195DFE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTurnOwnerHasActionInTurn_TypeDefinitionIndex = 22201;

	class ByTurnOwnerHasActionInTurn : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F70003B96B7B194(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_8F70003B96B7B194_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2440CBBC74B1629E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_2440CBBC74B1629E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9BDAB6141F018CB1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_9BDAB6141F018CB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0CAF4349E70CCC75(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_METHOD_4_0CAF4349E70CCC75_OFFSET))(a1, a2);
		}
	};
}
