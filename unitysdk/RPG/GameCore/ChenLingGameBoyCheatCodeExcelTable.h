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

#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17086CA0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17086AF0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170867C0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17086A90)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17086E90)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17086840)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17086ED0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170870B0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x170872C0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17087620)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17087010)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17086F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex = 12899;

	class ChenLingGameBoyCheatCodeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0x26AF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyCheatCodeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0x26AF8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0x26B00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameBoyCheatCodeExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9D1);
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

		static ::RPG::GameCore::ChenLingGameBoyCheatCodeRow* GetData(::System::String* GameBoyCheatCodeString)
		{
			return ((::RPG::GameCore::ChenLingGameBoyCheatCodeRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE_GETDATA_OFFSET))(GameBoyCheatCodeString);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChenLingGameBoyCheatCodeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingGameBoyCheatCodeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHEATCODEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
