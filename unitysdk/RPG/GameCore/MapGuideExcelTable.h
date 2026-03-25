#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapGuideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1737C850)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1737C6A0)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1737C370)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1737C640)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1737CA20)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1737C3F0)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1737CA60)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1737CC40)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1737CF20)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1737D280)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1737CBA0)
#define RPG_GAMECORE_MAPGUIDEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1737CB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapGuideExcelTable_TypeDefinitionIndex = 12854;

	class MapGuideExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0x26C20);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>**)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0x26C28);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0x26C30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0xCA20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MapGuideExcelTable_TypeDefinitionIndex)->GetStaticField(0xCA21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapGuideRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MapGuideRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MapGuideRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MapGuideRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapGuideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPGUIDEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
