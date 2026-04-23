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

#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETDATABYCACHE_OFFSET UNITYSDK_OFFSET(0x18ACD660)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18ACCDA0)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18ACCBF0)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18ACC8C0)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18ACCB90)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18ACCF70)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ACC940)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x18ACD620)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18ACCFB0)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ACD190)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18ACD310)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ACDA50)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18ACD0F0)
#define RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ACD050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeCampDataExcelTable_TypeDefinitionIndex = 13305;

	class MazeCampDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B90);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeCampDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeCampDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B98);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x34BA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::MazeCampDataRow*>** StaticGet__cacheDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::MazeCampDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x34BA8);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazeCampDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFC1);
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

		static ::RPG::GameCore::MazeCampDataRow* GetData(::RPG::GameCore::CampType CampID)
		{
			return ((::RPG::GameCore::MazeCampDataRow*(*)(::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETDATA_OFFSET))(CampID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazeCampDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeCampDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::RPG::GameCore::MazeCampDataRow* GetDataByCache(::RPG::GameCore::CampType campType)
		{
			return ((::RPG::GameCore::MazeCampDataRow*(*)(::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAEXCELTABLE_GETDATABYCACHE_OFFSET))(campType);
		}
	};
}
