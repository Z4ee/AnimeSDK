#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceCRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCECEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D314770)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D314600)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3142F0)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3145A0)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3148C0)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D314370)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE_SETROWDATA_OFFSET UNITYSDK_OFFSET(0x1D315110)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D314900)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D314AD0)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D314DF0)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D315140)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D314A30)
#define RPG_GAMECORE_PERFORMANCECEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D314990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceCExcelTable_TypeDefinitionIndex = 14222;

	class PerformanceCExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceCExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DD40);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceCExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DD48);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceCRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceCRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceCExcelTable_TypeDefinitionIndex)->GetStaticField(0x5DD50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceCExcelTable_TypeDefinitionIndex)->GetStaticField(0x13380);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceCExcelTable_TypeDefinitionIndex)->GetStaticField(0x13381);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceCRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceCRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceCRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceCRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceCRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PerformanceCRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceCRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceCRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void SetRowData(::RPG::GameCore::PerformanceCRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceCRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECEXCELTABLE_SETROWDATA_OFFSET))(a1);
		}
	};
}
