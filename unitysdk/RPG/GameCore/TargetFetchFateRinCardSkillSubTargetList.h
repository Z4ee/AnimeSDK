#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST_METHOD_4_65C8D6EB7A23751C_OFFSET UNITYSDK_OFFSET(0x1D5AB560)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST_METHOD_4_8C4C47A7E7802E69_OFFSET UNITYSDK_OFFSET(0x1D5AB580)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST_METHOD_4_C670167750EC98EC_OFFSET UNITYSDK_OFFSET(0x1D5AB480)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST_METHOD_4_CBBF4B6BA7995701_OFFSET UNITYSDK_OFFSET(0x1D5AB500)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFateRinCardSkillSubTargetList_TypeDefinitionIndex = 23740;

	class TargetFetchFateRinCardSkillSubTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C670167750EC98EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST_METHOD_4_C670167750EC98EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CBBF4B6BA7995701(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST_METHOD_4_CBBF4B6BA7995701_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_65C8D6EB7A23751C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST_METHOD_4_65C8D6EB7A23751C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C4C47A7E7802E69(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLSUBTARGETLIST_METHOD_4_8C4C47A7E7802E69_OFFSET))(a1, a2);
		}
	};
}
