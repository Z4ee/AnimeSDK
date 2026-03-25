#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AllowedTextLanguageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F7F220)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F7F0A0)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F7ED70)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F7F040)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F7F3D0)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F7EDF0)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F7F410)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F7F5F0)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F7FD60)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F80070)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F7F550)
#define RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F7F4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AllowedTextLanguageExcelTable_TypeDefinitionIndex = 11541;

	class AllowedTextLanguageExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedTextLanguageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedTextLanguageRow*>**)Il2CppClass::FromTypeDefinitionIndex(AllowedTextLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F3E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AllowedTextLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F3E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AllowedTextLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F3F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AllowedTextLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x8370);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AllowedTextLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x8371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedTextLanguageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedTextLanguageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedTextLanguageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedTextLanguageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AllowedTextLanguageRow* GetData(::System::String* TextLanguageKey)
		{
			return ((::RPG::GameCore::AllowedTextLanguageRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_GETDATA_OFFSET))(TextLanguageKey);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AllowedTextLanguageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AllowedTextLanguageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDTEXTLANGUAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
