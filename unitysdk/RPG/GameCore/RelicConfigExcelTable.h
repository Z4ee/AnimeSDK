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

#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B9C3D20)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B9C3BF0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETRELICIDBYSETIDANDTYPEANDRARITY_OFFSET UNITYSDK_OFFSET(0x1B9C4C90)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETSETRELICTYPEITEMDICT_OFFSET UNITYSDK_OFFSET(0x1B9C4850)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B9C38E0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B9C3B90)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B9C3E70)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B9C3960)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1B9C4760)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B9C3EB0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9C4080)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B9C4440)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9C4FA0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDANDTYPEANDRARITYTORELICID_OFFSET UNITYSDK_OFFSET(0x1B9C4ED0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDTORELICTYPEITEM_OFFSET UNITYSDK_OFFSET(0x1B9C4D00)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B9C3FE0)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B9C3F40)
#define RPG_GAMECORE_RELICCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B9C4920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicConfigExcelTable_TypeDefinitionIndex = 14047;

	class RelicConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType>, ::System::UInt32>** StaticGet__SetIDAndTypeAndRarityToRelicID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19310);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*>** StaticGet__SetIDToRelicTypeItemDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19318);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19320);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19328);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19330);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E71);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E72);
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

		static ::RPG::GameCore::RelicConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RelicConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* GetSetRelicTypeItemDict(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETSETRELICTYPEITEMDICT_OFFSET))(a1);
		}

		static ::System::UInt32 GetRelicIDBySetIDAndTypeAndRarity(::System::UInt32 a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::CombatPowerRelicRarityType a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE_GETRELICIDBYSETIDANDTYPEANDRARITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _InitSetIDToRelicTypeItem(::RPG::GameCore::RelicConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDTORELICTYPEITEM_OFFSET))(a1);
		}

		static ::System::Void _InitSetIDAndTypeAndRarityToRelicID(::RPG::GameCore::RelicConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGEXCELTABLE__INITSETIDANDTYPEANDRARITYTORELICID_OFFSET))(a1);
		}
	};
}
