#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_METHOD_3_A484DB9C10E848F0_OFFSET UNITYSDK_OFFSET(0x1CBA4E40)
#define RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_METHOD_3_FFC52772E40F7ADF_OFFSET UNITYSDK_OFFSET(0x1CBA4E00)
#define RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA4E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTrackNpcSoundTrigger_TypeDefinitionIndex = 21943;

	class AdvTrackNpcSoundTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single AddPerceiveValue; // 0x18
		::System::Single AddAlertValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FFC52772E40F7ADF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcSoundTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcSoundTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_METHOD_3_FFC52772E40F7ADF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A484DB9C10E848F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcSoundTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcSoundTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_METHOD_3_A484DB9C10E848F0_OFFSET))(a1, a2);
		}
	};
}
