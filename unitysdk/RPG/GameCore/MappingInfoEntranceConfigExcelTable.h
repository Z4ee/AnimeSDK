#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MappingInfoEntranceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x198C6360)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x198C61F0)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x198C5EE0)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x198C6190)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x198C64B0)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x198C5F60)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x198C64F0)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x198C66C0)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x198C6800)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x198C6B20)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x198C6620)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x198C6580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex = 11972;

	class MappingInfoEntranceConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A000);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A008);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A010);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x99C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x99C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MappingInfoEntranceConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MappingInfoEntranceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MappingInfoEntranceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MappingInfoEntranceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
