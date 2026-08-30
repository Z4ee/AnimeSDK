#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class AkAuxSendValue;
namespace UnityEngine { class GameObject; }

#define AKAUXSENDARRAY_ADD_1_OFFSET UNITYSDK_OFFSET(0x1EEB0650)
#define AKAUXSENDARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1EEB03F0)
#define AKAUXSENDARRAY_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1EEB0A30)
#define AKAUXSENDARRAY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1EEB07E0)
#define AKAUXSENDARRAY_COUNT_OFFSET UNITYSDK_OFFSET(0x1EEB0EF0)
#define AKAUXSENDARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEB0290)
#define AKAUXSENDARRAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EEB02F0)
#define AKAUXSENDARRAY_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1EEB0EB0)
#define AKAUXSENDARRAY_GETOBJECTPTR_OFFSET UNITYSDK_OFFSET(0x1EEB01D0)
#define AKAUXSENDARRAY_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1EEB0D20)
#define AKAUXSENDARRAY_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x1EEB0240)
#define AKAUXSENDARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EEB00E0)
#define AKAUXSENDARRAY_RESET_OFFSET UNITYSDK_OFFSET(0x1EEB03A0)
#define AKAUXSENDARRAY_SETVALUES_OFFSET UNITYSDK_OFFSET(0x1EEB0BA0)
#define AKAUXSENDARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB0040)

inline static constexpr unsigned int AkAuxSendArray_TypeDefinitionIndex = 43669;

class AkAuxSendArray : public ::System::Object
{
public:
	// static const ::System::Int32 MAX_COUNT = 0x4; // 0x0
	::System::IntPtr m_Buffer; // 0x10
	::System::Int32 SIZE_OF_AKAUXSENDVALUE; // 0x18
	::System::Int32 m_Count; // 0x1C

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
