#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_AlertLevel.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_2324D9EC737CACBB_OFFSET UNITYSDK_OFFSET(0x17578C20)
#define RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_75447B606F521C5D_OFFSET UNITYSDK_OFFSET(0x17578CF0)
#define RPG_GAMECORE_RA_BYALERTLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17578CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByAlertLevel_TypeDefinitionIndex = 18321;

	class RA_ByAlertLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_AlertLevel AlertLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2324D9EC737CACBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAlertLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAlertLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_2324D9EC737CACBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_75447B606F521C5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYALERTLEVEL_METHOD_4_75447B606F521C5D_OFFSET))(a1, a2);
		}
	};
}
