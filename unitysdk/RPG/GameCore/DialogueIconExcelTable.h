#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DialogueIconRow; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18861E10)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18861C60)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18861930)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18861C00)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18862010)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188619B0)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18862050)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18862230)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188623C0)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18862710)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18862190)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188620F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueIconExcelTable_TypeDefinitionIndex = 12415;

	class DialogueIconExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x33480);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueIconRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueIconRow*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x33488);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x33490);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xC7A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xC7A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueIconRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueIconRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueIconRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueIconRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DialogueIconRow* GetData(::RPG::GameCore::JsonEnum* Type)
		{
			return ((::RPG::GameCore::DialogueIconRow*(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GETDATA_OFFSET))(Type);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DialogueIconRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DialogueIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
