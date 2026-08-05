#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAC5950)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xAC5920)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAC59D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1FA5FF40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1FA5FF70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xAC58B0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int ControlPointOption_TypeDefinitionIndex = 39472;

	struct alignas(4) ControlPointOption
	{
		::System::Single TF; // 0x10
		::System::Single Distance; // 0x14
		::System::Boolean Include; // 0x18
		::System::Int32 MaterialID; // 0x1C
		::System::Boolean HardEdge; // 0x20
		::System::Single MaxStepDistance; // 0x24
		::System::Boolean UVEdge; // 0x28
		::System::Boolean UVShift; // 0x29
		::System::Single FirstU; // 0x2C
		::System::Single SecondU; // 0x30

		::System::Void _ctor(::System::Single tf, ::System::Single dist, ::System::Boolean includeAnyways, ::System::Int32 materialID, ::System::Boolean hardEdge, ::System::Single maxStepDistance, ::System::Boolean uvEdge, ::System::Boolean uvShift, ::System::Single firstU, ::System::Single secondU)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION__CTOR_OFFSET))(this, tf, dist, includeAnyways, materialID, hardEdge, maxStepDistance, uvEdge, uvShift, firstU, secondU);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::Generator::ControlPointOption other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::ControlPointOption))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::Generator::ControlPointOption left, ::FluffyUnderware::Curvy::Generator::ControlPointOption right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::ControlPointOption, ::FluffyUnderware::Curvy::Generator::ControlPointOption))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::Generator::ControlPointOption left, ::FluffyUnderware::Curvy::Generator::ControlPointOption right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::ControlPointOption, ::FluffyUnderware::Curvy::Generator::ControlPointOption))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CONTROLPOINTOPTION_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
