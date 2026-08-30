#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionBarUIConfig; }

#define RPG_GAMECORE_TURNINSERTACTIONUICONFIG_METHOD_2_4A5664FDA4CBB716_OFFSET UNITYSDK_OFFSET(0x1D611490)
#define RPG_GAMECORE_TURNINSERTACTIONUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6115B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertActionUIConfig_TypeDefinitionIndex = 22406;

	class TurnInsertActionUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ShowInActionBar; // 0x10
		::RPG::GameCore::ActionBarUIConfig* ActionBarUIConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTIONUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4A5664FDA4CBB716(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertActionUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertActionUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTIONUICONFIG_METHOD_2_4A5664FDA4CBB716_OFFSET))(a1, a2);
		}
	};
}
