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

#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D5819C0)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D581890)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D581580)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D581830)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D581B50)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D581600)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D581B90)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D581D60)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D582020)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D582340)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D581CC0)
#define RPG_GAMECORE_SUBNAVMAPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D581C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubNavMapExcelTable_TypeDefinitionIndex = 13908;

	class SubNavMapExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SubNavMapRow*>**)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x21990);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x21998);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x219A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0xAC20);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SubNavMapExcelTable_TypeDefinitionIndex)->GetStaticField(0xAC21);
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
