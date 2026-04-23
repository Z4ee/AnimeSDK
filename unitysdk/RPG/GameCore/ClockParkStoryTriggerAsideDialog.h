#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_METHOD_3_CFAEE72EB100DED9_OFFSET UNITYSDK_OFFSET(0x18821230)
#define RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_METHOD_3_E07008660ECC0B40_OFFSET UNITYSDK_OFFSET(0x188212B0)
#define RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x18821280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryTriggerAsideDialog_TypeDefinitionIndex = 19935;

	class ClockParkStoryTriggerAsideDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsAside; // 0x18
		::RPG::Client::TextID TextID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CFAEE72EB100DED9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_METHOD_3_CFAEE72EB100DED9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E07008660ECC0B40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStoryTriggerAsideDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYTRIGGERASIDEDIALOG_METHOD_3_E07008660ECC0B40_OFFSET))(a1, a2);
		}
	};
}
