#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RaidTargetConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C88770)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C885C0)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C88290)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C88560)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C88940)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C88310)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C88980)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C88B60)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C890C0)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C89420)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C88AC0)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C88A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidTargetConfigExcelTable_TypeDefinitionIndex = 13801;

	class RaidTargetConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EBD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTargetConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTargetConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EBD8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EBE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE060);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE061);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTargetConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTargetConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTargetConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTargetConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RaidTargetConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::RaidTargetConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RaidTargetConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RaidTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
