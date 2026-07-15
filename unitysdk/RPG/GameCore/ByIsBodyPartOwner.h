#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_06947BDB8B588370_OFFSET UNITYSDK_OFFSET(0x1A8D8990)
#define RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_24CD3E5BC3DC4EEF_OFFSET UNITYSDK_OFFSET(0x1A8D8B50)
#define RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_C36CF3E321D4B591_OFFSET UNITYSDK_OFFSET(0x1A8D8B80)
#define RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_D66BD13C5CDDF0D5_OFFSET UNITYSDK_OFFSET(0x1A8D89D0)
#define RPG_GAMECORE_BYISBODYPARTOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D89C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBodyPartOwner_TypeDefinitionIndex = 22477;

	class ByIsBodyPartOwner : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_06947BDB8B588370(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPartOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPartOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_06947BDB8B588370_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D66BD13C5CDDF0D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPartOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPartOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_D66BD13C5CDDF0D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_24CD3E5BC3DC4EEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartOwner*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_24CD3E5BC3DC4EEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C36CF3E321D4B591(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_C36CF3E321D4B591_OFFSET))(a1, a2);
		}
	};
}
