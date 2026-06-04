#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDestroyPropConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19B36900)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19B36790)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19B36480)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19B36730)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19B36A90)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B36500)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19B36AD0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B36CA0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19B36EB0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B37220)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19B36C00)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B36B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDestroyPropConfigExcelTable_TypeDefinitionIndex = 13934;

	class RogueDestroyPropConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A160);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A168);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A170);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x99E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x99E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDestroyPropConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDestroyPropConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDestroyPropConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDestroyPropConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
