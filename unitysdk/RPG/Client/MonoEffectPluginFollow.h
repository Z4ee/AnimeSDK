#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ModelFlipOption.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/PositionFollowOption.h"
#include "unitysdk/RPG/Client/RotationFollowOption.h"
#include "unitysdk/RPG/Client/ScaleFollowOption.h"
#include "unitysdk/RPG/Client/SmoothFollowType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E4151F8C70CE8C1E;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD1000)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD11A0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD0EF0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9CD1270)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9CD13B0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CD0DF0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9CD1350)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD0E30)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD13C0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD14A0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD1500)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9CD1560)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CD1430)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFollow_TypeDefinitionIndex = 57335;

	class MonoEffectPluginFollow : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::PositionFollowOption PositionOption; // 0x28
		::RPG::Client::RotationFollowOption RotationOption; // 0x2C
		::RPG::Client::ScaleFollowOption ScaleOption; // 0x30
		::RPG::Client::ModelFlipOption ModelFlipOption; // 0x34
		::System::Boolean UseRandomOffsetFollow; // 0x38
		::System::Single RandomFollowOffsetRadius; // 0x3C
		::RPG::Client::SmoothFollowType RandomFollowType; // 0x40
		::System::Single RandomFollowRatio; // 0x44
		::System::Single RandomFollowSpeed; // 0x48
		::System::Boolean UseSmoothFollow; // 0x4C
		::RPG::Client::SmoothFollowType SmoothFollowType; // 0x50
		::System::Single SmoothFollowRatio; // 0x54
		::System::Single SmoothFollowSpeed; // 0x58
		::System::Single SmoothDampFollowTime; // 0x5C
		::System::Single SmoothDampFollowMaxSpeed; // 0x60
		::System::Single SmoothFollowMaxRange; // 0x64
		::System::Single SpeedChangeMaxRange; // 0x68
		::System::Boolean OnlyFirstFrame; // 0x6C
		::System::Boolean ManuallFollowOnFormationChange; // 0x6D
		::System::Boolean StopFollow; // 0x6E
		::Il2CppArray<::UnityEngine::Transform*>* FollowPoints; // 0x70
		::System::Boolean IsRotationUseFollowPoints; // 0x78
		::System::Boolean RotateAroundX; // 0x79
		::System::Boolean RotateAroundY; // 0x7A
		::System::Boolean RotateAroundZ; // 0x7B
		::UnityEngine::Vector3 BaseFollowScale; // 0x7C
		::UnityEngine::Vector3 MaxFollowScale; // 0x88
		::System::Boolean LockPositionToGround; // 0x94
		::System::Single CameraDistK; // 0x98
		::System::Single CameraDistA; // 0x9C
		::System::Single CameraDistB; // 0xA0
		::Class_2_E4151F8C70CE8C1E* _Behavior; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_OFFSET))(this);
		}

		::Class_2_E4151F8C70CE8C1E* get_Behavior()
		{
			return ((::Class_2_E4151F8C70CE8C1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}
