#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NavMapSubTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B7B980)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B7B800)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B7B4D0)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B7B7A0)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B7BB50)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B7B550)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B7BB90)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B7BD70)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B7BF40)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B7C250)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B7BCD0)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B7BC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMapSubTabExcelTable_TypeDefinitionIndex = 13259;

	class NavMapSubTabExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x40680);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x40688);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapSubTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapSubTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x40690);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0xE7F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0xE7F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapSubTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapSubTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapSubTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapSubTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::NavMapSubTabRow* GetData(::System::UInt32 FloorID)
		{
			return ((::RPG::GameCore::NavMapSubTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GETDATA_OFFSET))(FloorID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::NavMapSubTabRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::NavMapSubTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
