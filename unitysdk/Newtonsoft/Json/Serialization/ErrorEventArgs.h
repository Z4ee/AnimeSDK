#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace System { class Object; }

#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_CURRENTOBJECT_OFFSET UNITYSDK_OFFSET(0x164787F0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_ERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x16478800)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16478810)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ErrorEventArgs_TypeDefinitionIndex = 8302;

	class ErrorEventArgs : public ::System::EventArgs
	{
	public:
		::Newtonsoft::Json::Serialization::ErrorContext* _ErrorContext_k__BackingField; // 0x10
		::System::Object* _CurrentObject_k__BackingField; // 0x18

		::System::Void _ctor(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS__CTOR_OFFSET))(this, currentObject, errorContext);
		}

		::System::Void set_CurrentObject(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_CURRENTOBJECT_OFFSET))(this, value);
		}

		::System::Void set_ErrorContext(::Newtonsoft::Json::Serialization::ErrorContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_ERRORCONTEXT_OFFSET))(this, value);
		}
	};
}
