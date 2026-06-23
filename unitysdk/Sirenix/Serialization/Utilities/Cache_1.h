#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization::Utilities { template <typename T> class Cache_1; }

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int Cache_1_TypeDefinitionIndex = 7630;

	template <typename T>
	class Cache_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsNotificationReceiver()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Cache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_FreeValues()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Cache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean isFree; // 0x0
		static ::System::Int32* StaticGet_THREAD_LOCK_TOKEN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Cache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_maxCacheSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Cache_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T Value; // 0x0
	};
}
