#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_34CA3204CAD2639B_OFFSET UNITYSDK_OFFSET(0x190EE590)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_74122A0BB7B60528_OFFSET UNITYSDK_OFFSET(0x190EE5D0)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x190EE5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleLevelByCharacterID_TypeDefinitionIndex = 23274;

	class VE_RtBattleLevelByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34CA3204CAD2639B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_34CA3204CAD2639B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74122A0BB7B60528(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_74122A0BB7B60528_OFFSET))(a1, a2);
		}
	};
}
