#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BFF7D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BFF810)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C__HASUNTAKENREWARD_B__1_0_OFFSET UNITYSDK_OFFSET(0x9BFF820)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendRewardGroup___c_TypeDefinitionIndex = 56783;

	class ActivityLocalLegendRewardGroup___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityLocalLegendRewardGroup___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityLocalLegendRewardGroup___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendRewardGroup___c_TypeDefinitionIndex)->GetStaticField(0x33910);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendRewardGroup___c_TypeDefinitionIndex)->GetStaticField(0x33918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasUntakenReward_b__1_0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C__HASUNTAKENREWARD_B__1_0_OFFSET))(this, quest);
		}
	};
}
