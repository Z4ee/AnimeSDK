#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace System { class Object; }

#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_GET_CURRENTOBJECT_OFFSET UNITYSDK_OFFSET(0x1F6E5E70)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_GET_ERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F6E5E90)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_CURRENTOBJECT_OFFSET UNITYSDK_OFFSET(0x1F6E5E80)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_ERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F6E5EA0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E5EB0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ErrorEventArgs_TypeDefinitionIndex = 7115;

	class ErrorEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* _CurrentObject_k__BackingField; // 0x10
		::Newtonsoft::Json::Serialization::ErrorContext* _ErrorContext_k__BackingField; // 0x18

		::System::Void _ctor(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS__CTOR_OFFSET))(this, currentObject, errorContext);
		}

		::System::Object* get_CurrentObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_GET_CURRENTOBJECT_OFFSET))(this);
		}

		::System::Void set_CurrentObject(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_CURRENTOBJECT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::ErrorContext* get_ErrorContext()
		{
			return ((::Newtonsoft::Json::Serialization::ErrorContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_GET_ERRORCONTEXT_OFFSET))(this);
		}

		::System::Void set_ErrorContext(::Newtonsoft::Json::Serialization::ErrorContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_ERRORCONTEXT_OFFSET))(this, value);
		}
	};
}
