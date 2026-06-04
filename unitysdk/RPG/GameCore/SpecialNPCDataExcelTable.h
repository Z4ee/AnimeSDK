#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SpecialNPCDataExcelTable_IndexKey.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpecialNPCDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19C9E470)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19C9E300)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19C9E220)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19C9E2A0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19C9D740)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C9D780)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19C9D9B0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C9DB80)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19C9DDC0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C9E570)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19C9DAE0)
#define RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C9DA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCDataExcelTable_TypeDefinitionIndex = 14394;

	class SpecialNPCDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x252D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x252D8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x252E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x92F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpecialNPCDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialNPCDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey, ::RPG::GameCore::SpecialNPCDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpecialNPCDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpecialNPCDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
