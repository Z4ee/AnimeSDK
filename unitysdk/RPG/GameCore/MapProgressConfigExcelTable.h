#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MapPregressShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapProgressConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A8B9E0)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A8B830)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A8B500)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A8B7D0)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A8BB70)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A8B580)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A8BBB0)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A8BD90)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A8BF80)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A8C290)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A8BCF0)
#define RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A8BC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapProgressConfigExcelTable_TypeDefinitionIndex = 13255;

	class MapProgressConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapProgressConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33460);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapProgressConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33468);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapProgressConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33470);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapProgressConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC790);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapProgressConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC791);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapProgressConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapProgressConfigRow* GetData(::RPG::GameCore::MapPregressShowType ID)
		{
			return ((::RPG::GameCore::MapProgressConfigRow*(*)(::RPG::GameCore::MapPregressShowType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapProgressConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapProgressConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROGRESSCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
