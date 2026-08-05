#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define SGF_SEVENT_DELEGATEEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAB1E10)
#define SGF_SEVENT_DELEGATEEX_EQUALS_OFFSET UNITYSDK_OFFSET(0xAB1D50)
#define SGF_SEVENT_DELEGATEEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAB1E20)
#define SGF_SEVENT_DELEGATEEX_GET_DELEGATE_OFFSET UNITYSDK_OFFSET(0x259D70)
#define SGF_SEVENT_DELEGATEEX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F787C10)
#define SGF_SEVENT_DELEGATEEX_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1F7878E0)
#define SGF_SEVENT_DELEGATEEX_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F7878A0)
#define SGF_SEVENT_DELEGATEEX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F787D20)
#define SGF_SEVENT_DELEGATEEX__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1C90)
#define SGF_SEVENT_DELEGATEEX___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xAB1E70)
#define SGF_SEVENT_DELEGATEEX___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAB1EE0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int DelegateEx_TypeDefinitionIndex = 8260;

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

		static ::System::Delegate* op_Implicit(::SGF::SEvent::DelegateEx& value)
		{
			return ((::System::Delegate*(*)(::SGF::SEvent::DelegateEx&))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX_OP_IMPLICIT_OFFSET))(value);
		}

		static ::SGF::SEvent::DelegateEx op_Implicit_1(::System::Delegate* value)
		{
			return ((::SGF::SEvent::DelegateEx(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX_OP_IMPLICIT_1_OFFSET))(value);
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

		static ::System::Boolean op_Equality(::SGF::SEvent::DelegateEx& left, ::SGF::SEvent::DelegateEx& right)
		{
			return ((::System::Boolean(*)(::SGF::SEvent::DelegateEx&, ::SGF::SEvent::DelegateEx&))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::SGF::SEvent::DelegateEx& left, ::SGF::SEvent::DelegateEx& right)
		{
			return ((::System::Boolean(*)(::SGF::SEvent::DelegateEx&, ::SGF::SEvent::DelegateEx&))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEEX___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
