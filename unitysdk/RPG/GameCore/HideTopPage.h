#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIDETOPPAGE_METHOD_3_3CF681114B5177AD_OFFSET UNITYSDK_OFFSET(0x1B684B10)
#define RPG_GAMECORE_HIDETOPPAGE_METHOD_3_D154B29B7B91AAEE_OFFSET UNITYSDK_OFFSET(0x1B684B50)
#define RPG_GAMECORE_HIDETOPPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B684B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideTopPage_TypeDefinitionIndex = 20113;

	class HideTopPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Hide; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CF681114B5177AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideTopPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideTopPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGE_METHOD_3_3CF681114B5177AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D154B29B7B91AAEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideTopPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideTopPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDETOPPAGE_METHOD_3_D154B29B7B91AAEE_OFFSET))(a1, a2);
		}
	};
}
