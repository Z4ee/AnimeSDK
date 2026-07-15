#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EnergyBarConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C050730)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C0505C0)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C0502B0)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C050560)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C0508C0)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C050330)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C050900)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C050AD0)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C050CA0)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C051010)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C050A30)
#define RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C050990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnergyBarConfigExcelTable_TypeDefinitionIndex = 12731;

	class EnergyBarConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EnergyBarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10C40);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnergyBarConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnergyBarConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(EnergyBarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10C48);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnergyBarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10C50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnergyBarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x59C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EnergyBarConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x59C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnergyBarConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnergyBarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnergyBarConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnergyBarConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EnergyBarConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EnergyBarConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EnergyBarConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EnergyBarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENERGYBARCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
