#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RaidConfigExcelTable_IndexKey.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RaidConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C85330)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C851C0)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C84EA0)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C85160)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C854A0)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C84F20)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C854E0)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C856C0)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C865B0)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C86A60)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C85620)
#define RPG_GAMECORE_RAIDCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C85580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigExcelTable_TypeDefinitionIndex = 13796;

	class RaidConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EA60);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EA68);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::GameCore::RaidConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::GameCore::RaidConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EA70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::GameCore::RaidConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::GameCore::RaidConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::GameCore::RaidConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::RaidConfigExcelTable_IndexKey, ::RPG::GameCore::RaidConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RaidConfigRow* GetData(::System::UInt32 RaidID, ::System::UInt32 HardLevel)
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_GETDATA_OFFSET))(RaidID, HardLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RaidConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
