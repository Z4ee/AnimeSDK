#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerSound.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_METHOD_4_81FA7E95E2A1900D_OFFSET UNITYSDK_OFFSET(0x177A40E0)
#define RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_METHOD_4_B533B14F62F1B355_OFFSET UNITYSDK_OFFSET(0x177A4060)
#define RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x177A40B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SynchronouslyTriggerSound_TypeDefinitionIndex = 18920;

	class SynchronouslyTriggerSound : public ::RPG::GameCore::TriggerSound
	{
	public:
		::RPG::GameCore::DynamicString* SynchronizedSoundName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B533B14F62F1B355(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SynchronouslyTriggerSound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SynchronouslyTriggerSound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_METHOD_4_B533B14F62F1B355_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_81FA7E95E2A1900D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SynchronouslyTriggerSound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SynchronouslyTriggerSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCHRONOUSLYTRIGGERSOUND_METHOD_4_81FA7E95E2A1900D_OFFSET))(a1, a2);
		}
	};
}
