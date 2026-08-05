#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FrameEndRefreshManager_ArgKey.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define FRAMEENDREFRESHMANAGER_CALLKEY_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0xF23DB00)
#define FRAMEENDREFRESHMANAGER_CALLKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x634F00)
#define FRAMEENDREFRESHMANAGER_CALLKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x634EC0)
#define FRAMEENDREFRESHMANAGER_CALLKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x635000)
#define FRAMEENDREFRESHMANAGER_CALLKEY_GETUNITYID_OFFSET UNITYSDK_OFFSET(0xF23D810)
#define FRAMEENDREFRESHMANAGER_CALLKEY_MAKEARGKEYS_OFFSET UNITYSDK_OFFSET(0xF23D990)
#define FRAMEENDREFRESHMANAGER_CALLKEY_OWNERSEQUAL_OFFSET UNITYSDK_OFFSET(0xF23DE10)
#define FRAMEENDREFRESHMANAGER_CALLKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x634E60)
#define FRAMEENDREFRESHMANAGER_CALLKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x635050)
#define FRAMEENDREFRESHMANAGER_CALLKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6350D0)

inline static constexpr unsigned int FrameEndRefreshManager_CallKey_TypeDefinitionIndex = 77543;

struct alignas(8) FrameEndRefreshManager_CallKey
{
	::System::Reflection::MethodInfo* _method; // 0x10
	::System::Object* _owner; // 0x18
	::System::Int32 _ownerId; // 0x20
	::Il2CppArray<::FrameEndRefreshManager_ArgKey>* _argKeys; // 0x28
	::System::Int32 _hash; // 0x30

	::System::Void _ctor(::System::Object* owner, ::System::Reflection::MethodInfo* method, ::Il2CppArray<::System::Object*>* args)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY__CTOR_OFFSET))(this, owner, method, args);
	}

	::System::Boolean Equals(::FrameEndRefreshManager_CallKey other)
	{
		return ((::System::Boolean(*)(::PVOID, ::FrameEndRefreshManager_CallKey))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_EQUALS_OFFSET))(this, other);
	}

	::System::Boolean Equals_1(::System::Object* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_EQUALS_1_OFFSET))(this, obj);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Int32 ComputeHash(::System::Reflection::MethodInfo* method, ::System::Object* owner, ::System::Int32 ownerId, ::Il2CppArray<::FrameEndRefreshManager_ArgKey>* argKeys)
	{
		return ((::System::Int32(*)(::System::Reflection::MethodInfo*, ::System::Object*, ::System::Int32, ::Il2CppArray<::FrameEndRefreshManager_ArgKey>*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_COMPUTEHASH_OFFSET))(method, owner, ownerId, argKeys);
	}

	static ::System::Int32 GetUnityId(::System::Object* owner)
	{
		return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_GETUNITYID_OFFSET))(owner);
	}

	static ::System::Boolean OwnersEqual(::System::Object* a, ::System::Int32 aId, ::System::Object* b, ::System::Int32 bId)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Int32, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_OWNERSEQUAL_OFFSET))(a, aId, b, bId);
	}

	static ::Il2CppArray<::FrameEndRefreshManager_ArgKey>* MakeArgKeys(::Il2CppArray<::System::Object*>* args)
	{
		return ((::Il2CppArray<::FrameEndRefreshManager_ArgKey>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY_MAKEARGKEYS_OFFSET))(args);
	}

	::System::Boolean __base_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY___BASE_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __base_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_CALLKEY___BASE_GETHASHCODE_OFFSET))(this);
	}
};
