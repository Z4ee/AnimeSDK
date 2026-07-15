#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x15B99C30)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x15B99C80)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_TRACED_OFFSET UNITYSDK_OFFSET(0x15B99C10)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x15B99C40)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_MEMBER_OFFSET UNITYSDK_OFFSET(0x15B99C60)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_ORIGINALOBJECT_OFFSET UNITYSDK_OFFSET(0x15B99C50)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_PATH_OFFSET UNITYSDK_OFFSET(0x15B99C70)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_TRACED_OFFSET UNITYSDK_OFFSET(0x15B99C20)
#define NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B99BF0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ErrorContext_TypeDefinitionIndex = 9379;

	class ErrorContext : public ::System::Object
	{
	public:
		::System::Exception* _Error_k__BackingField; // 0x10
		::System::String* _Path_k__BackingField; // 0x18
		::System::Object* _OriginalObject_k__BackingField; // 0x20
		::System::Object* _Member_k__BackingField; // 0x28
		::System::Boolean _Traced_k__BackingField; // 0x30
		::System::Boolean _Handled_k__BackingField; // 0x31

		::System::Void _ctor(::System::Object* a1, ::System::Object* a2, ::System::String* a3, ::System::Exception* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_Traced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_TRACED_OFFSET))(this);
		}

		::System::Void set_Traced(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_TRACED_OFFSET))(this, a1);
		}

		::System::Exception* get_Error()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_Error(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_ERROR_OFFSET))(this, a1);
		}

		::System::Void set_OriginalObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_ORIGINALOBJECT_OFFSET))(this, a1);
		}

		::System::Void set_Member(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_MEMBER_OFFSET))(this, a1);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_SET_PATH_OFFSET))(this, a1);
		}

		::System::Boolean get_Handled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_ERRORCONTEXT_GET_HANDLED_OFFSET))(this);
		}
	};
}
