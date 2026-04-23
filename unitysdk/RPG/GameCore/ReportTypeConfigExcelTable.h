#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ReportTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18CA77C0)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18CA7610)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18CA72E0)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18CA75B0)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18CA7990)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CA7360)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18CA79D0)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CA7BB0)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18CA7D80)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CA80E0)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18CA7B10)
#define RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CA7A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReportTypeConfigExcelTable_TypeDefinitionIndex = 13851;

	class ReportTypeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReportTypeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReportTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ReportTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FCD0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ReportTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FCD8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ReportTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FCE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ReportTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE550);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ReportTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE551);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReportTypeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReportTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReportTypeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ReportTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ReportTypeConfigRow* GetData(::System::UInt32 TypeID)
		{
			return ((::RPG::GameCore::ReportTypeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_GETDATA_OFFSET))(TypeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ReportTypeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ReportTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
