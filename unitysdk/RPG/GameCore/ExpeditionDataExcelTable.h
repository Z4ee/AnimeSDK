#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ExpeditionDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188C53D0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188C5220)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188C4EF0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188C51C0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188C55A0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188C4F70)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188C55E0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188C57C0)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188C5D20)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188C6080)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188C5720)
#define RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188C5680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionDataExcelTable_TypeDefinitionIndex = 12535;

	class ExpeditionDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C6E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C6E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C6F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xD5A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ExpeditionDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ExpeditionDataRow* GetData(::System::UInt32 ExpeditionID)
		{
			return ((::RPG::GameCore::ExpeditionDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_GETDATA_OFFSET))(ExpeditionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ExpeditionDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ExpeditionDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
