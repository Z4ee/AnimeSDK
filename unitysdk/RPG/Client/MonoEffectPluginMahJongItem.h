#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/QingQueEnergyBarIconType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_DCE0B4466338F1EA;
namespace RPG::Client { class Effect_MahJongAutoLayout; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA995F00)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA995FB0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA995EB0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA995E60)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA996100)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA995E00)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_TICK_OFFSET UNITYSDK_OFFSET(0xA996060)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA996110)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9961A0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA996200)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA996140)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA996260)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMahJongItem_TypeDefinitionIndex = 64599;

	class MonoEffectPluginMahJongItem : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::QingQueEnergyBarIconType MahJongTypeID; // 0x28
		::System::String* MahJongAutoLayoutUniqueName; // 0x30
		::System::Int32 PosLayoutIndex; // 0x38
		::RPG::Client::Effect_MahJongAutoLayout* OwnerLayoutRef; // 0x40
		::System::Int32 MahjongTypeCount; // 0x48
		::System::Nullable_1<::System::Boolean> IsForceHide; // 0x4C
		::System::Boolean IsZoombie; // 0x4E
		::System::Int32 FollowLayoutIndex; // 0x50
		::RPG::Client::MonoEffectPluginMahJongItem* FollowItem; // 0x58
		::UnityEngine::Animator* AnimatorCompt; // 0x60
		::UnityEngine::Animation* AnimationCompt; // 0x68
		::UnityEngine::Renderer* ScalePropertyRenderrer; // 0x70
		::Class_2_DCE0B4466338F1EA* Field_6_12; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_TICK_OFFSET))(this, a1);
		}

		::Class_2_DCE0B4466338F1EA* get_Behavior()
		{
			return ((::Class_2_DCE0B4466338F1EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
