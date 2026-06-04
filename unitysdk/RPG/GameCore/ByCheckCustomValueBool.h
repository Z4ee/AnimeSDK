#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_08EA3F1BCFA8866B_OFFSET UNITYSDK_OFFSET(0x194F9F50)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_6C5143EEB1374135_OFFSET UNITYSDK_OFFSET(0x194FA140)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_AF22C280DB8CEA93_OFFSET UNITYSDK_OFFSET(0x194F9E80)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_C29C446A6E3EF902_OFFSET UNITYSDK_OFFSET(0x194FA1C0)
#define RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x194F9F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckCustomValueBool_TypeDefinitionIndex = 21318;

	class ByCheckCustomValueBool : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash Key; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AF22C280DB8CEA93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCustomValueBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCustomValueBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_AF22C280DB8CEA93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_08EA3F1BCFA8866B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_08EA3F1BCFA8866B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C5143EEB1374135(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_6C5143EEB1374135_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C29C446A6E3EF902(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCUSTOMVALUEBOOL_METHOD_4_C29C446A6E3EF902_OFFSET))(a1, a2);
		}
	};
}
