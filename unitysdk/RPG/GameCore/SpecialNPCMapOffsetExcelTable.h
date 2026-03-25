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

#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1775E8E0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1775E730)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1775E400)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1775E6D0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1775EA60)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1775E480)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1775EAA0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1775EC80)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1775EDF0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1775F100)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1775EBE0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1775EB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex = 13874;

	class SpecialNPCMapOffsetExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0x11680);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialNPCMapOffsetRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpecialNPCMapOffsetRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0x11688);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0x11690);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0x5490);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpecialNPCMapOffsetExcelTable_TypeDefinitionIndex)->GetStaticField(0x5491);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__CCTOR_OFFSET))();
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

		static ::RPG::GameCore::SpecialNPCMapOffsetRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::SpecialNPCMapOffsetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE_GETDATA_OFFSET))(ID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpecialNPCMapOffsetRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialNPCMapOffsetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
