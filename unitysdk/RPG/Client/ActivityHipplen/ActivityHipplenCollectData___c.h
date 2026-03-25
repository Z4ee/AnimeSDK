#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F12730)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F12770)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__GETTRAITCOLLECTDATALIST_B__7_0_OFFSET UNITYSDK_OFFSET(0x8F12780)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenCollectData___c_TypeDefinitionIndex = 61647;

	class ActivityHipplenCollectData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenCollectData___c_TypeDefinitionIndex)->GetStaticField(0x2A180);
		}
		static ::RPG::Client::ActivityHipplen::ActivityHipplenCollectData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityHipplen::ActivityHipplenCollectData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenCollectData___c_TypeDefinitionIndex)->GetStaticField(0x2A188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetTraitCollectDataList_b__7_0(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* x, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__GETTRAITCOLLECTDATALIST_B__7_0_OFFSET))(this, x, y);
		}
	};
}
