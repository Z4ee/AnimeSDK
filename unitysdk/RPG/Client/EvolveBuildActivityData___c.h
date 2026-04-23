#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildStage; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2B32A0)
#define RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B32E0)
#define RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__ISSHOWMAPPINGINFONEWCONTENTREDDOT_B__4_0_OFFSET UNITYSDK_OFFSET(0xA2B3310)
#define RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__ISSHOWNORMALREDDOT_B__1_0_OFFSET UNITYSDK_OFFSET(0xA2B32F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildActivityData___c_TypeDefinitionIndex = 58779;

	class EvolveBuildActivityData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::EvolveBuildActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::EvolveBuildActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildActivityData___c_TypeDefinitionIndex)->GetStaticField(0xBD00);
		}
		static ::System::Func_2<::RPG::Client::EvolveBuildStage*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::EvolveBuildStage*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildActivityData___c_TypeDefinitionIndex)->GetStaticField(0xBD08);
		}
		static ::System::Func_2<::RPG::Client::EvolveBuildStage*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::EvolveBuildStage*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildActivityData___c_TypeDefinitionIndex)->GetStaticField(0xBD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsShowNormalRedDot_b__1_0(::RPG::Client::EvolveBuildStage* stage)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__ISSHOWNORMALREDDOT_B__1_0_OFFSET))(this, stage);
		}

		::System::Boolean _IsShowMappingInfoNewContentRedDot_b__4_0(::RPG::Client::EvolveBuildStage* stage)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__ISSHOWMAPPINGINFONEWCONTENTREDDOT_B__4_0_OFFSET))(this, stage);
		}
	};
}
