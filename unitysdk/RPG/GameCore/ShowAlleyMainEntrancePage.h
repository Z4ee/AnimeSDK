#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_METHOD_3_6738652343AAEBAF_OFFSET UNITYSDK_OFFSET(0x19C73B10)
#define RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_METHOD_3_7B19B3BB500F7EE9_OFFSET UNITYSDK_OFFSET(0x19C73B90)
#define RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C73B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAlleyMainEntrancePage_TypeDefinitionIndex = 19971;

	class ShowAlleyMainEntrancePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSkip; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6738652343AAEBAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAlleyMainEntrancePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAlleyMainEntrancePage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_METHOD_3_6738652343AAEBAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7B19B3BB500F7EE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAlleyMainEntrancePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAlleyMainEntrancePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_METHOD_3_7B19B3BB500F7EE9_OFFSET))(a1, a2);
		}
	};
}
