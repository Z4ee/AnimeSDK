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

#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18BED8B0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BED700)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18BED3D0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18BED6A0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18BEDA30)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18BED450)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18BEDA70)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BEDC50)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18BEDF70)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BEE280)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18BEDBB0)
#define RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18BEDB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceVideoExcelTable_TypeDefinitionIndex = 13583;

	class PerformanceVideoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceVideoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceVideoRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x43620);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x43628);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x43630);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0xF180);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0xF181);
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

		static ::RPG::GameCore::PerformanceVideoRow* GetData(::System::UInt32 PerformanceID)
		{
			return ((::RPG::GameCore::PerformanceVideoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE_GETDATA_OFFSET))(PerformanceID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceVideoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceVideoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEVIDEOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
