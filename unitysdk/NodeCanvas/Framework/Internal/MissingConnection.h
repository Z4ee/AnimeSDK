#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Connection.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1DB9B4D0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1DB9B4F0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1DB9B4E0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1DB9B500)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9B510)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int MissingConnection_TypeDefinitionIndex = 29695;

	class MissingConnection : public ::NodeCanvas::Framework::Connection
	{
	public:
		::System::String* _recoveryState; // 0x30
		::System::String* _missingType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION__CTOR_OFFSET))(this);
		}

		::System::String* ParadoxNotion_Serialization_IMissingRecoverable_get_missingType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_MISSINGTYPE_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_IMissingRecoverable_set_missingType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_MISSINGTYPE_OFFSET))(this, value);
		}

		::System::String* ParadoxNotion_Serialization_IMissingRecoverable_get_recoveryState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_RECOVERYSTATE_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_IMissingRecoverable_set_recoveryState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGCONNECTION_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_RECOVERYSTATE_OFFSET))(this, value);
		}
	};
}
