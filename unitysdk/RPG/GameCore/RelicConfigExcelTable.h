#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C988D0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C98750)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETRELICIDBYSETIDANDTYPEANDRARITY_OFFSET UNITYSDK_OFFSET(0x18C99830)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETSETRELICTYPEITEMDICT_OFFSET UNITYSDK_OFFSET(0x18C99450)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C98420)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C986F0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C98A50)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C984A0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x18C99340)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C98A90)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C98C70)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C99030)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C99BE0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDANDTYPEANDRARITYTORELICID_OFFSET UNITYSDK_OFFSET(0x18C99AD0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDTORELICTYPEITEM_OFFSET UNITYSDK_OFFSET(0x18C998C0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C98BD0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C98B30)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18C994D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicConfigExcelTable_TypeDefinitionIndex = 13831;

	class RelicConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33C00);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType>, ::System::UInt32>** StaticGet__SetIDAndTypeAndRarityToRelicID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33C08);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33C10);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*>** StaticGet__SetIDToRelicTypeItemDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33C18);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x33C20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9B0);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9B1);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9B2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::RelicConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* GetSetRelicTypeItemDict(::System::UInt32 setID)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETSETRELICTYPEITEMDICT_OFFSET))(setID);
		}

		static ::System::UInt32 GetRelicIDBySetIDAndTypeAndRarity(::System::UInt32 relicSetID, ::RPG::GameCore::RelicType relicType, ::RPG::GameCore::CombatPowerRelicRarityType rarityType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETRELICIDBYSETIDANDTYPEANDRARITY_OFFSET))(relicSetID, relicType, rarityType);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _InitSetIDToRelicTypeItem(::RPG::GameCore::RelicConfigRow* row)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDTORELICTYPEITEM_OFFSET))(row);
		}

		static ::System::Void _InitSetIDAndTypeAndRarityToRelicID(::RPG::GameCore::RelicConfigRow* row)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDANDTYPEANDRARITYTORELICID_OFFSET))(row);
		}
	};
}
