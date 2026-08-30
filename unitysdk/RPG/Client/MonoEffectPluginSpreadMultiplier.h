#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginSpreadMultiplier_ScaleState.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C99E0)
#define RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7C9A70)
#define RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_ENDSCALECONTROL_OFFSET UNITYSDK_OFFSET(0xD7C9E30)
#define RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_GETCURRENTSCALE_OFFSET UNITYSDK_OFFSET(0xD7C9970)
#define RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C9570)
#define RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_SETSCALE_OFFSET UNITYSDK_OFFSET(0xD7C9910)
#define RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_STARTSCALECONTROL_OFFSET UNITYSDK_OFFSET(0xD7C9DC0)
#define RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C9EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSpreadMultiplier_TypeDefinitionIndex = 70079;

	class MonoEffectPluginSpreadMultiplier : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::String* SpeedControlParam; // 0x28
		::Il2CppArray<::System::String*>* ModifyTargets; // 0x30
		::System::Single Scale; // 0x38
		::Il2CppArray<::UnityEngine::Transform*>* PDLBABJIPFC; // 0x40
		::UnityEngine::Animator* APPGGMLEPLN; // 0x48
		::System::Single KJLGMNKFBKF; // 0x50
		::System::Single JOAONKJFPPK; // 0x54
		::RPG::Client::MonoEffectPluginSpreadMultiplier_ScaleState PGEJFJCDIPF; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void SetScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_SETSCALE_OFFSET))(this, a1);
		}

		::System::Single GetCurrentScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_GETCURRENTSCALE_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void StartScaleControl(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_STARTSCALECONTROL_OFFSET))(this, a1);
		}

		::System::Void EndScaleControl(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSPREADMULTIPLIER_ENDSCALECONTROL_OFFSET))(this, a1);
		}
	};
}
