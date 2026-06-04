#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_287D949435107AC9_OFFSET UNITYSDK_OFFSET(0x19E3F420)
#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_51E6E8B4C52C41F1_OFFSET UNITYSDK_OFFSET(0x19E3F1A0)
#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_76AB5523386C1D07_OFFSET UNITYSDK_OFFSET(0x19E3F240)
#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_7BFCD24B44049B89_OFFSET UNITYSDK_OFFSET(0x19E3F3C0)
#define RPG_GAMECORE_VE_CHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x19E3F200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_CharacterID_TypeDefinitionIndex = 22951;

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

		static ::System::Void Method_3_7BFCD24B44049B89(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_CharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_CharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_METHOD_3_7BFCD24B44049B89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_287D949435107AC9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_CharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_CharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_METHOD_3_287D949435107AC9_OFFSET))(a1, a2);
		}
	};
}
