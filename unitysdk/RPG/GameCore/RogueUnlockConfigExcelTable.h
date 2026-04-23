#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueUnlockConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D7F930)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D7F780)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D7F450)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D7F720)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D7FAB0)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D7F4D0)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D7FAF0)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D7FCD0)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D7FEC0)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D801D0)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D7FC30)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D7FB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueUnlockConfigExcelTable_TypeDefinitionIndex = 13919;

	class RogueUnlockConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x49310);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x49318);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueUnlockConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueUnlockConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x49320);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xF9F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueUnlockConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xF9F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueUnlockConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueUnlockConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueUnlockConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueUnlockConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueUnlockConfigRow* GetData(::System::UInt32 RogueUnlockID)
		{
			return ((::RPG::GameCore::RogueUnlockConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_GETDATA_OFFSET))(RogueUnlockID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueUnlockConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueUnlockConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
