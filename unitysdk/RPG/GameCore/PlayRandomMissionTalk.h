#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYRANDOMMISSIONTALK_METHOD_4_3D02EFB04E5B9DCF_OFFSET UNITYSDK_OFFSET(0x18C10F40)
#define RPG_GAMECORE_PLAYRANDOMMISSIONTALK_METHOD_4_4930DF5DEBFA4891_OFFSET UNITYSDK_OFFSET(0x18C10EC0)
#define RPG_GAMECORE_PLAYRANDOMMISSIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C10F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayRandomMissionTalk_TypeDefinitionIndex = 22413;

	class PlayRandomMissionTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Single CD; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYRANDOMMISSIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4930DF5DEBFA4891(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayRandomMissionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayRandomMissionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYRANDOMMISSIONTALK_METHOD_4_4930DF5DEBFA4891_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3D02EFB04E5B9DCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayRandomMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYRANDOMMISSIONTALK_METHOD_4_3D02EFB04E5B9DCF_OFFSET))(a1, a2);
		}
	};
}
