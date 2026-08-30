#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FightFestCoachSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E0D4340)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E0D4210)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E0D3F00)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E0D41B0)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E0D44D0)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E0D3F80)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E0D4510)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E0D46E0)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E0D4AC0)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D4DE0)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E0D4640)
#define RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E0D45A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestCoachSkillExcelTable_TypeDefinitionIndex = 13181;

	class FightFestCoachSkillExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestCoachSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7330);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestCoachSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestCoachSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestCoachSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7338);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestCoachSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x7340);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FightFestCoachSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FightFestCoachSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestCoachSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestCoachSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestCoachSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestCoachSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FightFestCoachSkillRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FightFestCoachSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FightFestCoachSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FightFestCoachSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTCOACHSKILLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
