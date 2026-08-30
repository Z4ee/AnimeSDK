#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_82E7F2FA2D5D0D9D_OFFSET UNITYSDK_OFFSET(0x1CF32360)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_8F118E6C7E849780_OFFSET UNITYSDK_OFFSET(0x1CF32140)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_D4A514876B75BC73_OFFSET UNITYSDK_OFFSET(0x1CF323A0)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_D8F011662CED1885_OFFSET UNITYSDK_OFFSET(0x1CF32190)
#define RPG_GAMECORE_BYISCHARACTERCHANGESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF32180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterChangeSource_TypeDefinitionIndex = 23344;

	class ByIsCharacterChangeSource : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F118E6C7E849780(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterChangeSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterChangeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_8F118E6C7E849780_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D8F011662CED1885(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_D8F011662CED1885_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82E7F2FA2D5D0D9D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_82E7F2FA2D5D0D9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4A514876B75BC73(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGESOURCE_METHOD_4_D4A514876B75BC73_OFFSET))(a1, a2);
		}
	};
}
