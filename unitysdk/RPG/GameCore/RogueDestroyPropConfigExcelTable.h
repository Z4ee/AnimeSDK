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

#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CFA8AB0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CFA8940)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CFA8630)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CFA88E0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CFA8C40)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFA86B0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFA8C80)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFA8E50)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CFA9060)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFA93D0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CFA8DB0)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFA8D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDestroyPropConfigExcelTable_TypeDefinitionIndex = 14082;

	class RogueDestroyPropConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x18550);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x18558);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDestroyPropConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x18560);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5C60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDestroyPropConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x5C61);
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
