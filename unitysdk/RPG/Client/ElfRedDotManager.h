#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CommonActivityLightConeRewardData; }
namespace RPG::Client { class ElfFacilityDataItem; }
namespace RPG::Client { class ElfFarmFieldData; }
namespace RPG::Client { class ElfFarmSeedData; }
namespace RPG::Client { class ElfRestaurantEmployeeData; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFREDDOTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8CD580)
#define RPG_CLIENT_ELFREDDOTMANAGER_GETHASMATUREDCROPSFARMIDS_OFFSET UNITYSDK_OFFSET(0xB8CEEE0)
#define RPG_CLIENT_ELFREDDOTMANAGER_GETNEWUNLOCKFIELDBELONGFARMIDS_OFFSET UNITYSDK_OFFSET(0xB8CF4D0)
#define RPG_CLIENT_ELFREDDOTMANAGER_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xB8CE0D0)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWEMPLOYEE_OFFSET UNITYSDK_OFFSET(0xB8CDD60)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFACILITY_OFFSET UNITYSDK_OFFSET(0xB8CE290)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFIELD_OFFSET UNITYSDK_OFFSET(0xB8CE450)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWGOODS_OFFSET UNITYSDK_OFFSET(0xB8CE7D0)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWORDERS_OFFSET UNITYSDK_OFFSET(0xB8CEAF0)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWRECIPE_OFFSET UNITYSDK_OFFSET(0xB8CD7D0)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWSEEDS_OFFSET UNITYSDK_OFFSET(0xB8CE610)
#define RPG_CLIENT_ELFREDDOTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB8CD310)
#define RPG_CLIENT_ELFREDDOTMANAGER_ISCANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0xB8CEE10)
#define RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEFINISHED_OFFSET UNITYSDK_OFFSET(0xB8CFD30)
#define RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEREWARDING_OFFSET UNITYSDK_OFFSET(0xB8CFCD0)
#define RPG_CLIENT_ELFREDDOTMANAGER_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xB8CFC90)
#define RPG_CLIENT_ELFREDDOTMANAGER__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB8CD460)
#define RPG_CLIENT_ELFREDDOTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D02F0)
#define RPG_CLIENT_ELFREDDOTMANAGER__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0xB8CD750)
#define RPG_CLIENT_ELFREDDOTMANAGER__SETDIRTY_OFFSET UNITYSDK_OFFSET(0xB8CFD90)
#define RPG_CLIENT_ELFREDDOTMANAGER__TRYREFRESHALLNEWUNLOCK_OFFSET UNITYSDK_OFFSET(0xB8CD990)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRedDotManager_TypeDefinitionIndex = 59652;

	class ElfRedDotManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* _AllNewUnlockFields; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>* _AllNewUnlockSeeds; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>* _AllNewUnlockFacilities; // 0x20
		::RPG::Client::CommonActivityLightConeRewardData* _LightConeRewardData; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* _AllNewUnlockRecipes; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotIDs; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* _AllNewUnlockEmployees; // 0x40
		::System::Boolean _IsDirty; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HasNewRecipe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWRECIPE_OFFSET))(this);
		}

		::System::Boolean HasNewEmployee()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWEMPLOYEE_OFFSET))(this);
		}

		::System::Boolean HasNewFacility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFACILITY_OFFSET))(this);
		}

		::System::Boolean HasNewField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFIELD_OFFSET))(this);
		}

		::System::Boolean HasNewSeeds()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWSEEDS_OFFSET))(this);
		}

		::System::Boolean HasNewGoods()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWGOODS_OFFSET))(this);
		}

		::System::Boolean HasNewOrders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWORDERS_OFFSET))(this);
		}

		::System::Boolean IsCanTakeVillagerReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_ISCANTAKEVILLAGERREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetHasMaturedCropsFarmIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_GETHASMATUREDCROPSFARMIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockFieldBelongFarmIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_GETNEWUNLOCKFIELDBELONGFARMIDS_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_MARKDIRTY_OFFSET))(this);
		}

		::System::Boolean IsLightConeRewarding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEREWARDING_OFFSET))(this);
		}

		::System::Boolean IsLightConeFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEFINISHED_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__REMOVEHANDLERS_OFFSET))(this);
		}

		::System::Void _SetDirty(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__SETDIRTY_OFFSET))(this, a1);
		}

		::System::Void _TryRefreshAllNewUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__TRYREFRESHALLNEWUNLOCK_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantModule* get__Module()
		{
			return ((::RPG::Client::ElfRestaurantModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_GET__MODULE_OFFSET))(this);
		}
	};
}
