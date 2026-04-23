#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_2655B0A13392E6B9_OFFSET UNITYSDK_OFFSET(0x18EE5E30)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_50316AC019140497_OFFSET UNITYSDK_OFFSET(0x18EE0650)
#define RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE0600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTemplateEntityList_TypeDefinitionIndex = 22935;

	class TargetFetchTemplateEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2655B0A13392E6B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTemplateEntityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTemplateEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_2655B0A13392E6B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_50316AC019140497(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTemplateEntityList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEMPLATEENTITYLIST_METHOD_4_50316AC019140497_OFFSET))(a1, a2);
		}
	};
}
