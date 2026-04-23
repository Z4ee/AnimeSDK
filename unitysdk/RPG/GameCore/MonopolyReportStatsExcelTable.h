#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyReportStatsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B54210)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B54060)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B53D30)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B54000)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B543E0)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B53DB0)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B54420)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B54600)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B547D0)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B54B30)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B54560)
#define RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B544C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyReportStatsExcelTable_TypeDefinitionIndex = 11461;

	class MonopolyReportStatsExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EFD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EFD8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EFE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0xE170);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyReportStatsExcelTable_TypeDefinitionIndex)->GetStaticField(0xE171);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyReportStatsRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyReportStatsRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MonopolyReportStatsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyReportStatsRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyReportStatsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTSTATSEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
