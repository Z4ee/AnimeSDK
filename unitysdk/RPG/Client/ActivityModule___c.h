#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_5;
namespace RPG::Client { class ActivityPhaseData; }
namespace RPG::Client { class GridFightResidentActivityPanelData; }
namespace RPG::Client { class RogueResidentActivityPanelData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFCB1C0)
#define RPG_CLIENT_ACTIVITYMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCB1F0)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_0_OFFSET UNITYSDK_OFFSET(0x1AFCB270)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTGRIDFIGHTACTIVITYIDFORREWARDCOUNT_B__16_1_OFFSET UNITYSDK_OFFSET(0x1AFCB2B0)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_0_OFFSET UNITYSDK_OFFSET(0x1AFCB370)
#define RPG_CLIENT_ACTIVITYMODULE___C__FINDCURRENTTOURNROGUEACTIVITYIDFORREWARDCOUNT_B__59_1_OFFSET UNITYSDK_OFFSET(0x1AFCB3C0)
#define RPG_CLIENT_ACTIVITYMODULE___C__ISHANDBOOKPHASEALLFINISHED_B__7_0_OFFSET UNITYSDK_OFFSET(0x1AFCB200)
#define RPG_CLIENT_ACTIVITYMODULE___C__ONLOGINFINISH_B__114_0_OFFSET UNITYSDK_OFFSET(0x1AFCB480)
#define RPG_CLIENT_ACTIVITYMODULE___C___ONGETACTIVITYREWARDCOUNTDATASCRSP_B__134_0_OFFSET UNITYSDK_OFFSET(0x1AFCB490)
#define RPG_CLIENT_ACTIVITYMODULE___C___ONGETALLACTIVITYREWARDCOUNTDATASCRSP_B__135_0_OFFSET UNITYSDK_OFFSET(0x1AFCB4B0)
#define RPG_CLIENT_ACTIVITYMODULE___C___PREPAREMISSIONDATA_B__139_0_OFFSET UNITYSDK_OFFSET(0x1AFCB4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityModule___c_TypeDefinitionIndex = 61779;

	class ActivityModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60930);
		}
		static ::System::Action** StaticGet___9__114_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60938);
		}
		static ::RPG::Client::ActivityModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60940);
		}
		static ::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::String*>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60948);
		}
		static ::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightResidentActivityPanelData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60950);
		}
		static ::System::Func_2<::Class_1_7FF19F6206AF6DD7_5*, ::System::UInt32>** StaticGet___9__134_0()
		{
			return (::System::Func_2<::Class_1_7FF19F6206AF6DD7_5*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60958);
		}
		static ::System::Action** StaticGet___9__139_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60960);
		}
		static ::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::String*>** StaticGet___9__59_1()
		{
			return (::System::Func_2<::RPG::Client::RogueResidentActivityPanelData*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60968);
		}
		static ::System::Func_2<::Class_1_7FF19F6206AF6DD7_5*, ::System::UInt32>** StaticGet___9__135_0()
		{
			return (::System::Func_2<::Class_1_7FF19F6206AF6DD7_5*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60970);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::ActivityPhaseData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityModule___c_TypeDefinitionIndex)->GetStaticField(0x60978);
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

		::System::Void _OnLoginFinish_b__114_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C__ONLOGINFINISH_B__114_0_OFFSET))(this);
		}

		::System::UInt32 __OnGetActivityRewardCountDataScRsp_b__134_0(::Class_1_7FF19F6206AF6DD7_5* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___ONGETACTIVITYREWARDCOUNTDATASCRSP_B__134_0_OFFSET))(this, a1);
		}

		::System::UInt32 __OnGetAllActivityRewardCountDataScRsp_b__135_0(::Class_1_7FF19F6206AF6DD7_5* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___ONGETALLACTIVITYREWARDCOUNTDATASCRSP_B__135_0_OFFSET))(this, a1);
		}

		::System::Void __PrepareMissionData_b__139_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMODULE___C___PREPAREMISSIONDATA_B__139_0_OFFSET))(this);
		}
	};
}
