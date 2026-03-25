#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTelevisionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FC5330)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8FC5370)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA___C___HAVENEWUNLOCKLEVEL_B__4_0_OFFSET UNITYSDK_OFFSET(0x8FC5380)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionActivityData___c_TypeDefinitionIndex = 49963;

	class ActivityTelevisionActivityData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityTelevisionActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityTelevisionActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionActivityData___c_TypeDefinitionIndex)->GetStaticField(0x300E0);
		}
		static ::System::Func_2<::RPG::Client::ActivityTelevisionData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityTelevisionData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionActivityData___c_TypeDefinitionIndex)->GetStaticField(0x300E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __HaveNewUnlockLevel_b__4_0(::RPG::Client::ActivityTelevisionData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityTelevisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA___C___HAVENEWUNLOCKLEVEL_B__4_0_OFFSET))(this, data);
		}
	};
}
