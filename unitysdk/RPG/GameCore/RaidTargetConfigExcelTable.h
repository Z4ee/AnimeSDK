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

#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1757EA10)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1757E860)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1757E530)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1757E800)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1757EBE0)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1757E5B0)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1757EC20)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1757EE00)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1757F360)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1757F6C0)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1757ED60)
#define RPG_GAMECORE_RAIDTARGETCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1757ECC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidTargetConfigExcelTable_TypeDefinitionIndex = 13326;

	class RaidTargetConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTargetConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTargetConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26210);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26218);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26220);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC680);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RaidTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC681);
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
