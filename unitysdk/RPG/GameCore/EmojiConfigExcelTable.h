#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EmojiGenderEnum.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EmojiConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188A1810)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETEMOJIIDBYGENDER_OFFSET UNITYSDK_OFFSET(0x188A2720)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188A1690)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETGROUPEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x188A2840)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188A1360)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188A1630)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188A1990)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISGENDEREMOJI_1_OFFSET UNITYSDK_OFFSET(0x188A2260)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISGENDEREMOJI_OFFSET UNITYSDK_OFFSET(0x188A2220)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188A13E0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x188A28B0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188A19D0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDGENDEREMOJI_OFFSET UNITYSDK_OFFSET(0x188A2BF0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDGROUPEMOJI_OFFSET UNITYSDK_OFFSET(0x188A2A50)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188A1BB0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188A1F10)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188A2CB0)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188A1B10)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188A1A70)
#define RPG_GAMECORE_EMOJICONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x188A2340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiConfigExcelTable_TypeDefinitionIndex = 12504;

	class EmojiConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34C50);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34C58);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__GroupEmojis()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34C60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34C68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LinkedMaleEmojis()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34C70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LinkedFemaleEmojis()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34C78);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFE1);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EmojiConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFE2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EmojiConfigRow* GetData(::System::UInt32 EmojiID)
		{
			return ((::RPG::GameCore::EmojiConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETDATA_OFFSET))(EmojiID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EmojiConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Boolean IsGenderEmoji(::System::UInt32 emojiID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISGENDEREMOJI_OFFSET))(emojiID);
		}

		static ::System::Boolean IsGenderEmoji_1(::RPG::GameCore::EmojiConfigRow* row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_ISGENDEREMOJI_1_OFFSET))(row);
		}

		static ::System::UInt32 GetEmojiIDByGender(::System::UInt32 emojiID, ::RPG::GameCore::EmojiGenderEnum gender)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::EmojiGenderEnum))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETEMOJIIDBYGENDER_OFFSET))(emojiID, gender);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetGroupEmojiIDs(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_GETGROUPEMOJIIDS_OFFSET))(groupID);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _AddGroupEmoji(::RPG::GameCore::EmojiConfigRow* row)
		{
			return ((::System::Void(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDGROUPEMOJI_OFFSET))(row);
		}

		static ::System::Void _AddGenderEmoji(::RPG::GameCore::EmojiConfigRow* row)
		{
			return ((::System::Void(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJICONFIGEXCELTABLE__ADDGENDEREMOJI_OFFSET))(row);
		}
	};
}
