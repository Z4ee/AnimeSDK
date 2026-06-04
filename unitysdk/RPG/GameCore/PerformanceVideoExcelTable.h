#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceVideoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199FF960)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199FF7F0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199FF4E0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199FF790)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199FFAB0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199FF560)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_SETROWDATA_OFFSET UNITYSDK_OFFSET(0x19A00300)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199FFAF0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199FFCC0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199FFFE0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A00330)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199FFC20)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199FFB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceVideoExcelTable_TypeDefinitionIndex = 13653;

	class PerformanceVideoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceVideoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceVideoRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B490);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B498);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x1B4A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x8B80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x8B81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceVideoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceVideoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceVideoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceVideoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceVideoRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PerformanceVideoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceVideoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceVideoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void SetRowData(::RPG::GameCore::PerformanceVideoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceVideoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_SETROWDATA_OFFSET))(a1);
		}
	};
}
