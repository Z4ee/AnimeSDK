#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SO_PLAYFREESTYLE_METHOD_4_4C0C5EFD176EE252_OFFSET UNITYSDK_OFFSET(0x19BFE070)
#define RPG_GAMECORE_SO_PLAYFREESTYLE_METHOD_4_97B5A011780B349E_OFFSET UNITYSDK_OFFSET(0x19BFD450)
#define RPG_GAMECORE_SO_PLAYFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFD410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_PlayFreeStyle_TypeDefinitionIndex = 18935;

	class SO_PlayFreeStyle : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::String* StoryAvatarID; // 0x18
		::System::UInt32 StoryMotionID; // 0x20
		::System::Boolean ForceStart; // 0x24
		::System::Single NormalizedTimeWait; // 0x28
		::System::Single NormalizedTimeStart; // 0x2C
		::System::Single NormalizedTransitionDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4C0C5EFD176EE252(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_PlayFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_PlayFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYFREESTYLE_METHOD_4_4C0C5EFD176EE252_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_97B5A011780B349E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_PlayFreeStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_PlayFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYFREESTYLE_METHOD_4_97B5A011780B349E_OFFSET))(a1, a2);
		}
	};
}
