#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AllowedAudioLanguageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1869FFF0)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1869FE70)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1869FB40)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1869FE10)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186A01A0)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1869FBC0)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186A01E0)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186A03C0)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186A0600)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186A0910)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186A0320)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186A0280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AllowedAudioLanguageExcelTable_TypeDefinitionIndex = 11945;

	class AllowedAudioLanguageExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AllowedAudioLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x25B60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedAudioLanguageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedAudioLanguageRow*>**)Il2CppClass::FromTypeDefinitionIndex(AllowedAudioLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x25B68);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AllowedAudioLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x25B70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AllowedAudioLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AllowedAudioLanguageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedAudioLanguageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedAudioLanguageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedAudioLanguageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AllowedAudioLanguageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AllowedAudioLanguageRow* GetData(::System::String* AudioLanguageKey)
		{
			return ((::RPG::GameCore::AllowedAudioLanguageRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_GETDATA_OFFSET))(AudioLanguageKey);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AllowedAudioLanguageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AllowedAudioLanguageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
