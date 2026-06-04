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

#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETALLSEQUENCEDIARYIDS_OFFSET UNITYSDK_OFFSET(0x19DFE320)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19DFE160)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETDIRECTORYSEQUENCEDIARYIDS_OFFSET UNITYSDK_OFFSET(0x19DFEA40)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19DFE030)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19DFDF50)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19DFDFD0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19DFD2F0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19DFD330)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x19DFE2B0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19DFD560)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DFD730)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19DFDC30)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DFEA80)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19DFD690)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19DFD5F0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x19DFE360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureConfigExcelTable_TypeDefinitionIndex = 14609;

	class TravelBrochureConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DirectorySequenceDiaryIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7160);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7168);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7170);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__SequenceDiaryIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7178);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TravelBrochureConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7180);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34D0);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34D1);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34D2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__CCTOR_OFFSET))();
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TravelBrochureConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TravelBrochureConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
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

		static ::RPG::GameCore::TravelBrochureConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TravelBrochureConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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
