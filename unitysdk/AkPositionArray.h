#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKPOSITIONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1DAA5180)
#define AKPOSITIONARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DAA5020)
#define AKPOSITIONARRAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DAA5080)
#define AKPOSITIONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DAA5000)
#define AKPOSITIONARRAY_RESET_OFFSET UNITYSDK_OFFSET(0x1DAA5130)
#define AKPOSITIONARRAY_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DAA5010)
#define AKPOSITIONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA4FC0)

inline static constexpr unsigned int AkPositionArray_TypeDefinitionIndex = 43678;

class AkPositionArray : public ::System::Object
{
public:
	::System::IntPtr m_Current; // 0x10
	::System::UInt32 _Count_k__BackingField; // 0x18
	::System::UInt32 m_MaxCount; // 0x1C
	::System::IntPtr m_Buffer; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPOSITIONARRAY__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_Count()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONARRAY_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPOSITIONARRAY_SET_COUNT_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONARRAY_DISPOSE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONARRAY_FINALIZE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPOSITIONARRAY_RESET_OFFSET))(this);
	}

	::System::Void Add(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKPOSITIONARRAY_ADD_OFFSET))(this, a1, a2, a3);
	}
};
