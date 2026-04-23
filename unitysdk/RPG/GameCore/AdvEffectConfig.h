#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVEFFECTCONFIG_METHOD_2_DD859B42BC2A07CD_OFFSET UNITYSDK_OFFSET(0x1864D6B0)
#define RPG_GAMECORE_ADVEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1864DA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEffectConfig_TypeDefinitionIndex = 21195;

	class AdvEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ConfigName; // 0x10
		::System::String* EffectPath; // 0x18
		::System::Boolean FollowTargetAlways; // 0x20
		::System::String* AttachPoint; // 0x28
		::RPG::MVector3 PositionOffset; // 0x30
		::RPG::MVector3 RotationOffset; // 0x3C
		::RPG::MVector3 Scale; // 0x48
		::System::Boolean SyncTargetAnimatorParam; // 0x54
		::RPG::MVector3 TowardTargetPosition; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DD859B42BC2A07CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVEFFECTCONFIG_METHOD_2_DD859B42BC2A07CD_OFFSET))(a1, a2);
		}
	};
}
