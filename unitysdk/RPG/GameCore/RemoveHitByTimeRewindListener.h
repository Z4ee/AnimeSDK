#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_METHOD_3_62ADC3CF2461F5A0_OFFSET UNITYSDK_OFFSET(0x1B9CFD90)
#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_METHOD_3_64FD42DB535B1B5D_OFFSET UNITYSDK_OFFSET(0x1B9CFE60)
#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CFE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveHitByTimeRewindListener_TypeDefinitionIndex = 19877;

	class RemoveHitByTimeRewindListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_62ADC3CF2461F5A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveHitByTimeRewindListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_METHOD_3_62ADC3CF2461F5A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64FD42DB535B1B5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_METHOD_3_64FD42DB535B1B5D_OFFSET))(a1, a2);
		}
	};
}
