#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_00F1E4D06FFD47D4_OFFSET UNITYSDK_OFFSET(0x1A8C8770)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_A262E9038B1F7FE1_OFFSET UNITYSDK_OFFSET(0x1A8C85F0)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_AFDA1D625C5F8AD5_OFFSET UNITYSDK_OFFSET(0x1A8C87A0)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_BEC3E6BB528B93AA_OFFSET UNITYSDK_OFFSET(0x1A8C8630)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C8620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasPlayerMoveInput_TypeDefinitionIndex = 19473;

	class ByHasPlayerMoveInput : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A262E9038B1F7FE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPlayerMoveInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPlayerMoveInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_A262E9038B1F7FE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BEC3E6BB528B93AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_BEC3E6BB528B93AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00F1E4D06FFD47D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_00F1E4D06FFD47D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFDA1D625C5F8AD5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_METHOD_4_AFDA1D625C5F8AD5_OFFSET))(a1, a2);
		}
	};
}
