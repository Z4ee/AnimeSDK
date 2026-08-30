#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_0EF47C3794C40C47_OFFSET UNITYSDK_OFFSET(0x1E1B7920)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_50316AC019140497_OFFSET UNITYSDK_OFFSET(0x1E1B78A0)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_7AF745F2861EFB7A_OFFSET UNITYSDK_OFFSET(0x1E1B7900)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_B564867EE79A7726_OFFSET UNITYSDK_OFFSET(0x1E1B7820)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B7890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTemplateEntityList_TypeDefinitionIndex = 23669;

	class TargetFetchTemplateEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B564867EE79A7726(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTemplateEntityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTemplateEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_B564867EE79A7726_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_50316AC019140497(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTemplateEntityList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_50316AC019140497_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7AF745F2861EFB7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTemplateEntityList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTemplateEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_7AF745F2861EFB7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0EF47C3794C40C47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTemplateEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_0EF47C3794C40C47_OFFSET))(a1, a2);
		}
	};
}
