#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeCampDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETDATABYCACHE_OFFSET UNITYSDK_OFFSET(0x1D863A60)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8631F0)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D863080)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D862D70)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D863020)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D863380)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D862DF0)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D863A20)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8633C0)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D863590)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D863700)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D863E80)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8634F0)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D863450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeCampDataExcelTable_TypeDefinitionIndex = 14052;

	class MazeCampDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeCampDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeCampDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B790);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B798);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::MazeCampDataRow*>** StaticGet__cacheDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::MazeCampDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B7A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3B7A8);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xCA80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xCA81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeCampDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeCampDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeCampDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeCampDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazeCampDataRow* GetData(::RPG::GameCore::CampType a1)
		{
			return ((::RPG::GameCore::MazeCampDataRow*(*)(::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazeCampDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeCampDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::RPG::GameCore::MazeCampDataRow* GetDataByCache(::RPG::GameCore::CampType a1)
		{
			return ((::RPG::GameCore::MazeCampDataRow*(*)(::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETDATABYCACHE_OFFSET))(a1);
		}
	};
}
