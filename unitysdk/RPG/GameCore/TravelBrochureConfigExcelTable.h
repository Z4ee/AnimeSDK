#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TravelBrochureConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETALLSEQUENCEDIARYIDS_OFFSET UNITYSDK_OFFSET(0x190B3580)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x190B2930)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETDIRECTORYSEQUENCEDIARYIDS_OFFSET UNITYSDK_OFFSET(0x190B3B90)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x190B27B0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x190B2480)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x190B2750)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x190B2AB0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x190B2500)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x190B34E0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190B2AF0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B2CD0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x190B31D0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190B3BD0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190B2C30)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x190B2B90)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x190B35C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureConfigExcelTable_TypeDefinitionIndex = 14575;

	class TravelBrochureConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5F0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DirectorySequenceDiaryIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD600);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD608);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__SequenceDiaryIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD610);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5000);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5001);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5002);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TravelBrochureConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::TravelBrochureConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TravelBrochureConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TravelBrochureConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllSequenceDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETALLSEQUENCEDIARYIDS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetDirectorySequenceDiaryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETDIRECTORYSEQUENCEDIARYIDS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
