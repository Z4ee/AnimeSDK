#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EffectHideCameraMode.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7B53762AFBC40309;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A5530)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A5610)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A5450)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xC0A56D0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xC0A5740)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A53B0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A5750)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A5760)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A57A0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xC0A57E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAutoHide_TypeDefinitionIndex = 65482;

	class MonoEffectPluginAutoHide : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::EffectHideCameraMode CameraMode; // 0x28
		::System::Boolean HideByTargetScale; // 0x2C
		::UnityEngine::Vector3 TargetScale; // 0x30
		::System::Boolean HideByMapRotationSwitch; // 0x3C
		::System::Boolean HideByTargetEffectInvisible; // 0x3D
		::System::String* FollowTargetEffectUniqueName; // 0x40
		::System::Boolean HideWhenFollowTargetEffectNotExist; // 0x48
		::System::Boolean HideWhenUIOpen; // 0x49
		::System::Collections::Generic::List_1<::System::String*>* HideUIPageList; // 0x50
		::Class_2_7B53762AFBC40309* Field_6_9; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::Class_2_7B53762AFBC40309* get_Behavior()
		{
			return ((::Class_2_7B53762AFBC40309*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUTOHIDE___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, a1);
		}
	};
}
