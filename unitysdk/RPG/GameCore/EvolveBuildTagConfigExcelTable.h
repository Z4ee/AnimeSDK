#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildTagConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171B23C0)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171B2210)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171B1EE0)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171B21B0)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171B25D0)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171B1F60)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171B2610)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171B27F0)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171B2AD0)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171B2E80)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171B2750)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171B26B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildTagConfigExcelTable_TypeDefinitionIndex = 10671;

	class EvolveBuildTagConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTagConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTagConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTagConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CBE0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTagConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CBE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTagConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CBF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTagConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEE70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildTagConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEE71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTagConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTagConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTagConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildTagConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildTagConfigRow* GetData(::System::UInt32 ID, ::RPG::GameCore::EvolveBuildSeason Season)
		{
			return ((::RPG::GameCore::EvolveBuildTagConfigRow*(*)(::System::UInt32, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_GETDATA_OFFSET))(ID, Season);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EvolveBuildTagConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildTagConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
