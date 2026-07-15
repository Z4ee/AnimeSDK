#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_0713B4F64B01FD79_OFFSET UNITYSDK_OFFSET(0x19CC3EE0)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_08EA3F1BCFA8866B_OFFSET UNITYSDK_OFFSET(0x19CC3CF0)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_3ADC6B9D104B29FF_OFFSET UNITYSDK_OFFSET(0x19CC3F10)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_AF725BC546131A3E_OFFSET UNITYSDK_OFFSET(0x19CC3CB0)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC3CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckCustomValueBool_TypeDefinitionIndex = 21736;

	class ByCheckCustomValueBool : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash Key; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AF725BC546131A3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCustomValueBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCustomValueBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_AF725BC546131A3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_08EA3F1BCFA8866B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_08EA3F1BCFA8866B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0713B4F64B01FD79(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_0713B4F64B01FD79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3ADC6B9D104B29FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_3ADC6B9D104B29FF_OFFSET))(a1, a2);
		}
	};
}
