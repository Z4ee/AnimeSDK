#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchMascotSection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_METHOD_3_02CEAD5B11EE4363_OFFSET UNITYSDK_OFFSET(0x19CDD650)
#define RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_METHOD_3_BE1BC483F7001954_OFFSET UNITYSDK_OFFSET(0x19CDD6D0)
#define RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDD6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotSetSectionVisible_TypeDefinitionIndex = 20777;

	class SwitchMascotSetSectionVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SwitchMascotSection Section; // 0x18
		::System::Boolean Visible; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02CEAD5B11EE4363(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotSetSectionVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotSetSectionVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_METHOD_3_02CEAD5B11EE4363_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE1BC483F7001954(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotSetSectionVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotSetSectionVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETSECTIONVISIBLE_METHOD_3_BE1BC483F7001954_OFFSET))(a1, a2);
		}
	};
}
