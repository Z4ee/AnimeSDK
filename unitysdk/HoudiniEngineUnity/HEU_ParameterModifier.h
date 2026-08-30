#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ModifierActionWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ParameterModifier_ModifierAction.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x1B455DB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GETNEWMODIFIER_OFFSET UNITYSDK_OFFSET(0x1B455D30)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1B455C60)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1B455CF0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INSTANCEINDEX_OFFSET UNITYSDK_OFFSET(0x1B455CB0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x1B455D10)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_MODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x1B455CD0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_GET_PARAMETERINDEX_OFFSET UNITYSDK_OFFSET(0x1B455C40)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B455E30)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_MODIFIERACTION_INTERNALTOWRAPPER_OFFSET UNITYSDK_OFFSET(0x1B455C70)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_MODIFIERACTION_WRAPPERTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B455CA0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1B455C80)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1B455D00)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_INSTANCEINDEX_OFFSET UNITYSDK_OFFSET(0x1B455CC0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x1B455D20)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_MODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x1B455CE0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER_SET_PARAMETERINDEX_OFFSET UNITYSDK_OFFSET(0x1B455C50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B455E20)

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
