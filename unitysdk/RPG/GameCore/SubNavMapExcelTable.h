#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubNavMapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CB0F580)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CB0F450)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CB0F140)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CB0F3F0)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CB0F710)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CB0F1C0)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CB0F750)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CB0F920)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CB0FBE0)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB0FF00)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CB0F880)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CB0F7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubNavMapExcelTable_TypeDefinitionIndex = 13908;

	class SubNavMapExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapRow*>**)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x232C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x232C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x232D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0xB390);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0xB391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SubNavMapRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubNavMapRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SubNavMapRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SubNavMapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
