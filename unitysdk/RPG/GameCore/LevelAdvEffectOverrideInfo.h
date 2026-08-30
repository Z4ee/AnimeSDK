#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELADVEFFECTOVERRIDEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1C82E0)
#define RPG_GAMECORE_LEVELADVEFFECTOVERRIDEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C8860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAdvEffectOverrideInfo_TypeDefinitionIndex = 17034;

	class LevelAdvEffectOverrideInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsOverrideEffectPath; // 0x10
		::System::String* EffectPath; // 0x18
		::System::Boolean IsOverrideFollowTargetAlways; // 0x20
		::System::Boolean FollowTargetAlways; // 0x21
		::System::Boolean IsOverrideAttachPoint; // 0x22
		::System::String* AttachPoint; // 0x28
		::System::Boolean IsOverridePositionOffset; // 0x30
		::RPG::MVector3 PositionOffset; // 0x34
		::System::Boolean IsOverrideRotationOffset; // 0x40
		::RPG::MVector3 RotationOffset; // 0x44
		::System::Boolean IsOverrideScale; // 0x50
		::RPG::MVector3 Scale; // 0x54
		::System::Boolean IsOverrideSyncTargetAnimatorParam; // 0x60
		::System::Boolean SyncTargetAnimatorParam; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVEFFECTOVERRIDEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAdvEffectOverrideInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVEFFECTOVERRIDEINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
