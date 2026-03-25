#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ParameterModifier_ModifierAction.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_OFFSET UNITYSDK_OFFSET(0x84766D0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x8476740)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterModifier_TypeDefinitionIndex = 37757;

	class HEU_ParameterModifier : public ::System::Object
	{
	public:
		::System::Int32 _parameterIndex; // 0x10
		::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction _action; // 0x14
		::System::Int32 _instanceIndex; // 0x18
		::System::Int32 _modifierValue; // 0x1C
		::System::Single _floatValue; // 0x20
		::System::Int32 _intValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER__CTOR_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_ParameterModifier* GetNewModifier(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction action, ::System::Int32 parameterIndex, ::System::Int32 instanceIndex, ::System::Int32 modifierValue)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterModifier*(*)(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_OFFSET))(action, parameterIndex, instanceIndex, modifierValue);
		}
	};
}
