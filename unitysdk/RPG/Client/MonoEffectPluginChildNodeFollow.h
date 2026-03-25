#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_079397AEA70D3F85;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC4C60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC4D40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC4BD0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9CC4E00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9CC4E90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC4B40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4EA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC4EB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CC4EF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9CC4F30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginChildNodeFollow_TypeDefinitionIndex = 57320;

	class MonoEffectPluginChildNodeFollow : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ChildNodeList; // 0x28
		::System::Boolean FollowPosition; // 0x30
		::System::Boolean FollowRotation; // 0x31
		::Class_2_079397AEA70D3F85* Field_6_3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::Class_2_079397AEA70D3F85* get_Behavior()
		{
			return ((::Class_2_079397AEA70D3F85*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHILDNODEFOLLOW___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}
