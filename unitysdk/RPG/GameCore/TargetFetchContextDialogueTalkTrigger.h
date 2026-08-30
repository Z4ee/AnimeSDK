#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_4B6C6A72FD8E18E2_OFFSET UNITYSDK_OFFSET(0x1E16DB60)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_8B7CDD538F97985B_OFFSET UNITYSDK_OFFSET(0x1E16DCA0)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_AA93B692FA7D23F7_OFFSET UNITYSDK_OFFSET(0x1E16DC60)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_E960BF71D6665F63_OFFSET UNITYSDK_OFFSET(0x1E16DC00)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16DBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchContextDialogueTalkTrigger_TypeDefinitionIndex = 23609;

	class TargetFetchContextDialogueTalkTrigger : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4B6C6A72FD8E18E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_4B6C6A72FD8E18E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E960BF71D6665F63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_E960BF71D6665F63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA93B692FA7D23F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_AA93B692FA7D23F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B7CDD538F97985B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_8B7CDD538F97985B_OFFSET))(a1, a2);
		}
	};
}
