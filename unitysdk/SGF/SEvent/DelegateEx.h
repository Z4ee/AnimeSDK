#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define SGF_SEVENT_DELEGATEEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA669F0)
#define SGF_SEVENT_DELEGATEEX_EQUALS_OFFSET UNITYSDK_OFFSET(0xA66930)
#define SGF_SEVENT_DELEGATEEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA66A00)
#define SGF_SEVENT_DELEGATEEX_GET_DELEGATE_OFFSET UNITYSDK_OFFSET(0x246290)
#define SGF_SEVENT_DELEGATEEX__CTOR_OFFSET UNITYSDK_OFFSET(0xA66870)
#define SGF_SEVENT_DELEGATEEX___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA66AC0)
#define SGF_SEVENT_DELEGATEEX___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA66A50)

namespace SGF::SEvent
{
	inline static constexpr unsigned int DelegateEx_TypeDefinitionIndex = 7948;

	struct alignas(8) DelegateEx
	{
		::System::Delegate* _delegate; // 0x10
		::System::Object* _target; // 0x18
		::System::Reflection::MethodInfo* _method; // 0x20
		::System::Int32 _hashCode; // 0x28

		::System::Void _ctor(::System::Delegate* del)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX__CTOR_OFFSET))(this, del);
		}

		::System::Delegate* get_Delegate()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX_GET_DELEGATE_OFFSET))(this);
		}

		::System::Boolean Equals(::SGF::SEvent::DelegateEx other)
		{
			return ((::System::Boolean(*)(::PVOID, ::SGF::SEvent::DelegateEx))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
