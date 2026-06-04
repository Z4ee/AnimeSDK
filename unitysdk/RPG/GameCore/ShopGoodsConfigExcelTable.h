#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShopGoodsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19C71BE0)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19C71A70)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19C71990)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19C71A10)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19C70890)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C708D0)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19C70B00)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C70CD0)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19C71660)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C71D30)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19C70C30)
#define RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C70B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodsConfigExcelTable_TypeDefinitionIndex = 14375;

	class ShopGoodsConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ShopGoodsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4C700);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShopGoodsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4C708);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ShopGoodsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4C710);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ShopGoodsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE950);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShopGoodsConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE951);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ShopGoodsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ShopGoodsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGoodsConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ShopGoodsConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ShopGoodsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
