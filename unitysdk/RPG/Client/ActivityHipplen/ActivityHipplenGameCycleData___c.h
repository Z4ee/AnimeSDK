#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC541970)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC5419B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__GETSORTEDTRAITLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0xC5419C0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameCycleData___c_TypeDefinitionIndex = 75203;

	class ActivityHipplenGameCycleData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenGameCycleData___c_TypeDefinitionIndex)->GetStaticField(0x63650);
		}
		static ::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityHipplen::ActivityHipplenGameCycleData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenGameCycleData___c_TypeDefinitionIndex)->GetStaticField(0x63658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedTraitList_b__4_0(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENGAMECYCLEDATA___C__GETSORTEDTRAITLIST_B__4_0_OFFSET))(this, a1, a2);
		}
	};
}
