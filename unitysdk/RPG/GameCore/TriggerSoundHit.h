#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERSOUNDHIT_METHOD_3_5EA5F9F4FF5A3132_OFFSET UNITYSDK_OFFSET(0x1D60A570)
#define RPG_GAMECORE_TRIGGERSOUNDHIT_METHOD_3_CE635A75996DD1AF_OFFSET UNITYSDK_OFFSET(0x1D60A640)
#define RPG_GAMECORE_TRIGGERSOUNDHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D60A630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSoundHit_TypeDefinitionIndex = 22132;

	class TriggerSoundHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5EA5F9F4FF5A3132(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSoundHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSoundHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDHIT_METHOD_3_5EA5F9F4FF5A3132_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE635A75996DD1AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSoundHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSoundHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDHIT_METHOD_3_CE635A75996DD1AF_OFFSET))(a1, a2);
		}
	};
}
