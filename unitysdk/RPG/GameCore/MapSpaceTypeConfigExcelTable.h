#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapSpaceTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17382D70)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17382BC0)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17382890)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17382B60)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17382F00)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17382910)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17382F40)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17383120)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17383380)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17383690)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17383080)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17382FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapSpaceTypeConfigExcelTable_TypeDefinitionIndex = 12799;

	class MapSpaceTypeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27070);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapSpaceTypeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapSpaceTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27078);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27080);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCBA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCBA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapSpaceTypeConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapSpaceTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapSpaceTypeConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapSpaceTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapSpaceTypeConfigRow* GetData(::RPG::GameCore::MapSpaceType MapSpaceType)
		{
			return ((::RPG::GameCore::MapSpaceTypeConfigRow*(*)(::RPG::GameCore::MapSpaceType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GETDATA_OFFSET))(MapSpaceType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapSpaceTypeConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapSpaceTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
