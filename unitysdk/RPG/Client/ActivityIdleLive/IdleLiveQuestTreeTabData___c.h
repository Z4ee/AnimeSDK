#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1666A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1666E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__GETCHAPTERQUESTLISTREWARD_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A1666F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__GETCHAPTERQUESTLISTREWARD_B__3_1_OFFSET UNITYSDK_OFFSET(0x1A166760)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeTabData___c_TypeDefinitionIndex = 71772;

	class IdleLiveQuestTreeTabData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeTabData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeTabData___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveQuestTreeTabData___c_TypeDefinitionIndex)->GetStaticField(0x401C0);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*, ::System::UInt32>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveQuestTreeTabData___c_TypeDefinitionIndex)->GetStaticField(0x401C8);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveQuestTreeTabData___c_TypeDefinitionIndex)->GetStaticField(0x401D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChapterQuestListReward_b__3_0(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__GETCHAPTERQUESTLISTREWARD_B__3_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetChapterQuestListReward_b__3_1(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__GETCHAPTERQUESTLISTREWARD_B__3_1_OFFSET))(this, a1);
		}
	};
}
