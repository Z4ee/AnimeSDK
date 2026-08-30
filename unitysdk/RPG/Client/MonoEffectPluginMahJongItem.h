#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/QingQueEnergyBarIconType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_0695B3883FA21E97;
namespace RPG::Client { class Effect_MahJongAutoLayout; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BF4F0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BF5A0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BF4A0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BF450)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7BF6F0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BF3F0)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_TICK_OFFSET UNITYSDK_OFFSET(0xD7BF650)
#define RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD7BF700)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMahJongItem_TypeDefinitionIndex = 70040;

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
		::Class_2_0695B3883FA21E97* KADDKEGNCHE; // 0x78

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

		::Class_2_0695B3883FA21E97* get_Behavior()
		{
			return ((::Class_2_0695B3883FA21E97*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMAHJONGITEM_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
