#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MappingInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x198C7100)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x198C6F90)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x198C6C80)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x198C6F30)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x198C72A0)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x198C6D00)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x198C72E0)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x198C74B0)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x198C79B0)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x198C7D10)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x198C7410)
#define RPG_GAMECORE_MAPPINGINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x198C7370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingInfoExcelTable_TypeDefinitionIndex = 11948;

	class MappingInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A040);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A048);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A050);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x99D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MappingInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x99D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MappingInfoRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MappingInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
