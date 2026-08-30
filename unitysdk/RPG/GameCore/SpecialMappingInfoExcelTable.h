#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpecialMappingInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D0B3AB0)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D0B3940)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D0B3630)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D0B38E0)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D0B3C80)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D0B36B0)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D0B3CC0)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0B3E90)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D0B4060)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0B4400)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D0B3DF0)
#define RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D0B3D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialMappingInfoExcelTable_TypeDefinitionIndex = 12471;

	class SpecialMappingInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialMappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F320);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialMappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F328);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialMappingInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialMappingInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialMappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F330);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpecialMappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xA570);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpecialMappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xA571);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialMappingInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialMappingInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialMappingInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialMappingInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpecialMappingInfoRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::SpecialMappingInfoRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpecialMappingInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialMappingInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALMAPPINGINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
