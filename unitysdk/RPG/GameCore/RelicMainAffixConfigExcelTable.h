#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicMainAffixConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17591930)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175917B0)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17591480)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17591750)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17591B00)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17591500)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17591B40)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17591D20)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17591FC0)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17592320)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17591C80)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17591BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMainAffixConfigExcelTable_TypeDefinitionIndex = 13355;

	class RelicMainAffixConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31C10);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31C18);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31C20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x103C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x103C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicMainAffixConfigRow* GetData(::System::UInt32 GroupID, ::System::UInt32 AffixID)
		{
			return ((::RPG::GameCore::RelicMainAffixConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_GETDATA_OFFSET))(GroupID, AffixID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicMainAffixConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicMainAffixConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
