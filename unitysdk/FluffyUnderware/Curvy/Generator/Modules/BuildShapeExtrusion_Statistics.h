#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA529D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C4980)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9EE850)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_GET_CROSSSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_GET_MATERIALGROUPSCOUNT_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_GET_PATHSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E02A360)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E02A380)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_SET_CROSSSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x5120D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_SET_MATERIALGROUPSCOUNT_OFFSET UNITYSDK_OFFSET(0x52CCD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_SET_OFFSET UNITYSDK_OFFSET(0x4E6C30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_SET_PATHSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildShapeExtrusion_Statistics_TypeDefinitionIndex = 38864;

	struct alignas(4) BuildShapeExtrusion_Statistics
	{
		::System::Int32 _PathSampleCount_k__BackingField; // 0x10
		::System::Int32 _CrossSampleCount_k__BackingField; // 0x14
		::System::Int32 _MaterialGroupsCount_k__BackingField; // 0x18

		::System::Int32 get_PathSampleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_GET_PATHSAMPLECOUNT_OFFSET))(this);
		}

		::System::Void set_PathSampleCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_SET_PATHSAMPLECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_CrossSampleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_GET_CROSSSAMPLECOUNT_OFFSET))(this);
		}

		::System::Void set_CrossSampleCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_SET_CROSSSAMPLECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_MaterialGroupsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_GET_MATERIALGROUPSCOUNT_OFFSET))(this);
		}

		::System::Void set_MaterialGroupsCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_SET_MATERIALGROUPSCOUNT_OFFSET))(this, value);
		}

		::System::Void Set(::System::Int32 pathSamples, ::System::Int32 crossSamples, ::System::Int32 crossGroups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_SET_OFFSET))(this, pathSamples, crossSamples, crossGroups);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics left, ::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics, ::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics left, ::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics, ::FluffyUnderware::Curvy::Generator::Modules::BuildShapeExtrusion_Statistics))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDSHAPEEXTRUSION_STATISTICS_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
