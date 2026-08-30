#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueEndlessMegaBuffDescRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3E3290)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3E3120)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3E2E10)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3E30C0)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3E3420)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3E2E90)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3E3460)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E3630)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3E3920)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3E3C90)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3E3590)
#define RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3E34F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueEndlessMegaBuffDescExcelTable_TypeDefinitionIndex = 12258;

	class RogueEndlessMegaBuffDescExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueEndlessMegaBuffDescExcelTable_TypeDefinitionIndex)->GetStaticField(0xDEC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueEndlessMegaBuffDescExcelTable_TypeDefinitionIndex)->GetStaticField(0xDEC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueEndlessMegaBuffDescExcelTable_TypeDefinitionIndex)->GetStaticField(0xDED0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueEndlessMegaBuffDescExcelTable_TypeDefinitionIndex)->GetStaticField(0x4500);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueEndlessMegaBuffDescExcelTable_TypeDefinitionIndex)->GetStaticField(0x4501);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEndlessMegaBuffDescRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueEndlessMegaBuffDescRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueEndlessMegaBuffDescRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueEndlessMegaBuffDescRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueEndlessMegaBuffDescRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEENDLESSMEGABUFFDESCEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
