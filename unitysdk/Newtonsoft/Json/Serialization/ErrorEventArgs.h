#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace System { class Object; }

#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_CURRENTOBJECT_OFFSET UNITYSDK_OFFSET(0x172E40A0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_ERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x172E40B0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x172E40C0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ErrorEventArgs_TypeDefinitionIndex = 9642;

	class ErrorEventArgs : public ::System::EventArgs
	{
	public:
		::System::Object* _CurrentObject_k__BackingField; // 0x10
		::Newtonsoft::Json::Serialization::ErrorContext* _ErrorContext_k__BackingField; // 0x18

		::System::Void _ctor(::System::Object* a1, ::Newtonsoft::Json::Serialization::ErrorContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void set_CurrentObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_CURRENTOBJECT_OFFSET))(this, a1);
		}

		::System::Void set_ErrorContext(::Newtonsoft::Json::Serialization::ErrorContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::ErrorContext*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERROREVENTARGS_SET_ERRORCONTEXT_OFFSET))(this, a1);
		}
	};
}
