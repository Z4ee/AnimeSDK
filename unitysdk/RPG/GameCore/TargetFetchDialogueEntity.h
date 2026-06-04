#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_METHOD_4_42A99989A25795DE_OFFSET UNITYSDK_OFFSET(0x19D055D0)
#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_METHOD_4_4DA864CECA5CFE07_OFFSET UNITYSDK_OFFSET(0x19CF9020)
#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_METHOD_4_64BE77C65A338FA9_OFFSET UNITYSDK_OFFSET(0x19D0C920)
#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_METHOD_4_A73C4D5BF540DAD7_OFFSET UNITYSDK_OFFSET(0x19D0CA00)
#define RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF8FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchDialogueEntity_TypeDefinitionIndex = 22567;

	class TargetFetchDialogueEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_64BE77C65A338FA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDialogueEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDialogueEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_METHOD_4_64BE77C65A338FA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4DA864CECA5CFE07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDialogueEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_METHOD_4_4DA864CECA5CFE07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_42A99989A25795DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDialogueEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDialogueEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_METHOD_4_42A99989A25795DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A73C4D5BF540DAD7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDialogueEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDIALOGUEENTITY_METHOD_4_A73C4D5BF540DAD7_OFFSET))(a1, a2);
		}
	};
}
