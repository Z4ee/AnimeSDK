#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConsumeTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1985C310)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1985C1A0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1985BE90)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1985C140)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1985C4A0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1985BF10)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1985C4E0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1985C6B0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1985C8D0)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1985CC40)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1985C610)
#define RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1985C570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemConsumeTypeExcelTable_TypeDefinitionIndex = 13201;

	class ItemConsumeTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x263E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x263E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x263F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x94D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemConsumeTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x94D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemConsumeTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemConsumeTypeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemConsumeTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemConsumeTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemConsumeTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
