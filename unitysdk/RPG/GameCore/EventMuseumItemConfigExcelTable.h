#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EventMuseumItemConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x196F5E00)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196F5CD0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x196F59C0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x196F5C70)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x196F5F90)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x196F5A40)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x196F5FD0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x196F61A0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x196F64E0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x196F6800)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x196F6100)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x196F6060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventMuseumItemConfigExcelTable_TypeDefinitionIndex = 13564;

	class EventMuseumItemConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x15300);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventMuseumItemConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventMuseumItemConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x15308);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x15310);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventMuseumItemConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventMuseumItemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventMuseumItemConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventMuseumItemConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EventMuseumItemConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EventMuseumItemConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EventMuseumItemConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EventMuseumItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
