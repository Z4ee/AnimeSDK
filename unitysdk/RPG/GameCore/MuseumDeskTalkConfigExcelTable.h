#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumDeskTalkConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17460360)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174601E0)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1745FEB0)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17460180)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17460530)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1745FF30)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17460570)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17460750)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17460A80)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17460D90)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x174606B0)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17460610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumDeskTalkConfigExcelTable_TypeDefinitionIndex = 13051;

	class MuseumDeskTalkConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumDeskTalkConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumDeskTalkConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumDeskTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2DA20);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumDeskTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2DA28);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumDeskTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2DA30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MuseumDeskTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xF330);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MuseumDeskTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xF331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumDeskTalkConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumDeskTalkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumDeskTalkConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumDeskTalkConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumDeskTalkConfigRow* GetData(::System::UInt32 TalkID)
		{
			return ((::RPG::GameCore::MuseumDeskTalkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_GETDATA_OFFSET))(TalkID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumDeskTalkConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
