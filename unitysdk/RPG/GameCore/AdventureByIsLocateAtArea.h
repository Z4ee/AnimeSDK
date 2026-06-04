#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_697698AB59961ECF_OFFSET UNITYSDK_OFFSET(0x19445090)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_9764DCFD542A3144_OFFSET UNITYSDK_OFFSET(0x19444DB0)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_A243E2AC17A7B074_OFFSET UNITYSDK_OFFSET(0x19445130)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_F5C2609161ED58FF_OFFSET UNITYSDK_OFFSET(0x19444ED0)
#define RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x19444E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsLocateAtArea_TypeDefinitionIndex = 19636;

	class AdventureByIsLocateAtArea : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* AreaName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9764DCFD542A3144(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsLocateAtArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsLocateAtArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_9764DCFD542A3144_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F5C2609161ED58FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_F5C2609161ED58FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_697698AB59961ECF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_697698AB59961ECF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A243E2AC17A7B074(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISLOCATEATAREA_METHOD_4_A243E2AC17A7B074_OFFSET))(a1, a2);
		}
	};
}
