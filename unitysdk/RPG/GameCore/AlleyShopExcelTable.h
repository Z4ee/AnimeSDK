#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyShopRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1869CA20)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1869C8A0)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1869C570)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1869C840)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1869CBF0)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1869C5F0)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1869CC30)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1869CE10)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1869D060)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1869D370)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1869CD70)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1869CCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyShopExcelTable_TypeDefinitionIndex = 11894;

	class AlleyShopExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x259B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x259B8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x259C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x9DB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x9DB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyShopRow* GetData(::System::UInt32 ShopID)
		{
			return ((::RPG::GameCore::AlleyShopRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GETDATA_OFFSET))(ShopID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyShopRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyShopRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
