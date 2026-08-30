#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_METHOD_4_0C33D8F949300978_OFFSET UNITYSDK_OFFSET(0x1D5AB670)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_METHOD_4_4054C9BF14CFADB0_OFFSET UNITYSDK_OFFSET(0x1D5AB590)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_METHOD_4_5F1A9D2E07C53485_OFFSET UNITYSDK_OFFSET(0x1D5AB690)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_METHOD_4_88C041CCFC0D3C35_OFFSET UNITYSDK_OFFSET(0x1D5AB610)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFateRinCardSkillTargetList_TypeDefinitionIndex = 23741;

	class TargetFetchFateRinCardSkillTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4054C9BF14CFADB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_METHOD_4_4054C9BF14CFADB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88C041CCFC0D3C35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_METHOD_4_88C041CCFC0D3C35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0C33D8F949300978(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_METHOD_4_0C33D8F949300978_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5F1A9D2E07C53485(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLTARGETLIST_METHOD_4_5F1A9D2E07C53485_OFFSET))(a1, a2);
		}
	};
}
