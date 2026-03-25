#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildStagePeriodRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171B10D0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171B0F20)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171B0BF0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171B0EC0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171B12A0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171B0C70)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171B12E0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171B14C0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171B1A00)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171B1D60)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171B1420)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171B1380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex = 10677;

	class EvolveBuildStagePeriodExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CB60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CB68);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CB70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0xEE40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0xEE41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildStagePeriodRow* GetData(::System::UInt32 StagePeriodID)
		{
			return ((::RPG::GameCore::EvolveBuildStagePeriodRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GETDATA_OFFSET))(StagePeriodID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EvolveBuildStagePeriodRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildStagePeriodRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
