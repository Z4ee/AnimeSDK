#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITPERFORMANCEEND_METHOD_3_C35330C502EE1B20_OFFSET UNITYSDK_OFFSET(0x1DEBD0F0)
#define RPG_GAMECORE_WAITPERFORMANCEEND_METHOD_3_C5A2AFD131E740DD_OFFSET UNITYSDK_OFFSET(0x1DEBD1C0)
#define RPG_GAMECORE_WAITPERFORMANCEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBD1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPerformanceEnd_TypeDefinitionIndex = 21600;

	class WaitPerformanceEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCEEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C35330C502EE1B20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPerformanceEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPerformanceEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCEEND_METHOD_3_C35330C502EE1B20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5A2AFD131E740DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPerformanceEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPerformanceEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCEEND_METHOD_3_C5A2AFD131E740DD_OFFSET))(a1, a2);
		}
	};
}
