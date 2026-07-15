#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleTimeRewindEntityAnimEventBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_METHOD_3_D3E6EDA78094F935_OFFSET UNITYSDK_OFFSET(0x1BE4DA90)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_METHOD_3_E356A74CF43AD3D8_OFFSET UNITYSDK_OFFSET(0x1BE4DAF0)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4DAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleTimeRewindEntityAnimClipEventConfig_TypeDefinitionIndex = 15948;

	class SingleTimeRewindEntityAnimClipEventConfig : public ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig
	{
	public:
		::System::String* AnimClipName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D3E6EDA78094F935(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_METHOD_3_D3E6EDA78094F935_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E356A74CF43AD3D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_METHOD_3_E356A74CF43AD3D8_OFFSET))(a1, a2);
		}
	};
}
