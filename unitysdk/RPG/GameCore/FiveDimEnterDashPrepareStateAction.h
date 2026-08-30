#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_METHOD_3_1154A2F7A94845D9_OFFSET UNITYSDK_OFFSET(0x1D85B8B0)
#define RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_METHOD_3_36EF6A85E206F204_OFFSET UNITYSDK_OFFSET(0x1D85B930)
#define RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85B920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnterDashPrepareStateAction_TypeDefinitionIndex = 18529;

	class FiveDimEnterDashPrepareStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1154A2F7A94845D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_METHOD_3_1154A2F7A94845D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36EF6A85E206F204(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_METHOD_3_36EF6A85E206F204_OFFSET))(a1, a2);
		}
	};
}
