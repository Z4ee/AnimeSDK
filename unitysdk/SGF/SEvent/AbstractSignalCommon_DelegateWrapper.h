#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/DelegateEx.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Delegate; }
namespace System { class Object; }

#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA2A2F0)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2A2C0)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2A3E0)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_GET_DELEGATE_OFFSET UNITYSDK_OFFSET(0x246290)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DA3EF10)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DA3EB20)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1DA3EC00)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1DA3EC70)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DA3EAC0)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1DA3EFA0)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2A450)
#define SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2A4C0)

namespace SGF::SEvent
{
	inline static constexpr unsigned int AbstractSignalCommon_DelegateWrapper_TypeDefinitionIndex = 8222;

	struct alignas(8) AbstractSignalCommon_DelegateWrapper
	{
		::SGF::SEvent::DelegateEx _delegateEx; // 0x10

		::System::Delegate* get_Delegate()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_GET_DELEGATE_OFFSET))(this);
		}

		static ::System::Delegate* op_Implicit(::SGF::SEvent::AbstractSignalCommon_DelegateWrapper wrapper)
		{
			return ((::System::Delegate*(*)(::SGF::SEvent::AbstractSignalCommon_DelegateWrapper))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_IMPLICIT_OFFSET))(wrapper);
		}

		static ::SGF::SEvent::AbstractSignalCommon_DelegateWrapper op_Implicit_1(::System::Delegate* value)
		{
			return ((::SGF::SEvent::AbstractSignalCommon_DelegateWrapper(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::SGF::SEvent::DelegateEx op_Implicit_2(::SGF::SEvent::AbstractSignalCommon_DelegateWrapper wrapper)
		{
			return ((::SGF::SEvent::DelegateEx(*)(::SGF::SEvent::AbstractSignalCommon_DelegateWrapper))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_IMPLICIT_2_OFFSET))(wrapper);
		}

		static ::SGF::SEvent::AbstractSignalCommon_DelegateWrapper op_Implicit_3(::SGF::SEvent::DelegateEx value)
		{
			return ((::SGF::SEvent::AbstractSignalCommon_DelegateWrapper(*)(::SGF::SEvent::DelegateEx))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_IMPLICIT_3_OFFSET))(value);
		}

		::System::Boolean Equals(::SGF::SEvent::AbstractSignalCommon_DelegateWrapper other)
		{
			return ((::System::Boolean(*)(::PVOID, ::SGF::SEvent::AbstractSignalCommon_DelegateWrapper))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::SGF::SEvent::AbstractSignalCommon_DelegateWrapper left, ::SGF::SEvent::AbstractSignalCommon_DelegateWrapper right)
		{
			return ((::System::Boolean(*)(::SGF::SEvent::AbstractSignalCommon_DelegateWrapper, ::SGF::SEvent::AbstractSignalCommon_DelegateWrapper))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::SGF::SEvent::AbstractSignalCommon_DelegateWrapper left, ::SGF::SEvent::AbstractSignalCommon_DelegateWrapper right)
		{
			return ((::System::Boolean(*)(::SGF::SEvent::AbstractSignalCommon_DelegateWrapper, ::SGF::SEvent::AbstractSignalCommon_DelegateWrapper))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_ABSTRACTSIGNALCOMMON_DELEGATEWRAPPER___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
