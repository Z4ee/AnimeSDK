#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWITCHUIMENUBGM_METHOD_3_17A6D5636725895F_OFFSET UNITYSDK_OFFSET(0x1779A280)
#define RPG_GAMECORE_SWITCHUIMENUBGM_METHOD_3_48E2681717C447BB_OFFSET UNITYSDK_OFFSET(0x1779A200)
#define RPG_GAMECORE_SWITCHUIMENUBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1779A250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchUIMenuBGM_TypeDefinitionIndex = 20069;

	class SwitchUIMenuBGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StateName; // 0x18
		::System::Boolean ShouldStop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHUIMENUBGM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48E2681717C447BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchUIMenuBGM*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchUIMenuBGM*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHUIMENUBGM_METHOD_3_48E2681717C447BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17A6D5636725895F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchUIMenuBGM* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchUIMenuBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHUIMENUBGM_METHOD_3_17A6D5636725895F_OFFSET))(a1, a2);
		}
	};
}
