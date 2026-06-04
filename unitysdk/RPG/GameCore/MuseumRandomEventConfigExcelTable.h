#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumRandomEventConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199BED80)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199BEC10)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199BE900)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199BEBB0)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199BEED0)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199BE980)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199BEF10)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199BF0E0)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199BF400)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199BF720)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199BF040)
#define RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199BEFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumRandomEventConfigExcelTable_TypeDefinitionIndex = 13575;

	class MuseumRandomEventConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumRandomEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xF000);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumRandomEventConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumRandomEventConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumRandomEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xF008);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumRandomEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xF010);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MuseumRandomEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MuseumRandomEventConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumRandomEventConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumRandomEventConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumRandomEventConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumRandomEventConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumRandomEventConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MuseumRandomEventConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumRandomEventConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMRANDOMEVENTCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
