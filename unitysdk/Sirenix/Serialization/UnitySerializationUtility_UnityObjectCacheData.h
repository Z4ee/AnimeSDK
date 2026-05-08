#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::Serialization { class IUnityGeneratedFormatter; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_UNITYOBJECTCACHEDATA_GET_OFFSET UNITYSDK_OFFSET(0x9971E0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UnitySerializationUtility_UnityObjectCacheData_TypeDefinitionIndex = 7468;

	struct alignas(8) UnitySerializationUtility_UnityObjectCacheData
	{
		::System::Type* UnityObjectType; // 0x10
		::Sirenix::Serialization::IUnityGeneratedFormatter* GeneratedFormatter; // 0x18

		::System::Void Get(::UnityEngine::Object* unityObject, ::System::Type*& unityObjectType, ::Sirenix::Serialization::IUnityGeneratedFormatter*& unityGeneratedFormatter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Type*&, ::Sirenix::Serialization::IUnityGeneratedFormatter*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYSERIALIZATIONUTILITY_UNITYOBJECTCACHEDATA_GET_OFFSET))(this, unityObject, unityObjectType, unityGeneratedFormatter);
		}
	};
}
