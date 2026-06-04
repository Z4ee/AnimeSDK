#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitChallenge; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__ANYQUESTFINISHED_B__7_0_OFFSET UNITYSDK_OFFSET(0xBBF6570)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBF6450)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__CHECKHASANYTRAITQUESTFINISHEDBYTYPE_B__2_0_OFFSET UNITYSDK_OFFSET(0xBBF64A0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF6490)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETFINISHRATIO_B__9_0_OFFSET UNITYSDK_OFFSET(0xBBF6590)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETFINISHRATIO_B__9_1_OFFSET UNITYSDK_OFFSET(0xBBF65B0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__5_1_OFFSET UNITYSDK_OFFSET(0xBBF64E0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__5_2_OFFSET UNITYSDK_OFFSET(0xBBF6550)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGS_B__4_1_OFFSET UNITYSDK_OFFSET(0xBBF64C0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__ISALLQUESTGOT_B__10_0_OFFSET UNITYSDK_OFFSET(0xBBF65D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTrait___c_TypeDefinitionIndex = 61160;

	class GridFightSeasonTrait___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTrait___c_TypeDefinitionIndex)->GetStaticField(0x36D70);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTrait___c_TypeDefinitionIndex)->GetStaticField(0x36D78);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightTraitChallenge*>** StaticGet___9__5_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightTraitChallenge*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTrait___c_TypeDefinitionIndex)->GetStaticField(0x36D80);
		}
		static ::RPG::Client::GridFightSeasonTrait___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSeasonTrait___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTrait___c_TypeDefinitionIndex)->GetStaticField(0x36D88);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTrait___c_TypeDefinitionIndex)->GetStaticField(0x36D90);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTrait___c_TypeDefinitionIndex)->GetStaticField(0x36D98);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTrait___c_TypeDefinitionIndex)->GetStaticField(0x36DA0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTrait___c_TypeDefinitionIndex)->GetStaticField(0x36DA8);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitChallenge*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonTrait___c_TypeDefinitionIndex)->GetStaticField(0x36DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckHasAnyTraitQuestFinishedByType_b__2_0(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__CHECKHASANYTRAITQUESTFINISHEDBYTYPE_B__2_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* _GetTraitConfigs_b__4_1(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGS_B__4_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetTraitConfigsWithoutCheckCompleted_b__5_1(::RPG::Client::GridFightTraitChallenge* a1, ::RPG::Client::GridFightTraitChallenge* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__5_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitConfig* _GetTraitConfigsWithoutCheckCompleted_b__5_2(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_B__5_2_OFFSET))(this, a1);
		}

		::System::Boolean _AnyQuestFinished_b__7_0(::RPG::Client::GridFightTraitChallenge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__ANYQUESTFINISHED_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFinishRatio_b__9_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETFINISHRATIO_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFinishRatio_b__9_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__GETFINISHRATIO_B__9_1_OFFSET))(this, a1);
		}

		::System::Boolean _IsAllQuestGot_b__10_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT___C__ISALLQUESTGOT_B__10_0_OFFSET))(this, a1);
		}
	};
}
