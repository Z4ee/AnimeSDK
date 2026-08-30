#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B79BD50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79BD90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__GETTRAITCOLLECTDATALIST_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B79BDA0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenCollectData___c_TypeDefinitionIndex = 75198;

	class ActivityHipplenCollectData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenCollectData___c_TypeDefinitionIndex)->GetStaticField(0x635D0);
		}
		static ::RPG::Client::ActivityHipplen::ActivityHipplenCollectData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityHipplen::ActivityHipplenCollectData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenCollectData___c_TypeDefinitionIndex)->GetStaticField(0x635D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetTraitCollectDataList_b__7_0(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA___C__GETTRAITCOLLECTDATALIST_B__7_0_OFFSET))(this, a1, a2);
		}
	};
}
