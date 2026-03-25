#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleTargetConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FE2820)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FE2670)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FE2340)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FE2610)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FE29A0)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FE23C0)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FE29E0)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FE2BC0)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FE31D0)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE34E0)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FE2B20)
#define RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FE2A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetConfigExcelTable_TypeDefinitionIndex = 11730;

	class BattleTargetConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleTargetConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleTargetConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattleTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23170);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BattleTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23178);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BattleTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23180);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x92C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BattleTargetConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x92C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleTargetConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleTargetConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleTargetConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleTargetConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BattleTargetConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::BattleTargetConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattleTargetConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
