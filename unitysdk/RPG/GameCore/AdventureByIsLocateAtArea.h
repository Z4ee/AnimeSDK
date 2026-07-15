#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_3A2E67E2F8A85855_OFFSET UNITYSDK_OFFSET(0x1AE52860)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_95F2A5EC0EC6DFC4_OFFSET UNITYSDK_OFFSET(0x1AE52800)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_B4DB83906A7A3FB2_OFFSET UNITYSDK_OFFSET(0x1AE525A0)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_F5C2609161ED58FF_OFFSET UNITYSDK_OFFSET(0x1AE52640)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE52600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsLocateAtArea_TypeDefinitionIndex = 19995;

	class AdventureByIsLocateAtArea : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* AreaName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B4DB83906A7A3FB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsLocateAtArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsLocateAtArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_B4DB83906A7A3FB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F5C2609161ED58FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_F5C2609161ED58FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95F2A5EC0EC6DFC4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_95F2A5EC0EC6DFC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3A2E67E2F8A85855(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_3A2E67E2F8A85855_OFFSET))(a1, a2);
		}
	};
}
