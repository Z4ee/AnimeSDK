#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_METHOD_3_20B77C99D6968DF8_OFFSET UNITYSDK_OFFSET(0x19E20960)
#define RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_METHOD_3_AD61A5E150F91E24_OFFSET UNITYSDK_OFFSET(0x19E20A70)
#define RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19E20A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerWavePerformStartString_TypeDefinitionIndex = 22122;

	class TriggerWavePerformStartString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20B77C99D6968DF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWavePerformStartString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWavePerformStartString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_METHOD_3_20B77C99D6968DF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD61A5E150F91E24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWavePerformStartString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWavePerformStartString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_METHOD_3_AD61A5E150F91E24_OFFSET))(a1, a2);
		}
	};
}
