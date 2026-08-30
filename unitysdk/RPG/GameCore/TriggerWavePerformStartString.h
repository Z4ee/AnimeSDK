#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_METHOD_3_4E2A1E2548D507A1_OFFSET UNITYSDK_OFFSET(0x1D60C520)
#define RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_METHOD_3_AD61A5E150F91E24_OFFSET UNITYSDK_OFFSET(0x1D60C5F0)
#define RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D60C5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerWavePerformStartString_TypeDefinitionIndex = 23136;

	class TriggerWavePerformStartString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E2A1E2548D507A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWavePerformStartString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWavePerformStartString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_METHOD_3_4E2A1E2548D507A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD61A5E150F91E24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerWavePerformStartString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerWavePerformStartString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEPERFORMSTARTSTRING_METHOD_3_AD61A5E150F91E24_OFFSET))(a1, a2);
		}
	};
}
