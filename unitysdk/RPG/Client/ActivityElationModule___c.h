#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ACTIVITYELATIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AD40C0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD40F0)
#define RPG_CLIENT_ACTIVITYELATIONMODULE___C___INITREQ_B__33_0_OFFSET UNITYSDK_OFFSET(0x9AD4100)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationModule___c_TypeDefinitionIndex = 56726;

	class ActivityElationModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityElationModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityElationModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationModule___c_TypeDefinitionIndex)->GetStaticField(0x22760);
		}
		static ::System::Action_1<::RPG::Client::ScheduleData*>** StaticGet___9__33_0()
		{
			return (::System::Action_1<::RPG::Client::ScheduleData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationModule___c_TypeDefinitionIndex)->GetStaticField(0x22768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __InitReq_b__33_0(::RPG::Client::ScheduleData* _)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONMODULE___C___INITREQ_B__33_0_OFFSET))(this, _);
		}
	};
}
