#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CoopModeSubsystem_RegionGroupInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_3_646551FA6A92DC2B_1;
class Class_3_A6432AE485458A5C;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COOPMODESUBSYSTEM_ENTERCOOPSOLOMODE_OFFSET UNITYSDK_OFFSET(0x17E4A3D0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x17E4AE50)
#define MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYSTART_OFFSET UNITYSDK_OFFSET(0x17E4AC70)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_ISCOOPREGIONSTARTED_OFFSET UNITYSDK_OFFSET(0x17E4A3B0)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_ISINCOOPSTORYMODE_OFFSET UNITYSDK_OFFSET(0x17E49CB0)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_LASTREGIONINFO_OFFSET UNITYSDK_OFFSET(0x17E4AB70)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_PREVLASTREGIONINFO_OFFSET UNITYSDK_OFFSET(0x17E4ABF0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ISENTITYHIDEBYMPSOLOMODE_OFFSET UNITYSDK_OFFSET(0x17E49CD0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E49DD0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E49EC0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17E49E60)
#define MOLEMOLE_COOPMODESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x17E49D70)
#define MOLEMOLE_COOPMODESUBSYSTEM_SET_ISCOOPREGIONSTARTED_OFFSET UNITYSDK_OFFSET(0x17E4A3C0)
#define MOLEMOLE_COOPMODESUBSYSTEM_SET_ISINCOOPSTORYMODE_OFFSET UNITYSDK_OFFSET(0x17E49CC0)
#define MOLEMOLE_COOPMODESUBSYSTEM_SOLODISABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x17E49F20)
#define MOLEMOLE_COOPMODESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4B0C0)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E4B120)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17E4B1B0)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17E4B240)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x17E4B2D0)

namespace MoleMole
{
	inline static constexpr unsigned int CoopModeSubsystem_TypeDefinitionIndex = 81409;

	class CoopModeSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::CoopModeSubsystem*>
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::CoopModeSubsystem_RegionGroupInfo>* _regionGroupInfoList; // 0x10
		::System::Int32 _validIndex; // 0x18
		::System::Boolean _IsCoopRegionStarted_k__BackingField; // 0x1C
		::System::Boolean _IsInCoopStoryMode_k__BackingField; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInCoopStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_GET_ISINCOOPSTORYMODE_OFFSET))(this);
		}

		::System::Void set_IsInCoopStoryMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_SET_ISINCOOPSTORYMODE_OFFSET))(this, value);
		}

		::System::Boolean IsEntityHideByMpSoloMode(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ISENTITYHIDEBYMPSOLOMODE_OFFSET))(this, entity);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void SoloDisableAvatar(::MoleMole::EntityHandle entityMaster)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_SOLODISABLEAVATAR_OFFSET))(this, entityMaster);
		}

		::System::Boolean get_IsCoopRegionStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_GET_ISCOOPREGIONSTARTED_OFFSET))(this);
		}

		::System::Void set_IsCoopRegionStarted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_SET_ISCOOPREGIONSTARTED_OFFSET))(this, value);
		}

		::System::Boolean EnterCoopSoloMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ENTERCOOPSOLOMODE_OFFSET))(this);
		}

		::MoleMole::CoopModeSubsystem_RegionGroupInfo get_lastRegionInfo()
		{
			return ((::MoleMole::CoopModeSubsystem_RegionGroupInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_GET_LASTREGIONINFO_OFFSET))(this);
		}

		::MoleMole::CoopModeSubsystem_RegionGroupInfo get_prevLastRegionInfo()
		{
			return ((::MoleMole::CoopModeSubsystem_RegionGroupInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_GET_PREVLASTREGIONINFO_OFFSET))(this);
		}

		::System::Void EnterRegionPlayStart(::Class_3_A6432AE485458A5C* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_A6432AE485458A5C*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYSTART_OFFSET))(this, notify);
		}

		::System::Void EnterRegionPlayFinish(::Class_3_646551FA6A92DC2B_1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_646551FA6A92DC2B_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYFINISH_OFFSET))(this, notify);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
