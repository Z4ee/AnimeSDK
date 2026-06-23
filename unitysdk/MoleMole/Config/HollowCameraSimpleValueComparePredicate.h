#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseHollowCameraPredicate.h"
#include "unitysdk/MoleMole/Config/HollowCameraPredicateSimpleValueType.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/Struct_2_31FD36EFA5418B17.h"

#define MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A35E3D0)
#define MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1A35E4D0)
#define MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35E5B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraSimpleValueComparePredicate_TypeDefinitionIndex = 72723;

	class HollowCameraSimpleValueComparePredicate : public ::MoleMole::Config::BaseHollowCameraPredicate
	{
	public:
		::System::Single ValueTarget; // 0x10
		::MoleMole::Config::ValueCompareType CompareType; // 0x14
		::MoleMole::Config::HollowCameraPredicateSimpleValueType ValueType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Struct_2_31FD36EFA5418B17& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_31FD36EFA5418B17&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE_EVALUATE_OFFSET))(this, info);
		}

		::System::Boolean TryGetValue(::Struct_2_31FD36EFA5418B17& info, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_31FD36EFA5418B17&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERASIMPLEVALUECOMPAREPREDICATE_TRYGETVALUE_OFFSET))(this, info, value);
		}
	};
}
