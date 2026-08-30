#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ModifierActionWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ParameterModifier_ModifierAction.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x11A79060)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_OFFSET UNITYSDK_OFFSET(0x11A78FE0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x11A78F10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x11A78FA0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INSTANCEINDEX_OFFSET UNITYSDK_OFFSET(0x11A78F60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x11A78FC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_MODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x11A78F80)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_PARAMETERINDEX_OFFSET UNITYSDK_OFFSET(0x11A78EF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x11A790E0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_MODIFIERACTION_INTERNALTOWRAPPER_OFFSET UNITYSDK_OFFSET(0x11A78F20)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_MODIFIERACTION_WRAPPERTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x11A78F50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x11A78F30)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x11A78FB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_INSTANCEINDEX_OFFSET UNITYSDK_OFFSET(0x11A78F70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x11A78FD0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_MODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x11A78F90)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_PARAMETERINDEX_OFFSET UNITYSDK_OFFSET(0x11A78F00)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A790D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ParameterModifier_TypeDefinitionIndex = 39252;

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

		::System::Int32 get_ParameterIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_PARAMETERINDEX_OFFSET))(this);
		}

		::System::Void set_ParameterIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_PARAMETERINDEX_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_ModifierActionWrapper get_Action()
		{
			return ((::HoudiniEngineUnity::HEU_ModifierActionWrapper(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::HoudiniEngineUnity::HEU_ModifierActionWrapper a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ModifierActionWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_ACTION_OFFSET))(this, a1);
		}

		::System::Int32 get_InstanceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INSTANCEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_INSTANCEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_ModifierValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_MODIFIERVALUE_OFFSET))(this);
		}

		::System::Void set_ModifierValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_MODIFIERVALUE_OFFSET))(this, a1);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_FLOATVALUE_OFFSET))(this);
		}

		::System::Void set_FloatValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_FLOATVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INTVALUE_OFFSET))(this);
		}

		::System::Void set_IntValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_INTVALUE_OFFSET))(this, a1);
		}

		static ::HoudiniEngineUnity::HEU_ParameterModifier* GetNewModifier(::HoudiniEngineUnity::HEU_ModifierActionWrapper a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterModifier*(*)(::HoudiniEngineUnity::HEU_ModifierActionWrapper, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_OFFSET))(a1, a2, a3, a4);
		}

		static ::HoudiniEngineUnity::HEU_ParameterModifier* GetNewModifier_1(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterModifier*(*)(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_ParameterModifier*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

		static ::HoudiniEngineUnity::HEU_ModifierActionWrapper ModifierAction_InternalToWrapper(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction a1)
		{
			return ((::HoudiniEngineUnity::HEU_ModifierActionWrapper(*)(::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_MODIFIERACTION_INTERNALTOWRAPPER_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction ModifierAction_WrapperToInternal(::HoudiniEngineUnity::HEU_ModifierActionWrapper a1)
		{
			return ((::HoudiniEngineUnity::HEU_ParameterModifier_ModifierAction(*)(::HoudiniEngineUnity::HEU_ModifierActionWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_MODIFIERACTION_WRAPPERTOINTERNAL_OFFSET))(a1);
		}
	};
}
