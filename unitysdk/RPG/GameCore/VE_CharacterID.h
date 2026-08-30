#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_058491206EA3EABD_OFFSET UNITYSDK_OFFSET(0x1D62B260)
#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_32A1EED268F4BD45_OFFSET UNITYSDK_OFFSET(0x1D62B2C0)
#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_51E6E8B4C52C41F1_OFFSET UNITYSDK_OFFSET(0x1D62B040)
#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_76AB5523386C1D07_OFFSET UNITYSDK_OFFSET(0x1D62B0E0)
#define RPG_GAMECORE_VE_CHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62B0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_CharacterID_TypeDefinitionIndex = 23998;

	class VE_CharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51E6E8B4C52C41F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_CharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_CharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_METHOD_3_51E6E8B4C52C41F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76AB5523386C1D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_CharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_CharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_METHOD_3_76AB5523386C1D07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_058491206EA3EABD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_CharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_CharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_METHOD_3_058491206EA3EABD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32A1EED268F4BD45(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_CharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_CharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_METHOD_3_32A1EED268F4BD45_OFFSET))(a1, a2);
		}
	};
}
