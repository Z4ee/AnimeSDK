#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_B8F06E5A3B4F82A1.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_CLEANSOMECAMERASTATELIKEABYSSTHIRD_OFFSET UNITYSDK_OFFSET(0x168898E0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETLASTLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x1688A300)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x16889500)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_HANDLECONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x16889AE0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16888BB0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16888C00)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16888C50)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SETINPUTENABLESTATEINNER_OFFSET UNITYSDK_OFFSET(0x1688AB20)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_STARTCONTROLPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x1688A600)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHINPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x16888C90)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHOUTPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x16889B30)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_TEMPMUTEINPUTENABLESTATE_OFFSET UNITYSDK_OFFSET(0x1688AAA0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1688AF40)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1688AF50)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1688AFE0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1688B070)

namespace MoleMole
{
	inline static constexpr unsigned int PlusOneAvatarSubSystem_TypeDefinitionIndex = 80457;

	class PlusOneAvatarSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::PlusOneAvatarSubSystem*>
	{
	public:
		::System::Threading::CancellationTokenSource* _cancellationTokenSource; // 0x10
		::System::Int32 _lastLocalAvatarEntityID; // 0x18
		::System::Boolean _plusOneIsLocalAvatar; // 0x1C
		::Enum_3_B8F06E5A3B4F82A1 _plusOnAvatarState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void SwitchInPlusOneAvatar(::MoleMole::Config::ConfigPosRot* configPosRot, ::System::String* lockTargetID, ::System::Int32 switchInIndex, ::System::Int32 switchOutIndex, ::System::Boolean isControlStart, ::System::Boolean setPlusOneToLocalAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHINPLUSONEAVATAR_OFFSET))(this, configPosRot, lockTargetID, switchInIndex, switchOutIndex, isControlStart, setPlusOneToLocalAvatar);
		}

		::System::Void SwitchOutPlusOneAvatar(::MoleMole::Config::ConfigPosRot* configPosRot, ::System::String* lockTargetID, ::System::Int32 switchInIndex, ::System::Int32 switchOutIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHOUTPLUSONEAVATAR_OFFSET))(this, configPosRot, lockTargetID, switchInIndex, switchOutIndex);
		}

		::System::Void StartControlPlusOneAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_STARTCONTROLPLUSONEAVATAR_OFFSET))(this);
		}

		::System::Void CleanSomeCameraStateLikeAbyssThird()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_CLEANSOMECAMERASTATELIKEABYSSTHIRD_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid TempMuteInputEnableState(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_TEMPMUTEINPUTENABLESTATE_OFFSET))(this, cancellationToken);
		}

		::System::Void SetInputEnableStateInner(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SETINPUTENABLESTATEINNER_OFFSET))(this, isEnable);
		}

		::System::Void HandleControlState(::System::Boolean isControlIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_HANDLECONTROLSTATE_OFFSET))(this, isControlIn);
		}

		::MoleMole::Battle::Entity* GetPlusOneAvatar(::System::Int32& avatarID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETPLUSONEAVATAR_OFFSET))(this, avatarID);
		}

		::MoleMole::Battle::Entity* GetLastLocalAvatar()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETLASTLOCALAVATAR_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
