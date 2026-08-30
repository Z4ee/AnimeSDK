#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_HoudiniRampInterpolationTypeWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_RampPointWrapper.h"

#define HOUDINIENGINEUNITY_HEU_FLOATRAMPPOINTWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B3E0D60)
#define HOUDINIENGINEUNITY_HEU_FLOATRAMPPOINTWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B3E0D70)
#define HOUDINIENGINEUNITY_HEU_FLOATRAMPPOINTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E0D80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_FloatRampPointWrapper_TypeDefinitionIndex = 39275;

	class HEU_FloatRampPointWrapper : public ::HoudiniEngineUnity::HEU_RampPointWrapper
	{
	public:
		::System::Single _Value_k__BackingField; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_FLOATRAMPPOINTWRAPPER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_FLOATRAMPPOINTWRAPPER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_FLOATRAMPPOINTWRAPPER_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
