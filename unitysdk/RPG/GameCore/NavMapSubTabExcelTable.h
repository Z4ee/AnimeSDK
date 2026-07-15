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

#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BAF3FE0)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BAF3EB0)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1BAF3BA0)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1BAF3E50)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BAF4170)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BAF3C20)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BAF41B0)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BAF4380)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BAF4550)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAF4870)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1BAF42E0)
#define RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BAF4240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMapSubTabExcelTable_TypeDefinitionIndex = 13483;

	class NavMapSubTabExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapSubTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapSubTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x43FB0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x43FB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x43FC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0xB990);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NavMapSubTabExcelTable_TypeDefinitionIndex)->GetStaticField(0xB991);
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

		static ::RPG::GameCore::NavMapSubTabRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::NavMapSubTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::NavMapSubTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::NavMapSubTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
