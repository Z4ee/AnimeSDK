#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_0DF9EE681003664F_OFFSET UNITYSDK_OFFSET(0x195DB690)
#define RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_257B07483E2414CB_OFFSET UNITYSDK_OFFSET(0x195DB5C0)
#define RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_7411E51BF0891724_OFFSET UNITYSDK_OFFSET(0x195DB8D0)
#define RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_80EC186F78F612BF_OFFSET UNITYSDK_OFFSET(0x195DB850)
#define RPG_GAMECORE_BYTARGETLISTALL__CTOR_OFFSET UNITYSDK_OFFSET(0x195DB640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetListAll_TypeDefinitionIndex = 22495;

	class ByTargetListAll : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_257B07483E2414CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListAll*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListAll*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_257B07483E2414CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0DF9EE681003664F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_0DF9EE681003664F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_80EC186F78F612BF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_80EC186F78F612BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7411E51BF0891724(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTALL_METHOD_4_7411E51BF0891724_OFFSET))(a1, a2);
		}
	};
}
