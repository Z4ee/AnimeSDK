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

#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x198C41B0)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x198C4040)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x198C3D30)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x198C3FE0)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x198C4340)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x198C3DB0)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x198C4380)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x198C4550)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x198C47D0)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x198C4B40)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x198C44B0)
#define RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x198C4410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapSpaceTypeConfigExcelTable_TypeDefinitionIndex = 13341;

	class MapSpaceTypeConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapSpaceTypeConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapSpaceTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x29F20);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x29F28);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x29F30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x99A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapSpaceTypeConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x99A1);
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

		static ::RPG::GameCore::MapSpaceTypeConfigRow* GetData(::RPG::GameCore::MapSpaceType a1)
		{
			return ((::RPG::GameCore::MapSpaceTypeConfigRow*(*)(::RPG::GameCore::MapSpaceType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapSpaceTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapSpaceTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSPACETYPECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
