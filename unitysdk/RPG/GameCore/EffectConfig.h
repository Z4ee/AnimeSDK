#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTCONFIG_METHOD_2_ABA54A11C20ABE02_OFFSET UNITYSDK_OFFSET(0x171889E0)
#define RPG_GAMECORE_EFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17188DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectConfig_TypeDefinitionIndex = 18562;

	class EffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::Boolean IsAttachToTargetEntity; // 0x18
		::System::String* AttachPoint; // 0x20
		::RPG::MVector3 PositionOffset; // 0x28
		::RPG::MVector3 RotationOffset; // 0x34
		::RPG::MVector3 Scale; // 0x40
		::RPG::GameCore::EffectScaleAdaptType ScaleAdaptType; // 0x4C
		::System::Boolean SyncPropState; // 0x50
		::RPG::GameCore::DynamicString* InitEffectState; // 0x58
		::System::Boolean ForbidLod; // 0x60
		::System::Boolean ForceSimulateImmediately; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ABA54A11C20ABE02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTCONFIG_METHOD_2_ABA54A11C20ABE02_OFFSET))(a1, a2);
		}
	};
}
