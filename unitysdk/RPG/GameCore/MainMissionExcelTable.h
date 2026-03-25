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

#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17372C20)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173729D0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x17372550)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17372720)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17372960)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17372F60)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173727A0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x173731A0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x173726B0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x17372CB0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17372FA0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173740F0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17374150)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173745D0)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17374090)
#define RPG_GAMECORE_MAINMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17373140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionExcelTable_TypeDefinitionIndex = 12937;

	class MainMissionExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x26A80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x26A88);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x26A90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x26A98);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x26AA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x26AA8);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MainMissionExcelTable_IndexKey, ::RPG::GameCore::MainMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x26AB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9B0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MainMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9B1);
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
