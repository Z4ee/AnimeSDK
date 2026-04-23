#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GONEXTTARGETINLIST_METHOD_3_22C22C4CD6B107FA_OFFSET UNITYSDK_OFFSET(0x18999610)
#define RPG_GAMECORE_GONEXTTARGETINLIST_METHOD_3_783238B496FF21CE_OFFSET UNITYSDK_OFFSET(0x18999500)
#define RPG_GAMECORE_GONEXTTARGETINLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x189995E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GoNextTargetInList_TypeDefinitionIndex = 21349;

	class GoNextTargetInList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GONEXTTARGETINLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_783238B496FF21CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GoNextTargetInList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GoNextTargetInList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GONEXTTARGETINLIST_METHOD_3_783238B496FF21CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22C22C4CD6B107FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GoNextTargetInList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GoNextTargetInList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GONEXTTARGETINLIST_METHOD_3_22C22C4CD6B107FA_OFFSET))(a1, a2);
		}
	};
}
