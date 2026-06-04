#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpecialNPCMapOffsetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19C9F4C0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19C9F350)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19C9F270)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19C9F2F0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19C9E9B0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C9E9F0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19C9EC20)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C9EDF0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19C9EF50)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C9F610)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19C9ED50)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19C9ECB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex = 14396;

	class SpecialNPCMapOffsetExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E6D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialNPCMapOffsetRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialNPCMapOffsetRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E6D8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E6E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0xF290);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0xF291);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpecialNPCMapOffsetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialNPCMapOffsetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialNPCMapOffsetRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialNPCMapOffsetRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialNPCMapOffsetRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialNPCMapOffsetRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpecialNPCMapOffsetRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpecialNPCMapOffsetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
