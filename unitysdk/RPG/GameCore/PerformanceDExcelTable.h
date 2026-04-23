#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceDRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18BDEE50)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BDECA0)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18BDE970)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18BDEC40)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18BDEFD0)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18BDE9F0)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18BDF010)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BDF1F0)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18BDF5E0)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BDF8F0)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18BDF150)
#define RPG_GAMECORE_PERFORMANCEDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18BDF0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceDExcelTable_TypeDefinitionIndex = 13589;

	class PerformanceDExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceDExcelTable_TypeDefinitionIndex)->GetStaticField(0x42270);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceDRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceDRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceDExcelTable_TypeDefinitionIndex)->GetStaticField(0x42278);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceDExcelTable_TypeDefinitionIndex)->GetStaticField(0x42280);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceDExcelTable_TypeDefinitionIndex)->GetStaticField(0xED30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceDExcelTable_TypeDefinitionIndex)->GetStaticField(0xED31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceDRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceDRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceDRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceDRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceDRow* GetData(::System::UInt32 PerformanceID)
		{
			return ((::RPG::GameCore::PerformanceDRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE_GETDATA_OFFSET))(PerformanceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceDRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceDRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
