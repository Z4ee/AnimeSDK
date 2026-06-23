#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseHollowCameraPredicate.h"
#include "unitysdk/Struct_2_31FD36EFA5418B17.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_HOLLOWCAMERASAFEZONEPREDICATE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10D10BA0)
#define MOLEMOLE_CONFIG_HOLLOWCAMERASAFEZONEPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D10F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraSafeZonePredicate_TypeDefinitionIndex = 75962;

	class HollowCameraSafeZonePredicate : public ::MoleMole::Config::BaseHollowCameraPredicate
	{
	public:
		::System::String* SafeZoneKey; // 0x10
		::System::Boolean OverrideSafeZone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASAFEZONEPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Struct_2_31FD36EFA5418B17& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_31FD36EFA5418B17&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASAFEZONEPREDICATE_EVALUATE_OFFSET))(this, info);
		}
	};
}
