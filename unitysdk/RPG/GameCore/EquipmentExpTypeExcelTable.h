#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EquipmentExpTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171A6CB0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171A6B00)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171A67D0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171A6AA0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171A6EC0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171A6850)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171A6F00)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171A70E0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171A72A0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171A7650)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171A7040)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171A6FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExpTypeExcelTable_TypeDefinitionIndex = 12088;

	class EquipmentExpTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C710);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C718);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C720);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xEC70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExpTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xEC71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentExpTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentExpTypeRow* GetData(::System::UInt32 ExpType, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::EquipmentExpTypeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_GETDATA_OFFSET))(ExpType, Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EquipmentExpTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EquipmentExpTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
