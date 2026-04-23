#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleTimeRewindEntityAnimEventBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_METHOD_3_7C57C0CCCCBB0669_OFFSET UNITYSDK_OFFSET(0x18E6EA40)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_METHOD_3_E2025E265CFFA78A_OFFSET UNITYSDK_OFFSET(0x18E6E9E0)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6EA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleTimeRewindEntityAnimClipEventConfig_TypeDefinitionIndex = 15719;

	class SingleTimeRewindEntityAnimClipEventConfig : public ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig
	{
	public:
		::System::String* AnimClipName; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2025E265CFFA78A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_METHOD_3_E2025E265CFFA78A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C57C0CCCCBB0669(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_METHOD_3_7C57C0CCCCBB0669_OFFSET))(a1, a2);
		}
	};
}
