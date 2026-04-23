#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MainMissionExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class MainMissionRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A80830)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A805E0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x18A80160)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A80330)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A80570)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A80B70)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A803B0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x18A80DB0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x18A802C0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x18A808C0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A80BB0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A81D00)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A81D60)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A821E0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A81CA0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A80D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionExcelTable_TypeDefinitionIndex = 13398;

	class MainMissionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x32FD0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x32FD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x32FE0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x32FE8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x32FF0);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x32FF8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x33000);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC6D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC6D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MainMissionRow* GetData(::System::UInt32 MainMissionID)
		{
			return ((::RPG::GameCore::MainMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETDATA_OFFSET))(MainMissionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::MainMissionRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MainMissionExcelTable_IndexKey key, ::RPG::GameCore::MainMissionRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MainMissionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
