#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicAreaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x19B42540)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19B425C0)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19B42410)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19B42100)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19B423B0)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19B42750)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B42180)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19B42790)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B42960)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19B42EB0)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B431D0)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19B428C0)
#define RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B42820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicAreaExcelTable_TypeDefinitionIndex = 14118;

	class RogueMagicAreaExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x45750);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAreaRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAreaRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x45758);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMagicAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x45760);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMagicAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0xC7D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMagicAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0xC7D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAreaRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAreaRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAreaRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAreaRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAreaRow*>, ::RPG::GameCore::RogueMagicAreaRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicAreaRow*>, ::RPG::GameCore::RogueMagicAreaRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicAreaRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicAreaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMagicAreaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicAreaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICAREAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
