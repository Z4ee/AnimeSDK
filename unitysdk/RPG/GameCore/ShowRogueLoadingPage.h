#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWROGUELOADINGPAGE_METHOD_3_3B602943029EE417_OFFSET UNITYSDK_OFFSET(0x18E65C00)
#define RPG_GAMECORE_SHOWROGUELOADINGPAGE_METHOD_3_7C9B6B2E5E4D6A8B_OFFSET UNITYSDK_OFFSET(0x18E65D10)
#define RPG_GAMECORE_SHOWROGUELOADINGPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E65CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueLoadingPage_TypeDefinitionIndex = 19788;

	class ShowRogueLoadingPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUELOADINGPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B602943029EE417(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueLoadingPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueLoadingPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUELOADINGPAGE_METHOD_3_3B602943029EE417_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C9B6B2E5E4D6A8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueLoadingPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueLoadingPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUELOADINGPAGE_METHOD_3_7C9B6B2E5E4D6A8B_OFFSET))(a1, a2);
		}
	};
}
