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

#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19CCA5F0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19CCA3A0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x19CC9FE0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19CCA100)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19CCA330)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19CCA920)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19CCA180)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x19CCAB50)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x19CCA090)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x19CCA680)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19CCA960)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CCB0B0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19CCB110)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CCB5A0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19CCB050)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19CCAAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionExcelTable_TypeDefinitionIndex = 13468;

	class SubMissionExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x48300);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x48308);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x48310);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x48318);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x48320);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x48328);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x48330);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xD440);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xD441);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
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

		static ::RPG::GameCore::SubMissionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::SubMissionRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::SubMissionExcelTable_IndexKey a1, ::RPG::GameCore::SubMissionRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SubMissionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
