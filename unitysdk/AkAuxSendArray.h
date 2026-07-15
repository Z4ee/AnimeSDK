#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class AkAuxSendValue;
namespace UnityEngine { class GameObject; }

#define AKAUXSENDARRAY_ADD_1_OFFSET UNITYSDK_OFFSET(0x1B9526E0)
#define AKAUXSENDARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1B952480)
#define AKAUXSENDARRAY_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1B952AC0)
#define AKAUXSENDARRAY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B952870)
#define AKAUXSENDARRAY_COUNT_OFFSET UNITYSDK_OFFSET(0x1B952F80)
#define AKAUXSENDARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B952320)
#define AKAUXSENDARRAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B952380)
#define AKAUXSENDARRAY_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1B952F40)
#define AKAUXSENDARRAY_GETOBJECTPTR_OFFSET UNITYSDK_OFFSET(0x1B952260)
#define AKAUXSENDARRAY_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1B952DB0)
#define AKAUXSENDARRAY_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x1B9522D0)
#define AKAUXSENDARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B952170)
#define AKAUXSENDARRAY_RESET_OFFSET UNITYSDK_OFFSET(0x1B952430)
#define AKAUXSENDARRAY_SETVALUES_OFFSET UNITYSDK_OFFSET(0x1B952C30)
#define AKAUXSENDARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9520D0)

inline static constexpr unsigned int AkAuxSendArray_TypeDefinitionIndex = 42058;

class AkAuxSendArray : public ::System::Object
{
public:
	// static const ::System::Int32 MAX_COUNT = 0x4; // 0x0
	::System::Int32 m_Count; // 0x10
	::System::Int32 SIZE_OF_AKAUXSENDVALUE; // 0x14
	::System::IntPtr m_Buffer; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY__CTOR_OFFSET))(this);
	}

	::AkAuxSendValue* get_Item(::System::Int32 a1)
	{
		return ((::AkAuxSendValue*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GET_ITEM_OFFSET))(this, a1);
	}

	::System::Boolean get_isFull()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GET_ISFULL_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_DISPOSE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_FINALIZE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_RESET_OFFSET))(this);
	}

	::System::Boolean Add(::UnityEngine::GameObject* a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_ADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Add_1(::System::UInt32 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_ADD_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Contains(::UnityEngine::GameObject* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_CONTAINS_OFFSET))(this, a1, a2);
	}

	::System::Boolean Contains_1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_CONTAINS_1_OFFSET))(this, a1);
	}

	::AKRESULT SetValues(::UnityEngine::GameObject* a1)
	{
		return ((::AKRESULT(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_SETVALUES_OFFSET))(this, a1);
	}

	::AKRESULT GetValues(::UnityEngine::GameObject* a1)
	{
		return ((::AKRESULT(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GETVALUES_OFFSET))(this, a1);
	}

	::System::IntPtr GetBuffer()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GETBUFFER_OFFSET))(this);
	}

	::System::Int32 Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_COUNT_OFFSET))(this);
	}

	::System::IntPtr GetObjectPtr(::System::Int32 a1)
	{
		return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GETOBJECTPTR_OFFSET))(this, a1);
	}
};
