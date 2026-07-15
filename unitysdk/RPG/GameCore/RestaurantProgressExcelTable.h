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

#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D023700)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D0235D0)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D0232C0)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D023570)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D023850)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D023340)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D023890)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D023A60)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D023FB0)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0242D0)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D0239C0)
#define RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D023920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantProgressExcelTable_TypeDefinitionIndex = 10935;

	class RestaurantProgressExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProgressRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantProgressRow*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0x4BF30);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0x4BF38);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0x4BF40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0xD620);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RestaurantProgressExcelTable_TypeDefinitionIndex)->GetStaticField(0xD621);
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

		static ::RPG::GameCore::RestaurantProgressRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RestaurantProgressRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RestaurantProgressRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantProgressRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTPROGRESSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
