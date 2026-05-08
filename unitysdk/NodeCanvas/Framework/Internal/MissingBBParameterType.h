#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/BBParameter_1.h"

namespace System { class Object; }
namespace System { class String; }

#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1A901680)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1A9016A0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x1A901690)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_RECOVERYSTATE_OFFSET UNITYSDK_OFFSET(0x1A9016B0)
#define NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9016C0)

namespace NodeCanvas::Framework::Internal
{
	inline static constexpr unsigned int MissingBBParameterType_TypeDefinitionIndex = 28093;

	class MissingBBParameterType : public ::NodeCanvas::Framework::BBParameter_1<::System::Object*>
	{
	public:
		::System::String* _recoveryState; // 0x50
		::System::String* _missingType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE__CTOR_OFFSET))(this);
		}

		::System::String* ParadoxNotion_Serialization_IMissingRecoverable_get_missingType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_MISSINGTYPE_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_IMissingRecoverable_set_missingType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_MISSINGTYPE_OFFSET))(this, value);
		}

		::System::String* ParadoxNotion_Serialization_IMissingRecoverable_get_recoveryState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_GET_RECOVERYSTATE_OFFSET))(this);
		}

		::System::Void ParadoxNotion_Serialization_IMissingRecoverable_set_recoveryState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_INTERNAL_MISSINGBBPARAMETERTYPE_PARADOXNOTION_SERIALIZATION_IMISSINGRECOVERABLE_SET_RECOVERYSTATE_OFFSET))(this, value);
		}
	};
}
