#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_5;
namespace RPG::Client { class ActivityPhaseData; }
namespace RPG::Client { class GridFightResidentActivityPanelData; }
namespace RPG::Client { class RogueResidentActivityPanelData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1CCF00)
#define RPG_CLIENT_ACTIVITYMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1CCF30)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_0_OFFSET UNITYSDK_OFFSET(0xB1CCFB0)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_1_OFFSET UNITYSDK_OFFSET(0xB1CD070)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_0_OFFSET UNITYSDK_OFFSET(0xB1CD130)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_1_OFFSET UNITYSDK_OFFSET(0xB1CD1F0)
#define RPG_CLIENT_ACTIVITYMODULE___C__ISHANDBOOKPHASEALLFINISHED_B__7_0_OFFSET UNITYSDK_OFFSET(0xB1CCF40)
#define RPG_CLIENT_ACTIVITYMODULE___C__ONLOGINFINISH_B__113_0_OFFSET UNITYSDK_OFFSET(0xB1CD2B0)
#define RPG_CLIENT_ACTIVITYMODULE___C___ONGETACTIVITYREWARDCOUNTDATASCRSP_B__133_0_OFFSET UNITYSDK_OFFSET(0xB1CD2C0)
#define RPG_CLIENT_ACTIVITYMODULE___C___ONGETALLACTIVITYREWARDCOUNTDATASCRSP_B__134_0_OFFSET UNITYSDK_OFFSET(0xB1CD2E0)
#define RPG_CLIENT_ACTIVITYMODULE___C___PREPAREMISSIONDATA_B__138_0_OFFSET UNITYSDK_OFFSET(0xB1CD300)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule___c_TypeDefinitionIndex = 57678;

	class ActivityModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_455008579EB95638_5*, ::System::UInt32>** StaticGet___9__133_0()
		{
			return (::System::Func_2<::Class_1_455008579EB95638_5*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57530);
		}
		static ::RPG::Client::ActivityModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57538);
		}
		static ::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::String*>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57540);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57548);
		}
		static ::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57550);
		}
		static ::System::Action** StaticGet___9__113_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57558);
		}
		static ::System::Func_2<::Class_1_455008579EB95638_5*, ::System::UInt32>** StaticGet___9__134_0()
		{
			return (::System::Func_2<::Class_1_455008579EB95638_5*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57560);
		}
		static ::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57568);
		}
		static ::System::Action** StaticGet___9__138_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57570);
		}
		static ::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::String*>** StaticGet___9__59_1()
		{
			return (::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x57578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsHandbookPhaseAllFinished_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__ISHANDBOOKPHASEALLFINISHED_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean _FindCurrentGridFightActivityIDForRewardCount_b__16_0(::RPG::Client::GridFightResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_0_OFFSET))(this, a1);
		}

		::System::String* _FindCurrentGridFightActivityIDForRewardCount_b__16_1(::RPG::Client::GridFightResidentActivityPanelData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_1_OFFSET))(this, a1);
		}

		::System::Boolean _FindCurrentTournRogueActivityIDForRewardCount_b__59_0(::RPG::Client::RogueResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_0_OFFSET))(this, a1);
		}

		::System::String* _FindCurrentTournRogueActivityIDForRewardCount_b__59_1(::RPG::Client::RogueResidentActivityPanelData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::RogueResidentActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_1_OFFSET))(this, a1);
		}

		::System::Void _OnLoginFinish_b__113_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__ONLOGINFINISH_B__113_0_OFFSET))(this);
		}

		::System::UInt32 __OnGetActivityRewardCountDataScRsp_b__133_0(::Class_1_455008579EB95638_5* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_455008579EB95638_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___ONGETACTIVITYREWARDCOUNTDATASCRSP_B__133_0_OFFSET))(this, a1);
		}

		::System::UInt32 __OnGetAllActivityRewardCountDataScRsp_b__134_0(::Class_1_455008579EB95638_5* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_455008579EB95638_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___ONGETALLACTIVITYREWARDCOUNTDATASCRSP_B__134_0_OFFSET))(this, a1);
		}

		::System::Void __PrepareMissionData_b__138_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___PREPAREMISSIONDATA_B__138_0_OFFSET))(this);
		}
	};
}
