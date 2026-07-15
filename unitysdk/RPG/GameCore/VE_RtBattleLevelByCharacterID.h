#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_01BEB1066C64AAC3_OFFSET UNITYSDK_OFFSET(0x1B8905D0)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_2A3386FBC3E51575_OFFSET UNITYSDK_OFFSET(0x1B890430)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_37C5EBCDF9AC62BA_OFFSET UNITYSDK_OFFSET(0x1B890470)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_D62D8C7E9AC1EC54_OFFSET UNITYSDK_OFFSET(0x1B890600)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B890460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleLevelByCharacterID_TypeDefinitionIndex = 23409;

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

		static ::System::Void Method_3_01BEB1066C64AAC3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_01BEB1066C64AAC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D62D8C7E9AC1EC54(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_METHOD_3_D62D8C7E9AC1EC54_OFFSET))(a1, a2);
		}
	};
}
