#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB77670)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EB77630)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1EB77650)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EB77640)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1EB77660)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB77750)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int MissingCondition_TypeDefinitionIndex = 29919;

	class MissingCondition : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::System::String* _recoveryState; // 0x60
		::System::String* _missingType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION__CTOR_OFFSET))(this);
		}

		::System::String* ParadoxNotion_Serialization_IMissingRecoverable_get_missingType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_MISSINGTYPE_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_IMissingRecoverable_set_missingType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_MISSINGTYPE_OFFSET))(this, value);
		}

		::System::String* ParadoxNotion_Serialization_IMissingRecoverable_get_recoveryState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_RECOVERYSTATE_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_IMissingRecoverable_set_recoveryState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_RECOVERYSTATE_OFFSET))(this, value);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONDITION_GET_INFO_OFFSET))(this);
		}
	};
}
