#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_610411E440498695_OFFSET UNITYSDK_OFFSET(0x19D0C240)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_8B7CDD538F97985B_OFFSET UNITYSDK_OFFSET(0x19D0C320)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_D12755E6796AF9C2_OFFSET UNITYSDK_OFFSET(0x19D04F10)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_E960BF71D6665F63_OFFSET UNITYSDK_OFFSET(0x19CF8440)
#define RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF83F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchContextDialogueTalkTrigger_TypeDefinitionIndex = 22566;

	class TargetFetchContextDialogueTalkTrigger : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_610411E440498695(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_610411E440498695_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E960BF71D6665F63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_E960BF71D6665F63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D12755E6796AF9C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_D12755E6796AF9C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B7CDD538F97985B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCONTEXTDIALOGUETALKTRIGGER_METHOD_4_8B7CDD538F97985B_OFFSET))(a1, a2);
		}
	};
}
