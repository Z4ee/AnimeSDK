#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEHAVIORDESIGNER_RUNTIME_OBJECTPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E4583C0)
#define BEHAVIORDESIGNER_RUNTIME_OBJECTPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E466A20)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int ObjectPool_TypeDefinitionIndex = 33888;

	class ObjectPool : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_lockObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ObjectPool_TypeDefinitionIndex)->GetStaticField(0x28CD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_poolDictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectPool_TypeDefinitionIndex)->GetStaticField(0x28CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_OBJECTPOOL__CCTOR_OFFSET))();
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_OBJECTPOOL_CLEAR_OFFSET))();
		}
	};
}
