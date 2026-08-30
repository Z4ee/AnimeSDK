#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_METHOD_3_C310821A421FF865_OFFSET UNITYSDK_OFFSET(0x1D2FDB10)
#define RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_METHOD_3_C8719A6A6AF28BE8_OFFSET UNITYSDK_OFFSET(0x1D2FDA40)
#define RPG_GAMECORE_OPENHIPPLENGROWTHPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FDB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenHipplenGrowthPage_TypeDefinitionIndex = 21067;

	class OpenHipplenGrowthPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENGROWTHPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C8719A6A6AF28BE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenHipplenGrowthPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenHipplenGrowthPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_METHOD_3_C8719A6A6AF28BE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C310821A421FF865(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenHipplenGrowthPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenHipplenGrowthPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENGROWTHPAGE_METHOD_3_C310821A421FF865_OFFSET))(a1, a2);
		}
	};
}
