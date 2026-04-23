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

#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188A3460)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188A32B0)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188A2F80)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188A3250)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188A3630)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188A3000)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188A3670)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188A3850)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188A3AC0)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188A3E20)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188A37B0)
#define RPG_GAMECORE_EMOJIGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188A3710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiGroupExcelTable_TypeDefinitionIndex = 12501;

	class EmojiGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C600);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EmojiGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C608);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x1C610);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x7510);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EmojiGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x7511);
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

		static ::RPG::GameCore::EmojiGroupRow* GetData(::System::UInt32 EmojiGroupID)
		{
			return ((::RPG::GameCore::EmojiGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE_GETDATA_OFFSET))(EmojiGroupID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EmojiGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EmojiGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
