#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_METHOD_3_0BC5D5DC144CE6B5_OFFSET UNITYSDK_OFFSET(0x18E578C0)
#define RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_METHOD_3_ED689718DD457AB3_OFFSET UNITYSDK_OFFSET(0x18E57940)
#define RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E57910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAlleyMainEntrancePage_TypeDefinitionIndex = 20113;

	class ShowAlleyMainEntrancePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSkip; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0BC5D5DC144CE6B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAlleyMainEntrancePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAlleyMainEntrancePage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_METHOD_3_0BC5D5DC144CE6B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED689718DD457AB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAlleyMainEntrancePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAlleyMainEntrancePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWALLEYMAINENTRANCEPAGE_METHOD_3_ED689718DD457AB3_OFFSET))(a1, a2);
		}
	};
}
