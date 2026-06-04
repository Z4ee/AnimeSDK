#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOSEALLTOPPAGE_METHOD_3_B1257A545029C8B6_OFFSET UNITYSDK_OFFSET(0x19663DF0)
#define RPG_GAMECORE_CLOSEALLTOPPAGE_METHOD_3_DB69542202AF55EA_OFFSET UNITYSDK_OFFSET(0x19663CE0)
#define RPG_GAMECORE_CLOSEALLTOPPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19663DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseAllTopPage_TypeDefinitionIndex = 19479;

	class CloseAllTopPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEALLTOPPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DB69542202AF55EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseAllTopPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseAllTopPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEALLTOPPAGE_METHOD_3_DB69542202AF55EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1257A545029C8B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseAllTopPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseAllTopPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEALLTOPPAGE_METHOD_3_B1257A545029C8B6_OFFSET))(a1, a2);
		}
	};
}
