#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x16478790)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x164787E0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_TRACED_OFFSET UNITYSDK_OFFSET(0x16478770)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x164787A0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_MEMBER_OFFSET UNITYSDK_OFFSET(0x164787C0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_ORIGINALOBJECT_OFFSET UNITYSDK_OFFSET(0x164787B0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_PATH_OFFSET UNITYSDK_OFFSET(0x164787D0)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_TRACED_OFFSET UNITYSDK_OFFSET(0x16478780)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16478750)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ErrorContext_TypeDefinitionIndex = 8318;

	class ErrorContext : public ::System::Object
	{
	public:
		::System::String* _Path_k__BackingField; // 0x10
		::System::Object* _OriginalObject_k__BackingField; // 0x18
		::System::Object* _Member_k__BackingField; // 0x20
		::System::Exception* _Error_k__BackingField; // 0x28
		::System::Boolean _Handled_k__BackingField; // 0x30
		::System::Boolean _Traced_k__BackingField; // 0x31

		::System::Void _ctor(::System::Object* originalObject, ::System::Object* member, ::System::String* path, ::System::Exception* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT__CTOR_OFFSET))(this, originalObject, member, path, error);
		}

		::System::Boolean get_Traced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_TRACED_OFFSET))(this);
		}

		::System::Void set_Traced(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_TRACED_OFFSET))(this, value);
		}

		::System::Exception* get_Error()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_Error(::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_ERROR_OFFSET))(this, value);
		}

		::System::Void set_OriginalObject(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_ORIGINALOBJECT_OFFSET))(this, value);
		}

		::System::Void set_Member(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_MEMBER_OFFSET))(this, value);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_PATH_OFFSET))(this, value);
		}

		::System::Boolean get_Handled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_HANDLED_OFFSET))(this);
		}
	};
}
