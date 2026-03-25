#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SubMissionExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17787850)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17787600)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x17787180)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17787350)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17787590)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17787B90)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x177873D0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x17787DD0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x177872E0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x177878E0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17787BD0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17788340)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x177883A0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17788820)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x177882E0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17787D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionExcelTable_TypeDefinitionIndex = 12934;

	class SubMissionExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x12870);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x12878);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x12880);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x12888);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x12890);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x12898);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x128A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x57B0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x57B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SubMissionRow* GetData(::System::UInt32 SubMissionID)
		{
			return ((::RPG::GameCore::SubMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETDATA_OFFSET))(SubMissionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::SubMissionRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::SubMissionExcelTable_IndexKey key, ::RPG::GameCore::SubMissionRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SubMissionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
