#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FightFestPhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188E04A0)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188E0320)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188DFFF0)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188E02C0)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188E0670)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188E0070)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188E06B0)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188E0890)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188E0DE0)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188E10F0)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188E07F0)
#define RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188E0750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestPhaseExcelTable_TypeDefinitionIndex = 12544;

	class FightFestPhaseExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F1B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestPhaseRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestPhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F1B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F1C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FightFestPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0xBB40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FightFestPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0xBB41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestPhaseRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestPhaseRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestPhaseRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FightFestPhaseRow* GetData(::System::UInt32 PhaseID)
		{
			return ((::RPG::GameCore::FightFestPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_GETDATA_OFFSET))(PhaseID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FightFestPhaseRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::FightFestPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
