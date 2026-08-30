#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKCHANNELEMITTERARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1EEBC4E0)
#define AKCHANNELEMITTERARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEBC380)
#define AKCHANNELEMITTERARRAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EEBC3E0)
#define AKCHANNELEMITTERARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EEBC360)
#define AKCHANNELEMITTERARRAY_RESET_OFFSET UNITYSDK_OFFSET(0x1EEBC490)
#define AKCHANNELEMITTERARRAY_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EEBC370)
#define AKCHANNELEMITTERARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEBC320)

inline static constexpr unsigned int AkChannelEmitterArray_TypeDefinitionIndex = 43671;

class AkChannelEmitterArray : public ::System::Object
{
public:
	::System::IntPtr m_Current; // 0x10
	::System::UInt32 m_MaxCount; // 0x18
	::System::UInt32 _Count_k__BackingField; // 0x1C
	::System::IntPtr m_Buffer; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELEMITTERARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_Count()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTERARRAY_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELEMITTERARRAY_SET_COUNT_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTERARRAY_DISPOSE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTERARRAY_FINALIZE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHANNELEMITTERARRAY_RESET_OFFSET))(this);
	}

	::System::Void Add(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + AKCHANNELEMITTERARRAY_ADD_OFFSET))(this, a1, a2, a3, a4);
	}
};
