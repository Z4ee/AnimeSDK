#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_05ECD7E575083F26_OFFSET UNITYSDK_OFFSET(0x1CF0FC60)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_276CC8DC2B1DFCFE_OFFSET UNITYSDK_OFFSET(0x1CF0FCD0)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_9AB8A5D627B4FBC6_OFFSET UNITYSDK_OFFSET(0x1CF0FAA0)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_BA966344E25E942F_OFFSET UNITYSDK_OFFSET(0x1CF0F9E0)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0FA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainsCharacterState_TypeDefinitionIndex = 22503;

	class ByContainsCharacterState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* SaveKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BA966344E25E942F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsCharacterState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsCharacterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_BA966344E25E942F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9AB8A5D627B4FBC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_9AB8A5D627B4FBC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05ECD7E575083F26(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsCharacterState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsCharacterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_05ECD7E575083F26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_276CC8DC2B1DFCFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_276CC8DC2B1DFCFE_OFFSET))(a1, a2);
		}
	};
}
