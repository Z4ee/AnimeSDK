#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PasterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETCOMMONPASTERIDS_OFFSET UNITYSDK_OFFSET(0x199E9E10)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199E93F0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDIARYIMAGEPASTERIDS_OFFSET UNITYSDK_OFFSET(0x199E9650)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDIARYTEXTPASTERIDS_OFFSET UNITYSDK_OFFSET(0x199E9D50)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199E92C0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199E91E0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199E9260)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199E86C0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199E8700)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x199E9540)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199E8930)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDDIARYPASTER_OFFSET UNITYSDK_OFFSET(0x199E9E50)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199E8B00)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199E8EC0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199E9FE0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199E8A60)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199E89C0)
#define RPG_GAMECORE_PASTERCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x199E9710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PasterConfigExcelTable_TypeDefinitionIndex = 14611;

	class PasterConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__DiaryImagePasterIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(PasterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x344B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(PasterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x344B8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PasterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x344C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__DiaryTextPasterIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(PasterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x344C8);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__CommonPasterIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PasterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x344D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PasterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x344D8);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PasterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA3B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PasterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA3B1);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PasterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA3B2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PasterConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PasterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PasterConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PasterConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PasterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetDiaryImagePasterIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDIARYIMAGEPASTERIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetDiaryTextPasterIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETDIARYTEXTPASTERIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetCommonPasterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE_GETCOMMONPASTERIDS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _AddDiaryPaster(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*& a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASTERCONFIGEXCELTABLE__ADDDIARYPASTER_OFFSET))(a1, a2, a3);
		}
	};
}
