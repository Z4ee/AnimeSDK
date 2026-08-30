#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_043F09540D67F2E4_OFFSET UNITYSDK_OFFSET(0x1CD978A0)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_1824FE5BEBD1D479_OFFSET UNITYSDK_OFFSET(0x1CD97AC0)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_4BEDB502B11B00FF_OFFSET UNITYSDK_OFFSET(0x1CD97B00)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_BB10006205F57ED9_OFFSET UNITYSDK_OFFSET(0x1CD978F0)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD978E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterChangeTarget_TypeDefinitionIndex = 23345;

	class ByIsCharacterChangeTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_043F09540D67F2E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterChangeTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_043F09540D67F2E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB10006205F57ED9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_BB10006205F57ED9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1824FE5BEBD1D479(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_1824FE5BEBD1D479_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4BEDB502B11B00FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_4BEDB502B11B00FF_OFFSET))(a1, a2);
		}
	};
}
