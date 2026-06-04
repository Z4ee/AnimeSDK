#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWUI_METHOD_3_4FD773016802648E_OFFSET UNITYSDK_OFFSET(0x19C864B0)
#define RPG_GAMECORE_SHOWUI_METHOD_3_8B2288CB66385CD1_OFFSET UNITYSDK_OFFSET(0x19C86430)
#define RPG_GAMECORE_SHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C86480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowUI_TypeDefinitionIndex = 22536;

	class ShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Boolean IsHide; // 0x20
		::System::Boolean WaitForExit; // 0x21
		::RPG::GameCore::DynamicString* Param; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUICustomEvent; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIExitImmediately; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B2288CB66385CD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUI_METHOD_3_8B2288CB66385CD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4FD773016802648E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUI_METHOD_3_4FD773016802648E_OFFSET))(a1, a2);
		}
	};
}
