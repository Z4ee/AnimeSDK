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

#define RPG_CLIENT_ELFREDDOTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95C1760)
#define RPG_CLIENT_ELFREDDOTMANAGER_GETHASMATUREDCROPSFARMIDS_OFFSET UNITYSDK_OFFSET(0x95C30C0)
#define RPG_CLIENT_ELFREDDOTMANAGER_GETNEWUNLOCKFIELDBELONGFARMIDS_OFFSET UNITYSDK_OFFSET(0x95C3920)
#define RPG_CLIENT_ELFREDDOTMANAGER_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x95C2270)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWEMPLOYEE_OFFSET UNITYSDK_OFFSET(0x95C1F20)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFACILITY_OFFSET UNITYSDK_OFFSET(0x95C2440)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFIELD_OFFSET UNITYSDK_OFFSET(0x95C2610)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWGOODS_OFFSET UNITYSDK_OFFSET(0x95C29B0)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWORDERS_OFFSET UNITYSDK_OFFSET(0x95C2CD0)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWRECIPE_OFFSET UNITYSDK_OFFSET(0x95C1990)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWSEEDS_OFFSET UNITYSDK_OFFSET(0x95C27E0)
#define RPG_CLIENT_ELFREDDOTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x95C14D0)
#define RPG_CLIENT_ELFREDDOTMANAGER_ISCANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0x95C2FF0)
#define RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEFINISHED_OFFSET UNITYSDK_OFFSET(0x95C4010)
#define RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEREWARDING_OFFSET UNITYSDK_OFFSET(0x95C3FB0)
#define RPG_CLIENT_ELFREDDOTMANAGER_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x95C3F70)
#define RPG_CLIENT_ELFREDDOTMANAGER__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x95C1680)
#define RPG_CLIENT_ELFREDDOTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x95C4460)
#define RPG_CLIENT_ELFREDDOTMANAGER__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x95C1910)
#define RPG_CLIENT_ELFREDDOTMANAGER__SETDIRTY_OFFSET UNITYSDK_OFFSET(0x95C4070)
#define RPG_CLIENT_ELFREDDOTMANAGER__TRYREFRESHALLNEWUNLOCK_OFFSET UNITYSDK_OFFSET(0x95C1B60)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRedDotManager_TypeDefinitionIndex = 51774;

	class ElfRedDotManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* _AllNewUnlockRecipes; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>* _AllNewUnlockSeeds; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>* _AllNewUnlockFacilities; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* _AllNewUnlockEmployees; // 0x28
		::RPG::Client::CommonActivityLightConeRewardData* _LightConeRewardData; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* _AllNewUnlockFields; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotIDs; // 0x40
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

		::System::Void _SetDirty(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__SETDIRTY_OFFSET))(this, param);
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
