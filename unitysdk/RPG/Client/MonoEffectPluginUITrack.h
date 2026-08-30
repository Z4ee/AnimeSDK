#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginUITrack_TrackType.h"

class Class_2_327EB1EE78A95630;
namespace RPG::Client { class MonoEffectPluginUITrack_GridFightingCoinParam; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOEFFECTPLUGINUITRACK_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7CD050)
#define RPG_CLIENT_MONOEFFECTPLUGINUITRACK_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7CD130)
#define RPG_CLIENT_MONOEFFECTPLUGINUITRACK_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7CCFC0)
#define RPG_CLIENT_MONOEFFECTPLUGINUITRACK_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7CD1C0)
#define RPG_CLIENT_MONOEFFECTPLUGINUITRACK_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7CD230)
#define RPG_CLIENT_MONOEFFECTPLUGINUITRACK_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7CCF20)
#define RPG_CLIENT_MONOEFFECTPLUGINUITRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD7CD240)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginUITrack_TypeDefinitionIndex = 70096;

	class MonoEffectPluginUITrack : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::String* TargetUINodeUniqueName; // 0x28
		::RPG::Client::MonoEffectPluginUITrack_TrackType Type; // 0x30
		::System::Single Time; // 0x34
		::UnityEngine::AnimationCurve* AnimCurve; // 0x38
		::RPG::Client::MonoEffectPluginUITrack_GridFightingCoinParam* GridFightingCoinParams; // 0x40
		::Class_2_327EB1EE78A95630* KADDKEGNCHE; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINUITRACK__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINUITRACK_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINUITRACK_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINUITRACK_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINUITRACK_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINUITRACK_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::Class_2_327EB1EE78A95630* get_Behavior()
		{
			return ((::Class_2_327EB1EE78A95630*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINUITRACK_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
