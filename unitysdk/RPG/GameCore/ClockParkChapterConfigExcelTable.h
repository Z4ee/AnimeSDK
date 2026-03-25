#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkChapterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x170B78E0)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x170B7730)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170B7400)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x170B76D0)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x170B7A60)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x170B7480)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x170B7AA0)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170B7C80)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x170B8130)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170B8440)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x170B7BE0)
#define RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x170B7B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkChapterConfigExcelTable_TypeDefinitionIndex = 10445;

	class ClockParkChapterConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27C70);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27C78);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkChapterConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkChapterConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27C80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD0B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD0B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkChapterConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkChapterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkChapterConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkChapterConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkChapterConfigRow* GetData(::System::UInt32 ChapterID)
		{
			return ((::RPG::GameCore::ClockParkChapterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_GETDATA_OFFSET))(ChapterID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkChapterConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkChapterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCHAPTERCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
