#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingGameBoyCheatCodeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E018D20)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E018BB0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E0188A0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E018B50)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E018ED0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E018920)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E018F10)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E0190E0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E0192F0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E019660)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E019040)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E018FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex = 13999;

	class ChenLingGameBoyCheatCodeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0x17260);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0x17268);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0x17270);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingGameBoyCheatCodeRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ChenLingGameBoyCheatCodeRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChenLingGameBoyCheatCodeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingGameBoyCheatCodeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
