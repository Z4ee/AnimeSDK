#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWMENU_METHOD_3_77A4461E0BBAF89D_OFFSET UNITYSDK_OFFSET(0x17700060)
#define RPG_GAMECORE_SHOWMENU_METHOD_3_BAE7CE9298B9FB0C_OFFSET UNITYSDK_OFFSET(0x177000E0)
#define RPG_GAMECORE_SHOWMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x177000B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMenu_TypeDefinitionIndex = 19433;

	class ShowMenu : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DisplaySingleMenuItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMENU__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77A4461E0BBAF89D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMenu*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMenu*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMENU_METHOD_3_77A4461E0BBAF89D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BAE7CE9298B9FB0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowMenu* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowMenu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMENU_METHOD_3_BAE7CE9298B9FB0C_OFFSET))(a1, a2);
		}
	};
}
