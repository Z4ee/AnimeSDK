#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideSpiritRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CE02B40)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE02A10)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CE02700)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CE029B0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CE02C90)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE02780)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE02CD0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE02EA0)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CE03940)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE03C60)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CE02E00)
#define RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE02D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritExcelTable_TypeDefinitionIndex = 10889;

	class AetherDivideSpiritExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0x34F00);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0x34F08);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0x34F10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0xDDF0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideSpiritExcelTable_TypeDefinitionIndex)->GetStaticField(0xDDF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideSpiritRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideSpiritRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideSpiritRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideSpiritRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideSpiritRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
