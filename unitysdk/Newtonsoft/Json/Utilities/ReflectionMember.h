#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_GETTER_OFFSET UNITYSDK_OFFSET(0x1B713EB0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1B713E90)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_SETTER_OFFSET UNITYSDK_OFFSET(0x1B713ED0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_GETTER_OFFSET UNITYSDK_OFFSET(0x1B713EC0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1B713EA0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_SETTER_OFFSET UNITYSDK_OFFSET(0x1B713EE0)
#define NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B713EF0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ReflectionMember_TypeDefinitionIndex = 6943;

	class ReflectionMember : public ::System::Object
	{
	public:
		::System::Action_2<::System::Object*, ::System::Object*>* _Setter_k__BackingField; // 0x10
		::System::Type* _MemberType_k__BackingField; // 0x18
		::System::Func_2<::System::Object*, ::System::Object*>* _Getter_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER__CTOR_OFFSET))(this);
		}

		::System::Type* get_MemberType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Void set_MemberType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_MEMBERTYPE_OFFSET))(this, value);
		}

		::System::Func_2<::System::Object*, ::System::Object*>* get_Getter()
		{
			return ((::System::Func_2<::System::Object*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_GETTER_OFFSET))(this);
		}

		::System::Void set_Getter(::System::Func_2<::System::Object*, ::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_GETTER_OFFSET))(this, value);
		}

		::System::Action_2<::System::Object*, ::System::Object*>* get_Setter()
		{
			return ((::System::Action_2<::System::Object*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_GET_SETTER_OFFSET))(this);
		}

		::System::Void set_Setter(::System::Action_2<::System::Object*, ::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_REFLECTIONMEMBER_SET_SETTER_OFFSET))(this, value);
		}
	};
}
