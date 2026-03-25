#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicSubAffixConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17595290)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17595110)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17594DE0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175950B0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17595460)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17594E60)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175954A0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17595680)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17595960)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17595CC0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175955E0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17595540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSubAffixConfigExcelTable_TypeDefinitionIndex = 13357;

	class RelicSubAffixConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSubAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31CC0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSubAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31CC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSubAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x31CD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicSubAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x103F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicSubAffixConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x103F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSubAffixConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicSubAffixConfigRow* GetData(::System::UInt32 GroupID, ::System::UInt32 AffixID)
		{
			return ((::RPG::GameCore::RelicSubAffixConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_GETDATA_OFFSET))(GroupID, AffixID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicSubAffixConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicSubAffixConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
