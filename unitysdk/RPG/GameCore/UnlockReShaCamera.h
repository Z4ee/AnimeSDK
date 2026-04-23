#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOCKRESHACAMERA_METHOD_3_66D00F95BF161699_OFFSET UNITYSDK_OFFSET(0x190E5D40)
#define RPG_GAMECORE_UNLOCKRESHACAMERA_METHOD_3_C6299A678940B665_OFFSET UNITYSDK_OFFSET(0x190E5C30)
#define RPG_GAMECORE_UNLOCKRESHACAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x190E5D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnlockReShaCamera_TypeDefinitionIndex = 20887;

	class UnlockReShaCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKRESHACAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6299A678940B665(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockReShaCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockReShaCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKRESHACAMERA_METHOD_3_C6299A678940B665_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66D00F95BF161699(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnlockReShaCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnlockReShaCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKRESHACAMERA_METHOD_3_66D00F95BF161699_OFFSET))(a1, a2);
		}
	};
}
