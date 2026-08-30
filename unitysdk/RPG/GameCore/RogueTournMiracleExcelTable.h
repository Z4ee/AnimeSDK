#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournMiracleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1D48BF60)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D48BFE0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D48BE30)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D48BB20)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D48BDD0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D48C130)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D48BBA0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D48C170)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D48C340)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D48C5B0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D48C8D0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D48C2A0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D48C200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournMiracleExcelTable_TypeDefinitionIndex = 14859;

	class RogueTournMiracleExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x12510);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x12518);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x12520);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x7A70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x7A71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*>, ::RPG::GameCore::RogueTournMiracleRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*>, ::RPG::GameCore::RogueTournMiracleRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournMiracleRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournMiracleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournMiracleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournMiracleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
