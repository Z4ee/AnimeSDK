#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B8F06E5A3B4F82A1.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETLASTLOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x10D81140)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_GETPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x10D80560)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_HANDLECONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x10D80940)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D7FC60)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D7FCB0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D7FCF0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_STARTCONTROLPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x10D81450)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHINPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x10D7FD30)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM_SWITCHOUTPLUSONEAVATAR_OFFSET UNITYSDK_OFFSET(0x10D80990)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10D81900)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D81910)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D819A0)
#define MOLEMOLE_PLUSONEAVATARSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10D81A30)

namespace MoleMole
{
	inline static constexpr unsigned int PlusOneAvatarSubSystem_TypeDefinitionIndex = 40636;

	class PlusOneAvatarSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::PlusOneAvatarSubSystem*>
	{
	public:
		::System::Int32 _lastLocalAvatarEntityID; // 0x10
		::System::Boolean _plusOneIsLocalAvatar; // 0x14
		::Enum_3_B8F06E5A3B4F82A1 _plusOnAvatarState; // 0x18

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
