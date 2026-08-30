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

#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D026B50)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D0269E0)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D0266D0)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D026980)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D026D20)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D026750)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D026D60)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D026F30)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D0270C0)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D027420)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D026E90)
#define RPG_GAMECORE_DIALOGUEICONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D026DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueIconExcelTable_TypeDefinitionIndex = 13031;

	class DialogueIconExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x20B90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x20B98);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueIconRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueIconRow*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0x20BA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xAB20);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DialogueIconExcelTable_TypeDefinitionIndex)->GetStaticField(0xAB21);
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

		static ::RPG::GameCore::DialogueIconRow* GetData(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::RPG::GameCore::DialogueIconRow*(*)(::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DialogueIconRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DialogueIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEICONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
