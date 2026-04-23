#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B3C690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3C6D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C__ISALLBOSSNODEFINISHED_B__49_0_OFFSET UNITYSDK_OFFSET(0x9B3C6E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveChapter___c_TypeDefinitionIndex = 69206;

	class IdleLiveChapter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::System::Boolean>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveChapter___c_TypeDefinitionIndex)->GetStaticField(0x299A0);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveChapter___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveChapter___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveChapter___c_TypeDefinitionIndex)->GetStaticField(0x299A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllBossNodeFinished_b__49_0(::RPG::Client::ActivityIdleLive::IdleLiveNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHAPTER___C__ISALLBOSSNODEFINISHED_B__49_0_OFFSET))(this, node);
		}
	};
}
