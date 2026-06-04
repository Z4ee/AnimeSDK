#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_2D0F03E6066AA606_OFFSET UNITYSDK_OFFSET(0x19D0BD30)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_6439FB053ECB9CED_OFFSET UNITYSDK_OFFSET(0x19D0BCE0)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_68990A283ED17235_OFFSET UNITYSDK_OFFSET(0x19D0BBC0)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_DEF0F6D1A43FE480_OFFSET UNITYSDK_OFFSET(0x19D0BB50)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO__CTOR_OFFSET UNITYSDK_OFFSET(0x19D0BBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchByTauntAndAggro_TypeDefinitionIndex = 22651;

	class TargetFetchByTauntAndAggro : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceTarget; // 0x10
		::System::Boolean RandomByAggroWhenFail; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DEF0F6D1A43FE480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchByTauntAndAggro*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_DEF0F6D1A43FE480_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68990A283ED17235(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_68990A283ED17235_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6439FB053ECB9CED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_6439FB053ECB9CED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D0F03E6066AA606(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_METHOD_3_2D0F03E6066AA606_OFFSET))(a1, a2);
		}
	};
}
