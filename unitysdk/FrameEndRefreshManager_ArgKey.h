#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FrameEndRefreshManager_ArgKey_ArgKind.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Array; }
namespace System { class Object; }

#define FRAMEENDREFRESHMANAGER_ARGKEY_ARRAYSEQUAL_OFFSET UNITYSDK_OFFSET(0x154B89D0)
#define FRAMEENDREFRESHMANAGER_ARGKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7FAD20)
#define FRAMEENDREFRESHMANAGER_ARGKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x7FACF0)
#define FRAMEENDREFRESHMANAGER_ARGKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7FAE10)
#define FRAMEENDREFRESHMANAGER_ARGKEY_HASHARRAY_OFFSET UNITYSDK_OFFSET(0x154B8250)
#define FRAMEENDREFRESHMANAGER_ARGKEY_TRYGETSAFEHASH_OFFSET UNITYSDK_OFFSET(0x154B8650)
#define FRAMEENDREFRESHMANAGER_ARGKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x7FACE0)
#define FRAMEENDREFRESHMANAGER_ARGKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7FAE60)
#define FRAMEENDREFRESHMANAGER_ARGKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7FAED0)

inline static constexpr unsigned int FrameEndRefreshManager_ArgKey_TypeDefinitionIndex = 60368;

struct alignas(8) FrameEndRefreshManager_ArgKey
{
	::FrameEndRefreshManager_ArgKey_ArgKind _kind; // 0x10
	::System::Object* _obj; // 0x18
	::System::Int32 _unityId; // 0x20
	::System::Int32 _hash; // 0x24

	::System::Void _ctor(::System::Object* obj)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ARGKEY__CTOR_OFFSET))(this, obj);
	}

	::System::Boolean Equals(::FrameEndRefreshManager_ArgKey other)
	{
		return ((::System::Boolean(*)(::PVOID, ::FrameEndRefreshManager_ArgKey))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ARGKEY_EQUALS_OFFSET))(this, other);
	}

	::System::Boolean Equals_1(::System::Object* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ARGKEY_EQUALS_1_OFFSET))(this, obj);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ARGKEY_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Int32 TryGetSafeHash(::System::Object* obj)
	{
		return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ARGKEY_TRYGETSAFEHASH_OFFSET))(obj);
	}

	static ::System::Int32 HashArray(::System::Array* arr)
	{
		return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ARGKEY_HASHARRAY_OFFSET))(arr);
	}

	static ::System::Boolean ArraysEqual(::System::Array* a, ::System::Array* b)
	{
		return ((::System::Boolean(*)(::System::Array*, ::System::Array*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ARGKEY_ARRAYSEQUAL_OFFSET))(a, b);
	}

	::System::Boolean __base_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ARGKEY___BASE_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __base_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_ARGKEY___BASE_GETHASHCODE_OFFSET))(this);
	}
};
