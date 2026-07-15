#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerNoteRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BB24680)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BB24550)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1BB24240)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1BB244F0)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1BB24850)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BB242C0)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1BB24890)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB24A60)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1BB24C00)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB24F60)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1BB249C0)
#define RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1BB24920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerNoteExcelTable_TypeDefinitionIndex = 12693;

	class DrinkMakerNoteExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerNoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F960);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerNoteRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerNoteRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerNoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F968);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerNoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F970);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerNoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x8350);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerNoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x8351);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerNoteRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerNoteRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerNoteRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerNoteRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerNoteRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::DrinkMakerNoteRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerNoteRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerNoteRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERNOTEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
