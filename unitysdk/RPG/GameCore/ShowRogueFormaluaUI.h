#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWROGUEFORMALUAUI_METHOD_3_862E77D4EB14EED6_OFFSET UNITYSDK_OFFSET(0x1D52E810)
#define RPG_GAMECORE_SHOWROGUEFORMALUAUI_METHOD_3_FB2374F35CC9D699_OFFSET UNITYSDK_OFFSET(0x1D52E850)
#define RPG_GAMECORE_SHOWROGUEFORMALUAUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52E840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueFormaluaUI_TypeDefinitionIndex = 20572;

	class ShowRogueFormaluaUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* FormaluaIDList; // 0x18
		::System::Boolean ShowGetOrDetail; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEFORMALUAUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_862E77D4EB14EED6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueFormaluaUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueFormaluaUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEFORMALUAUI_METHOD_3_862E77D4EB14EED6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FB2374F35CC9D699(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueFormaluaUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueFormaluaUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEFORMALUAUI_METHOD_3_FB2374F35CC9D699_OFFSET))(a1, a2);
		}
	};
}
