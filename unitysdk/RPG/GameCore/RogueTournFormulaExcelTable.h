#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1CCC4C80)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CCC4D00)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CCC4920)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E555370)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CCC48C0)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CCC4E50)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CCC4A50)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CCC4E90)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CCC5060)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CCC5440)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC5760)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CCC4FC0)
#define RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CCC4F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaExcelTable_TypeDefinitionIndex = 14839;

	class RogueTournFormulaExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaExcelTable_TypeDefinitionIndex)->GetStaticField(0x12450);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaExcelTable_TypeDefinitionIndex)->GetStaticField(0x12458);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaExcelTable_TypeDefinitionIndex)->GetStaticField(0x12460);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaExcelTable_TypeDefinitionIndex)->GetStaticField(0x7930);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournFormulaExcelTable_TypeDefinitionIndex)->GetStaticField(0x7931);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRow*>, ::RPG::GameCore::RogueTournFormulaRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournFormulaRow*>, ::RPG::GameCore::RogueTournFormulaRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournFormulaRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournFormulaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournFormulaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournFormulaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
