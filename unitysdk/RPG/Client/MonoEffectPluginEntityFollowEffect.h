#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_4188E4CA339379A3;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912C5B0)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912C670)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912C4D0)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1912C730)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1912C7C0)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912C430)
#define RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1912C7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginEntityFollowEffect_TypeDefinitionIndex = 66916;

	class MonoEffectPluginEntityFollowEffect : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Transform* FollowNode; // 0x28
		::System::Boolean FollowRotation; // 0x30
		::System::Boolean FollowPositionY; // 0x31
		::Class_2_4188E4CA339379A3* Field_6_3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::Class_2_4188E4CA339379A3* get_Behavior()
		{
			return ((::Class_2_4188E4CA339379A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINENTITYFOLLOWEFFECT_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
