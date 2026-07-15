#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REFRESHCHANGEPHASEUI_METHOD_3_21E09E0E77937F57_OFFSET UNITYSDK_OFFSET(0x1B9C06D0)
#define RPG_GAMECORE_REFRESHCHANGEPHASEUI_METHOD_3_CB2DE14BED3A2FFA_OFFSET UNITYSDK_OFFSET(0x1B9C0600)
#define RPG_GAMECORE_REFRESHCHANGEPHASEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C06C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshChangePhaseUI_TypeDefinitionIndex = 22376;

	class RefreshChangePhaseUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHCHANGEPHASEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB2DE14BED3A2FFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshChangePhaseUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshChangePhaseUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHCHANGEPHASEUI_METHOD_3_CB2DE14BED3A2FFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21E09E0E77937F57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshChangePhaseUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshChangePhaseUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHCHANGEPHASEUI_METHOD_3_21E09E0E77937F57_OFFSET))(a1, a2);
		}
	};
}
