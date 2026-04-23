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

#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188B8490)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188B8310)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188B7FE0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188B82B0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188B8660)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188B8060)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188B86A0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188B8880)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188B8BC0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B8ED0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188B87E0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188B8740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventMuseumItemConfigExcelTable_TypeDefinitionIndex = 13493;

	class EventMuseumItemConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventMuseumItemConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EventMuseumItemConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C2E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C2E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C2F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD340);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EventMuseumItemConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD341);
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

		static ::RPG::GameCore::EventMuseumItemConfigRow* GetData(::System::UInt32 EventMuseumItemID)
		{
			return ((::RPG::GameCore::EventMuseumItemConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE_GETDATA_OFFSET))(EventMuseumItemID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EventMuseumItemConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EventMuseumItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
