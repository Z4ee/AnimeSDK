#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_METHOD_3_A2D4CC48B92516FA_OFFSET UNITYSDK_OFFSET(0x1B4B4460)
#define RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_METHOD_3_F7B69C6EBC081D73_OFFSET UNITYSDK_OFFSET(0x1B4B44A0)
#define RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B4490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplay_SetFloorSavedValue_TypeDefinitionIndex = 21045;

	class PerformanceReplay_SetFloorSavedValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* DynamicName; // 0x18
		::System::Int16 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A2D4CC48B92516FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_METHOD_3_A2D4CC48B92516FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7B69C6EBC081D73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETFLOORSAVEDVALUE_METHOD_3_F7B69C6EBC081D73_OFFSET))(a1, a2);
		}
	};
}
