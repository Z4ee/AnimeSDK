#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMiracleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1CFBE1A0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CFBE220)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CFBE030)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CFBDD20)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CFBDFD0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CFBE370)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFBDDA0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFBE3B0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFBE580)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CFBE750)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFBEA70)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CFBE4E0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFBE440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleExcelTable_TypeDefinitionIndex = 14143;

	class RogueMiracleExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x4940);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x4948);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x4950);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>, ::RPG::GameCore::RogueMiracleRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>, ::RPG::GameCore::RogueMiracleRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMiracleRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMiracleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMiracleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMiracleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
