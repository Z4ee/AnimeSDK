#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_METHOD_3_448F5AC78C0793D2_OFFSET UNITYSDK_OFFSET(0x1D85E6C0)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_METHOD_3_C80F214E4A7D8B26_OFFSET UNITYSDK_OFFSET(0x1D85E730)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85E710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFloatingSpiritMoveConfig_TypeDefinitionIndex = 16516;

	class FiveDimFloatingSpiritMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Boolean EnableBeatBackPlayer; // 0x4C
		::System::String* BeatBackPlayerEvent; // 0x50
		::System::Boolean HasHitStop; // 0x58
		::System::String* OnHitEvent; // 0x60
		::System::String* OnRecoverEvent; // 0x68
		::System::Single HitRecoverDuration; // 0x70
		::System::String* HitWithInvinciblePlayerEvent; // 0x78
		::System::String* HitWithInvinciblePlayerEffectPath; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_448F5AC78C0793D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_METHOD_3_448F5AC78C0793D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C80F214E4A7D8B26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFloatingSpiritMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFloatingSpiritMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_METHOD_3_C80F214E4A7D8B26_OFFSET))(a1, a2);
		}
	};
}
