#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_0301145851E02767.h"
#include "unitysdk/Struct_2_745325AFD7021EFB_1.h"

class Class_3_A228AA0955C27499;
class Class_3_F87CDDD057BD313B;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ADDAVATARFIGHTUNIT_OFFSET UNITYSDK_OFFSET(0x12AF9190)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_GET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET UNITYSDK_OFFSET(0x12AF82C0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_MARKFORCEUPDATEMUSTLOGOUT_OFFSET UNITYSDK_OFFSET(0x12AF82E0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12AF8320)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_SET_ISINFORCEUPDATEMUSTLOGOUTSTATE_OFFSET UNITYSDK_OFFSET(0x12AF82D0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_STOREABILITYSPECIAL_OFFSET UNITYSDK_OFFSET(0x12AF94B0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_SYNCPOSAUTH_OFFSET UNITYSDK_OFFSET(0x12AF88D0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEABILITYSPECIALCHANGEDDATA_OFFSET UNITYSDK_OFFSET(0x12AF8ED0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATESYNC_OFFSET UNITYSDK_OFFSET(0x12AF84E0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPDATEUPLOAD_OFFSET UNITYSDK_OFFSET(0x12AF8410)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_UPLOADBIGSCENEFIGHTUNIT_OFFSET UNITYSDK_OFFSET(0x12AF86F0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF97E0)
#define MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12AF98A0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneUpdateSeverDataSubSystem_TypeDefinitionIndex = 62244;

	class BigSceneUpdateSeverDataSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneUpdateSeverDataSubSystem*>
	{
	public:
		::Class_3_F87CDDD057BD313B* _req; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _avatarIDToAvatarFightUnitIndexCache; // 0x18
		::System::Single _checkDirtyTimer2Threshould; // 0x20
		::System::Boolean _IsInForceUpdateMustLogoutState_k__BackingField; // 0x24
		::System::Single _checkDirtyTimer2; // 0x28
		::System::Single _checkDirtyTimer; // 0x2C

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

		static ::System::Void StoreAbilitySpecial(::Class_1_516A565475879095<::System::String*, ::Class_3_A228AA0955C27499*>* abilities, ::Struct_2_0301145851E02767 key, ::Struct_2_745325AFD7021EFB_1 value)
		{
			return ((::System::Void(*)(::Class_1_516A565475879095<::System::String*, ::Class_3_A228AA0955C27499*>*, ::Struct_2_0301145851E02767, ::Struct_2_745325AFD7021EFB_1))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEUPDATESEVERDATASUBSYSTEM_STOREABILITYSPECIAL_OFFSET))(abilities, key, value);
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
