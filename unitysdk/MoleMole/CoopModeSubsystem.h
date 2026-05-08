#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CoopModeSubsystem_RegionGroupInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_3_646551FA6A92DC2B_2;
class Class_3_6AD885B6C08820B8_1;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COOPMODESUBSYSTEM_ENTERCOOPSOLOMODE_OFFSET UNITYSDK_OFFSET(0x16B572A0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x16B57D20)
#define MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYSTART_OFFSET UNITYSDK_OFFSET(0x16B57B40)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_ISCOOPREGIONSTARTED_OFFSET UNITYSDK_OFFSET(0x16B57280)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_ISINCOOPSTORYMODE_OFFSET UNITYSDK_OFFSET(0x16B56B80)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_LASTREGIONINFO_OFFSET UNITYSDK_OFFSET(0x16B57A40)
#define MOLEMOLE_COOPMODESUBSYSTEM_GET_PREVLASTREGIONINFO_OFFSET UNITYSDK_OFFSET(0x16B57AC0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ISENTITYHIDEBYMPSOLOMODE_OFFSET UNITYSDK_OFFSET(0x16B56BA0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16B56CA0)
#define MOLEMOLE_COOPMODESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16B56D90)
#define MOLEMOLE_COOPMODESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16B56D30)
#define MOLEMOLE_COOPMODESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x16B56C40)
#define MOLEMOLE_COOPMODESUBSYSTEM_SET_ISCOOPREGIONSTARTED_OFFSET UNITYSDK_OFFSET(0x16B57290)
#define MOLEMOLE_COOPMODESUBSYSTEM_SET_ISINCOOPSTORYMODE_OFFSET UNITYSDK_OFFSET(0x16B56B90)
#define MOLEMOLE_COOPMODESUBSYSTEM_SOLODISABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x16B56DF0)
#define MOLEMOLE_COOPMODESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16B57F90)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16B57FF0)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16B58080)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16B58110)
#define MOLEMOLE_COOPMODESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x16B581A0)

namespace MoleMole
{
	inline static constexpr unsigned int CoopModeSubsystem_TypeDefinitionIndex = 72717;

	class CoopModeSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::CoopModeSubsystem*>
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::CoopModeSubsystem_RegionGroupInfo>* _regionGroupInfoList; // 0x10
		::System::Boolean _IsCoopRegionStarted_k__BackingField; // 0x18
		::System::Boolean _IsInCoopStoryMode_k__BackingField; // 0x19
		::System::Int32 _validIndex; // 0x1C

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

		::System::Void EnterRegionPlayStart(::Class_3_6AD885B6C08820B8_1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6AD885B6C08820B8_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYSTART_OFFSET))(this, notify);
		}

		::System::Void EnterRegionPlayFinish(::Class_3_646551FA6A92DC2B_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_646551FA6A92DC2B_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_COOPMODESUBSYSTEM_ENTERREGIONPLAYFINISH_OFFSET))(this, notify);
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
