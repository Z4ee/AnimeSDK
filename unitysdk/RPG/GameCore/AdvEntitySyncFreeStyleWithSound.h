#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_METHOD_3_AD0DA1F873DE4061_OFFSET UNITYSDK_OFFSET(0x1D6B7920)
#define RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_METHOD_3_EFA8B515F02945DE_OFFSET UNITYSDK_OFFSET(0x1D6B78D0)
#define RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B7910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntitySyncFreeStyleWithSound_TypeDefinitionIndex = 22178;

	class AdvEntitySyncFreeStyleWithSound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SoundEventName; // 0x18
		::System::Single NormalizedTransitionDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFA8B515F02945DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_METHOD_3_EFA8B515F02945DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD0DA1F873DE4061(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntitySyncFreeStyleWithSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSYNCFREESTYLEWITHSOUND_METHOD_3_AD0DA1F873DE4061_OFFSET))(a1, a2);
		}
	};
}
