#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FOUNDATION_UNTILLASTCALL_GET_INVOCATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B473250)
#define FOUNDATION_UNTILLASTCALL_GET_INVOKED_OFFSET UNITYSDK_OFFSET(0x1B473270)
#define FOUNDATION_UNTILLASTCALL_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1B473230)
#define FOUNDATION_UNTILLASTCALL_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1B473210)
#define FOUNDATION_UNTILLASTCALL_INCREASEREFCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4732A0)
#define FOUNDATION_UNTILLASTCALL_INVOKE_1_OFFSET UNITYSDK_OFFSET(0x1B473360)
#define FOUNDATION_UNTILLASTCALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4732F0)
#define FOUNDATION_UNTILLASTCALL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B473420)
#define FOUNDATION_UNTILLASTCALL_SET_INVOCATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B473260)
#define FOUNDATION_UNTILLASTCALL_SET_INVOKED_OFFSET UNITYSDK_OFFSET(0x1B473280)
#define FOUNDATION_UNTILLASTCALL_SET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x1B473240)
#define FOUNDATION_UNTILLASTCALL_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1B473220)
#define FOUNDATION_UNTILLASTCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B473290)

namespace Foundation
{
	inline static constexpr unsigned int UntilLastCall_TypeDefinitionIndex = 7839;

	class UntilLastCall : public ::System::Object
	{
	public:
		::System::Action* Action; // 0x10
		::System::Int32 _RefCount_k__BackingField; // 0x18
		::System::Int32 _TotalCount_k__BackingField; // 0x1C
		::System::Int32 _InvocationCount_k__BackingField; // 0x20
		::System::Boolean _Invoked_k__BackingField; // 0x24

		::System::Void _ctor(::System::Action* action, ::System::Int32 totalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL__CTOR_OFFSET))(this, action, totalCount);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_SET_TOTALCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_RefCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_GET_REFCOUNT_OFFSET))(this);
		}

		::System::Void set_RefCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_SET_REFCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_InvocationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_GET_INVOCATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_InvocationCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_SET_INVOCATIONCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_Invoked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_GET_INVOKED_OFFSET))(this);
		}

		::System::Void set_Invoked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_SET_INVOKED_OFFSET))(this, value);
		}

		::System::Void increaseRefCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_INCREASEREFCOUNT_OFFSET))(this);
		}

		::System::Void invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_INVOKE_OFFSET))(this);
		}

		::System::Void Invoke_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_INVOKE_1_OFFSET))(this);
		}

		static ::System::Action* op_Implicit(::Foundation::UntilLastCall* obj)
		{
			return ((::System::Action*(*)(::Foundation::UntilLastCall*))((::PBYTE)hIl2Cpp + FOUNDATION_UNTILLASTCALL_OP_IMPLICIT_OFFSET))(obj);
		}
	};
}
