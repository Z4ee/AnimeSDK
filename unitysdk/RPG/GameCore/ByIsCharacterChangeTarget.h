#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_70711479CA1A60A5_OFFSET UNITYSDK_OFFSET(0x1955C330)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_7D628D5452071835_OFFSET UNITYSDK_OFFSET(0x1955C5E0)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_BB10006205F57ED9_OFFSET UNITYSDK_OFFSET(0x1955C410)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_D3AD8DD00F0ED002_OFFSET UNITYSDK_OFFSET(0x1955C660)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1955C3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterChangeTarget_TypeDefinitionIndex = 22325;

	class ByIsCharacterChangeTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_70711479CA1A60A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterChangeTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_70711479CA1A60A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB10006205F57ED9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_BB10006205F57ED9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D628D5452071835(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_7D628D5452071835_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D3AD8DD00F0ED002(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_METHOD_4_D3AD8DD00F0ED002_OFFSET))(a1, a2);
		}
	};
}
