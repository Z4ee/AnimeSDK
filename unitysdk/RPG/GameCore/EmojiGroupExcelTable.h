#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EmojiGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D7BB350)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D7BB1E0)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D7BAED0)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D7BB180)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D7BB4E0)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7BAF50)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7BB520)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7BB6F0)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D7BB960)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7BBCD0)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D7BB650)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7BB5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiGroupExcelTable_TypeDefinitionIndex = 13117;

	class EmojiGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C50);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C58);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xB5A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xB5A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EmojiGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EmojiGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EmojiGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EmojiGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
