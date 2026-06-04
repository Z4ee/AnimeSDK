#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarCustomUIStyle.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIONBARUICONFIG_METHOD_2_B9FEEDAA608A5CA5_OFFSET UNITYSDK_OFFSET(0x193CA620)
#define RPG_GAMECORE_ACTIONBARUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x193CA760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBarUIConfig_TypeDefinitionIndex = 21428;

	class ActionBarUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ActionBarCustomUIStyle CustomUIStyle; // 0x10
		::System::String* HeadIconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBARUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B9FEEDAA608A5CA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBarUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBarUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBARUICONFIG_METHOD_2_B9FEEDAA608A5CA5_OFFSET))(a1, a2);
		}
	};
}
