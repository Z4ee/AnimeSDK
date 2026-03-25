#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FarmStageUnlockConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_GETALLGACHAIDS_OFFSET UNITYSDK_OFFSET(0x171BF970)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171BEEA0)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171BED20)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171BE9F0)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171BECC0)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171BF070)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171BEA70)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x171BFF20)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171BF0B0)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171BF290)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171BF660)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171BFF80)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171BF1F0)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171BF150)
#define RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x171BF9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FarmStageUnlockConfigExcelTable_TypeDefinitionIndex = 11459;

	class FarmStageUnlockConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmStageUnlockConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmStageUnlockConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(FarmStageUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C2C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FarmStageUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C2C8);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__AllGachaIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FarmStageUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C2D0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FarmStageUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C2D8);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FarmStageUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FarmStageUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB31);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FarmStageUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB32);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmStageUnlockConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmStageUnlockConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmStageUnlockConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FarmStageUnlockConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FarmStageUnlockConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::FarmStageUnlockConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FarmStageUnlockConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::FarmStageUnlockConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllGachaIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_GETALLGACHAIDS_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FARMSTAGEUNLOCKCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
