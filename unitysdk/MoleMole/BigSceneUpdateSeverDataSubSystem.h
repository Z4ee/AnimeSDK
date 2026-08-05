#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_16DF3093C699EE67_Enum_3_519712B147F700A9.h"
#include "unitysdk/Class_2_16DF3093C699EE67_Struct_2_98FDBD441D3BBBB9.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_0301145851E02767.h"
#include "unitysdk/Struct_2_745325AFD7021EFB_1.h"

class Class_3_067B89F2447224BA;
class Class_3_9680FDEDC16F45BB;
class Class_3_E9A48D70456787C0;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ADDAVATARFIGHTUNIT_OFFSET UNITYSDK_OFFSET(0x12A19170)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_GET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET UNITYSDK_OFFSET(0x12A17DD0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_MARKFORCEUPDATEMUSTLOGOUT_OFFSET UNITYSDK_OFFSET(0x12A17DF0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12A17E30)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_SET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET UNITYSDK_OFFSET(0x12A17DE0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_STOREABILITYSPECIAL_OFFSET UNITYSDK_OFFSET(0x12A19490)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_SYNCPOSAUTH_OFFSET UNITYSDK_OFFSET(0x12A188B0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEABILITYSPECIALCHANGEDDATA_OFFSET UNITYSDK_OFFSET(0x12A18EB0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEENTITYABILITYSPECIALCHANGEDDATA_OFFSET UNITYSDK_OFFSET(0x12A19740)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEREPORTAVATARPROPERTIES_OFFSET UNITYSDK_OFFSET(0x12A18170)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATESYNC_OFFSET UNITYSDK_OFFSET(0x12A17F60)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEUPLOAD_OFFSET UNITYSDK_OFFSET(0x12A17E90)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPLOADBIGSCENEFIGHTUNIT_OFFSET UNITYSDK_OFFSET(0x12A18480)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPLOADENTITYABILITYSPECIALS_OFFSET UNITYSDK_OFFSET(0x12A18660)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12A19B80)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12A19CC0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneUpdateSeverDataSubSystem_TypeDefinitionIndex = 48155;

	class BigSceneUpdateSeverDataSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneUpdateSeverDataSubSystem*>
	{
	public:
		::Class_3_E9A48D70456787C0* _req; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _avatarIDToAvatarFightUnitIndexCache; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_067B89F2447224BA*>* _pendingEntitySpecials; // 0x20
		::System::Single _reportPropertiesTimer; // 0x28
		::System::Single _uploadIntervalSeconds; // 0x2C
		::System::Boolean _IsInForceUpdateMustLogoutState_k__BackingField; // 0x30
		::System::Single _syncTimer; // 0x34
		::System::Single _uploadTimer; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInForceUpdateMustLogoutState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_GET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET))(this);
		}

		::System::Void set_IsInForceUpdateMustLogoutState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_SET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET))(this, value);
		}

		::System::Void MarkForceUpdateMustLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_MARKFORCEUPDATEMUSTLOGOUT_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void UpdateReportAvatarProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEREPORTAVATARPROPERTIES_OFFSET))(this);
		}

		::System::Void UpdateUpload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEUPLOAD_OFFSET))(this);
		}

		::System::Void UpdateSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATESYNC_OFFSET))(this);
		}

		::System::Void UploadBigSceneFightUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPLOADBIGSCENEFIGHTUNIT_OFFSET))(this);
		}

		::System::Void UpdateAbilitySpecialChangedData(::Struct_2_0301145851E02767 asKey, ::Struct_2_745325AFD7021EFB_1 asValue)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_0301145851E02767, ::Struct_2_745325AFD7021EFB_1))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEABILITYSPECIALCHANGEDDATA_OFFSET))(this, asKey, asValue);
		}

		::System::Void AddAvatarFightUnit(::Struct_2_0301145851E02767 key, ::Struct_2_745325AFD7021EFB_1 value, ::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_0301145851E02767, ::Struct_2_745325AFD7021EFB_1, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ADDAVATARFIGHTUNIT_OFFSET))(this, key, value, avatar);
		}

		static ::System::Void StoreAbilitySpecial(::Class_1_516A565475879095<::System::String*, ::Class_3_9680FDEDC16F45BB*>* abilities, ::Struct_2_0301145851E02767 key, ::Struct_2_745325AFD7021EFB_1 value)
		{
			return ((::System::Void(*)(::Class_1_516A565475879095<::System::String*, ::Class_3_9680FDEDC16F45BB*>*, ::Struct_2_0301145851E02767, ::Struct_2_745325AFD7021EFB_1))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_STOREABILITYSPECIAL_OFFSET))(abilities, key, value);
		}

		::System::Void UpdateEntityAbilitySpecialChangedData(::System::UInt32 runtimeID, ::System::String* abilityName, ::System::String* specialName, ::Class_2_16DF3093C699EE67_Enum_3_519712B147F700A9 varType, ::Class_2_16DF3093C699EE67_Struct_2_98FDBD441D3BBBB9 varValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Class_2_16DF3093C699EE67_Enum_3_519712B147F700A9, ::Class_2_16DF3093C699EE67_Struct_2_98FDBD441D3BBBB9))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEENTITYABILITYSPECIALCHANGEDDATA_OFFSET))(this, runtimeID, abilityName, specialName, varType, varValue);
		}

		::System::Void UploadEntityAbilitySpecials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPLOADENTITYABILITYSPECIALS_OFFSET))(this);
		}

		static ::System::Void SyncPosAuth()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_SYNCPOSAUTH_OFFSET))();
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
