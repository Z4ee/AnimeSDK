#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_1326D0EA955DB60B_OFFSET UNITYSDK_OFFSET(0x19E42670)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_2A3386FBC3E51575_OFFSET UNITYSDK_OFFSET(0x19E424D0)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_37C5EBCDF9AC62BA_OFFSET UNITYSDK_OFFSET(0x19E42510)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_54AF3AE54B2DDDBE_OFFSET UNITYSDK_OFFSET(0x19E426A0)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x19E42500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleLevelByCharacterID_TypeDefinitionIndex = 22942;

	class VE_RtBattleLevelByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A3386FBC3E51575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_2A3386FBC3E51575_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37C5EBCDF9AC62BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_37C5EBCDF9AC62BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1326D0EA955DB60B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_1326D0EA955DB60B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_54AF3AE54B2DDDBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_54AF3AE54B2DDDBE_OFFSET))(a1, a2);
		}
	};
}
