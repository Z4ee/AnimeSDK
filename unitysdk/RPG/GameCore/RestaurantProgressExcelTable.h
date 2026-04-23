#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantProgressRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18CB2970)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18CB27F0)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18CB24C0)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18CB2790)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18CB2AF0)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CB2540)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18CB2B30)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CB2D10)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18CB3260)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CB3570)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18CB2C70)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CB2BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantProgressExcelTable_TypeDefinitionIndex = 10830;

	class RestaurantProgressExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0x405C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0x405C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProgressRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProgressRow*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0x405D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0xE780);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0xE781);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProgressRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProgressRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProgressRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProgressRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RestaurantProgressRow* GetData(::System::UInt32 ProgressID)
		{
			return ((::RPG::GameCore::RestaurantProgressRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GETDATA_OFFSET))(ProgressID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RestaurantProgressRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantProgressRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
