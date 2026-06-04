#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildStage; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB93A440)
#define RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB93A480)
#define RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__ISSHOWMAPPINGINFONEWCONTENTREDDOT_B__4_0_OFFSET UNITYSDK_OFFSET(0xB93A670)
#define RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__ISSHOWNORMALREDDOT_B__1_0_OFFSET UNITYSDK_OFFSET(0xB93A490)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildActivityData___c_TypeDefinitionIndex = 59709;

	class EvolveBuildActivityData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::EvolveBuildStage*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::EvolveBuildStage*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildActivityData___c_TypeDefinitionIndex)->GetStaticField(0x14BB0);
		}
		static ::RPG::Client::EvolveBuildActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::EvolveBuildActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildActivityData___c_TypeDefinitionIndex)->GetStaticField(0x14BB8);
		}
		static ::System::Func_2<::RPG::Client::EvolveBuildStage*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::EvolveBuildStage*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildActivityData___c_TypeDefinitionIndex)->GetStaticField(0x14BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsShowNormalRedDot_b__1_0(::RPG::Client::EvolveBuildStage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__ISSHOWNORMALREDDOT_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsShowMappingInfoNewContentRedDot_b__4_0(::RPG::Client::EvolveBuildStage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDACTIVITYDATA___C__ISSHOWMAPPINGINFONEWCONTENTREDDOT_B__4_0_OFFSET))(this, a1);
		}
	};
}
