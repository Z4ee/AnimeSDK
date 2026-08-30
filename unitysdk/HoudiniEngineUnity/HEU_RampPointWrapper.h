#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_HoudiniRampInterpolationTypeWrapper.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER_GET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1B479C20)
#define HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B479C00)
#define HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER_SET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1B479C30)
#define HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B479C10)
#define HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B479C40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_RampPointWrapper_TypeDefinitionIndex = 39274;

	class HEU_RampPointWrapper : public ::System::Object
	{
	public:
		::System::Single _Position_k__BackingField; // 0x10
		::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper _Interpolation_k__BackingField; // 0x14

		::System::Void _ctor(::System::Single a1, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_Position()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER_SET_POSITION_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper get_Interpolation()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER_GET_INTERPOLATION_OFFSET))(this);
		}

		::System::Void set_Interpolation(::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniRampInterpolationTypeWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RAMPPOINTWRAPPER_SET_INTERPOLATION_OFFSET))(this, a1);
		}
	};
}
