#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_5E77221B0985AFCE;
namespace RPG::Client { class MatCustomDictionay; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOWAVINGBLOCKCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xD87F4C0)
#define RPG_CLIENT_MONOWAVINGBLOCKCONTROL_METHOD_5_6AC0B31DB7C5670D_OFFSET UNITYSDK_OFFSET(0xD87F770)
#define RPG_CLIENT_MONOWAVINGBLOCKCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD87F6E0)
#define RPG_CLIENT_MONOWAVINGBLOCKCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD87F540)
#define RPG_CLIENT_MONOWAVINGBLOCKCONTROL_SETFLOORID_OFFSET UNITYSDK_OFFSET(0xD87F5D0)
#define RPG_CLIENT_MONOWAVINGBLOCKCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD87F680)
#define RPG_CLIENT_MONOWAVINGBLOCKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD87F7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoWavingBlockControl_TypeDefinitionIndex = 70711;

	class MonoWavingBlockControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean WavingModeisMoving; // 0x18
		::System::Single isMoving; // 0x1C
		::UnityEngine::AnimationCurve* MovingPattern; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* rootNode; // 0x28
		::Il2CppArray<::System::Single>* Timer; // 0x30
		::Il2CppArray<::UnityEngine::GameObject*>* rootTop; // 0x38
		::Il2CppArray<::UnityEngine::Renderer*>* ScaledRenderer; // 0x40
		::Il2CppArray<::UnityEngine::Renderer*>* floorRednerer; // 0x48
		::System::Int32 floorID; // 0x50
		::System::Single RootSpeed; // 0x54
		::System::Boolean isStoping; // 0x58
		::System::Boolean recoveryProgressOn; // 0x59
		::System::Boolean reverseProgressOn; // 0x5A
		::System::Boolean isReconected; // 0x5B
		::System::Single startPos; // 0x5C
		::System::Single BlockSclaeMin; // 0x60
		::System::Single BlockScaleMax; // 0x64
		::System::Single recoveryPosMin; // 0x68
		::System::Single recoveryPosMax; // 0x6C
		::System::Single recoverryDuration; // 0x70
		::System::Single recoverryStep; // 0x74
		::System::Single BlockMaximuScale; // 0x78
		::System::Single recoveryTimer; // 0x7C
		::RPG::Client::MatCustomDictionay* MaterialDic; // 0x80
		::Class_2_5E77221B0985AFCE* _Behavior; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWAVINGBLOCKCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWAVINGBLOCKCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWAVINGBLOCKCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void SetFloorID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWAVINGBLOCKCONTROL_SETFLOORID_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWAVINGBLOCKCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWAVINGBLOCKCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_6AC0B31DB7C5670D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWAVINGBLOCKCONTROL_METHOD_5_6AC0B31DB7C5670D_OFFSET))(this);
		}
	};
}
