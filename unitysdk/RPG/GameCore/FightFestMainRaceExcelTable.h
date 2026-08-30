#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FightFestMainRaceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D094DA0)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D094C70)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D094960)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D094C10)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D094F30)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D0949E0)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D094F70)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D095140)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D095550)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D095870)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D0950A0)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D095000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestMainRaceExcelTable_TypeDefinitionIndex = 13167;

	class FightFestMainRaceExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B4D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B4D8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B4E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0xC890);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0xC891);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FightFestMainRaceRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FightFestMainRaceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FightFestMainRaceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FightFestMainRaceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
