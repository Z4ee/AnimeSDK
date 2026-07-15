#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOCKRESHACAMERA_METHOD_3_455DB4AE8710489C_OFFSET UNITYSDK_OFFSET(0x1B8850C0)
#define RPG_GAMECORE_UNLOCKRESHACAMERA_METHOD_3_66D00F95BF161699_OFFSET UNITYSDK_OFFSET(0x1B885190)
#define RPG_GAMECORE_UNLOCKRESHACAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B885180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockReShaCamera_TypeDefinitionIndex = 21221;

	class UnlockReShaCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKRESHACAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_455DB4AE8710489C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockReShaCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockReShaCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKRESHACAMERA_METHOD_3_455DB4AE8710489C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66D00F95BF161699(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockReShaCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockReShaCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKRESHACAMERA_METHOD_3_66D00F95BF161699_OFFSET))(a1, a2);
		}
	};
}
