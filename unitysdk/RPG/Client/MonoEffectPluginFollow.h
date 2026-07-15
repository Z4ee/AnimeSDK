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

#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912E580)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912E720)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912E470)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1912E7F0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1912EBE0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1912E370)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_0DF420E95D6252BE_1_OFFSET UNITYSDK_OFFSET(0x1912EB80)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x1912EAC0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1912E920)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x1912E980)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0x1912E9E0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_4_OFFSET UNITYSDK_OFFSET(0x1912EB20)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1912E8D0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1912EA40)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912E3B0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1912EBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFollow_TypeDefinitionIndex = 66926;

	class MonoEffectPluginFollow : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::PositionFollowOption PositionOption; // 0x28
		::RPG::Client::RotationFollowOption RotationOption; // 0x2C
		::RPG::Client::ScaleFollowOption ScaleOption; // 0x30
		::RPG::Client::ModelFlipOption ModelFlipOption; // 0x34
		::System::Boolean FollowBeforeCameraShake; // 0x38
		::System::Boolean UseRandomOffsetFollow; // 0x39
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
		::System::Single SmoothDampExpFollowTimeX; // 0x64
		::System::Single SmoothDampExpFollowTimeY; // 0x68
		::System::Single SmoothDampExpFollowTimeZ; // 0x6C
		::System::Single SmoothDampExpDistanceThreshold; // 0x70
		::System::Single SmoothFollowMaxRange; // 0x74
		::System::Boolean DampRotationFollow; // 0x78
		::RPG::Client::SmoothFollowType RotationSmoothFollowType; // 0x7C
		::UnityEngine::Vector3 AngleDampTime; // 0x80
		::System::Single RotationSmoothFollowRatio; // 0x8C
		::System::Single RotationSmoothFollowSpeed; // 0x90
		::System::Single RotationDampSnapDegrees; // 0x94
		::System::Single SpeedChangeMaxRange; // 0x98
		::System::Boolean OnlyFirstFrame; // 0x9C
		::System::Boolean ManuallFollowOnFormationChange; // 0x9D
		::System::Boolean StopFollow; // 0x9E
		::Il2CppArray<::UnityEngine::Transform*>* FollowPoints; // 0xA0
		::System::Boolean IsRotationUseFollowPoints; // 0xA8
		::System::Boolean RotateAroundX; // 0xA9
		::System::Boolean RotateAroundY; // 0xAA
		::System::Boolean RotateAroundZ; // 0xAB
		::UnityEngine::Vector3 BaseFollowScale; // 0xAC
		::UnityEngine::Vector3 MaxFollowScale; // 0xB8
		::System::Boolean LockPositionToGround; // 0xC4
		::System::Single CameraDistK; // 0xC8
		::System::Single CameraDistA; // 0xCC
		::System::Single CameraDistB; // 0xD0
		::Class_2_E4151F8C70CE8C1E* _Behavior; // 0xD8

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

		::System::Boolean Method_6_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Boolean Method_6_1D4018D4200358D0_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_2_OFFSET))(this);
		}

		::System::Boolean Method_6_1D4018D4200358D0_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_3_OFFSET))(this);
		}

		::System::Boolean Method_6_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Boolean Method_6_0DF420E95D6252BE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_0DF420E95D6252BE_OFFSET))(this);
		}

		::System::Boolean Method_6_1D4018D4200358D0_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_1D4018D4200358D0_4_OFFSET))(this);
		}

		::System::Boolean Method_6_0DF420E95D6252BE_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_METHOD_6_0DF420E95D6252BE_1_OFFSET))(this);
		}

		::Class_2_E4151F8C70CE8C1E* get_Behavior()
		{
			return ((::Class_2_E4151F8C70CE8C1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOW_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
