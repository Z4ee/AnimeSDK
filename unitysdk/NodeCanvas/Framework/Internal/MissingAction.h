#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D357A20)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1D3579E0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1D357A00)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1D3579F0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1D357A10)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D357B00)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int MissingAction_TypeDefinitionIndex = 29796;

	class MissingAction : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::System::String* _missingType; // 0x60
		::System::String* _recoveryState; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION__CTOR_OFFSET))(this);
		}

		::System::String* ParadoxNotion_Serialization_IMissingRecoverable_get_missingType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_MISSINGTYPE_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_IMissingRecoverable_set_missingType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_MISSINGTYPE_OFFSET))(this, value);
		}

		::System::String* ParadoxNotion_Serialization_IMissingRecoverable_get_recoveryState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_RECOVERYSTATE_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_IMissingRecoverable_set_recoveryState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_RECOVERYSTATE_OFFSET))(this, value);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGACTION_GET_INFO_OFFSET))(this);
		}
	};
}
