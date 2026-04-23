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

#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x18D79310)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D793D0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D79190)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D78E60)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D79130)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D79550)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D78EE0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D79590)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D79770)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D799E0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D79CF0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D796D0)
#define RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D79630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournMiracleExcelTable_TypeDefinitionIndex = 14232;

	class RogueTournMiracleExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x48D70);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x48D78);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x48D80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0xF910);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0xF911);
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

		static ::RPG::GameCore::RogueTournMiracleRow* GetData(::System::UInt32 MiracleID)
		{
			return ((::RPG::GameCore::RogueTournMiracleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE_GETDATA_OFFSET))(MiracleID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournMiracleRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournMiracleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
