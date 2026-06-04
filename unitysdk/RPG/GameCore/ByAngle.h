#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANGLE_METHOD_4_5E04DB5671B246CA_OFFSET UNITYSDK_OFFSET(0x194F1910)
#define RPG_GAMECORE_BYANGLE_METHOD_4_66418FA9BD7D4783_OFFSET UNITYSDK_OFFSET(0x194F1C00)
#define RPG_GAMECORE_BYANGLE_METHOD_4_7E0EE14F1076A8E2_OFFSET UNITYSDK_OFFSET(0x194F1830)
#define RPG_GAMECORE_BYANGLE_METHOD_4_82B131A7812078DC_OFFSET UNITYSDK_OFFSET(0x194F1B80)
#define RPG_GAMECORE_BYANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x194F18B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAngle_TypeDefinitionIndex = 19631;

	class ByAngle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7E0EE14F1076A8E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAngle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_METHOD_4_7E0EE14F1076A8E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E04DB5671B246CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_METHOD_4_5E04DB5671B246CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82B131A7812078DC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_METHOD_4_82B131A7812078DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_66418FA9BD7D4783(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_METHOD_4_66418FA9BD7D4783_OFFSET))(a1, a2);
		}
	};
}
