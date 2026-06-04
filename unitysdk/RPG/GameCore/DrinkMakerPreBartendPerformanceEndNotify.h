#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_METHOD_3_C5DB32673BA0AA40_OFFSET UNITYSDK_OFFSET(0x196C92F0)
#define RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_METHOD_3_CF4E2E6529C5B6CC_OFFSET UNITYSDK_OFFSET(0x196C9400)
#define RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x196C93D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerPreBartendPerformanceEndNotify_TypeDefinitionIndex = 20496;

	class DrinkMakerPreBartendPerformanceEndNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5DB32673BA0AA40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_METHOD_3_C5DB32673BA0AA40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF4E2E6529C5B6CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerPreBartendPerformanceEndNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERPREBARTENDPERFORMANCEENDNOTIFY_METHOD_3_CF4E2E6529C5B6CC_OFFSET))(a1, a2);
		}
	};
}
