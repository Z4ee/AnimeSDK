#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class PrecompiledTypeDeserializationDatabase_DatabaseInitializer; }
namespace BehaviorDesigner::Runtime { class PrecompiledTypeDeserializer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_GET_INITIALIZER_OFFSET UNITYSDK_OFFSET(0x1F5D13E0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_QUERYTYPEDESERIALIZER_OFFSET UNITYSDK_OFFSET(0x1F5D1490)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_SET_INITIALIZER_OFFSET UNITYSDK_OFFSET(0x1F5D13F0)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_WARMUP_OFFSET UNITYSDK_OFFSET(0x1F5D1400)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int PrecompiledTypeDeserializationDatabase_TypeDefinitionIndex = 33897;

	class PrecompiledTypeDeserializationDatabase : public ::System::Object
	{
	public:
		static ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_DatabaseInitializer** StaticGet__Initializer_k__BackingField()
		{
			return (::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_DatabaseInitializer**)Il2CppClass::FromTypeDefinitionIndex(PrecompiledTypeDeserializationDatabase_TypeDefinitionIndex)->GetStaticField(0x28C30);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>** StaticGet__typeDeserializers()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>**)Il2CppClass::FromTypeDefinitionIndex(PrecompiledTypeDeserializationDatabase_TypeDefinitionIndex)->GetStaticField(0x28C38);
		}

		static ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_DatabaseInitializer* get_Initializer()
		{
			return ((::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_DatabaseInitializer*(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_GET_INITIALIZER_OFFSET))();
		}

		static ::System::Void set_Initializer(::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_DatabaseInitializer* value)
		{
			return ((::System::Void(*)(::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_DatabaseInitializer*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_SET_INITIALIZER_OFFSET))(value);
		}

		static ::System::Void WarmUp()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_WARMUP_OFFSET))();
		}

		static ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer* QueryTypeDeserializer(::System::String* type)
		{
			return ((::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_QUERYTYPEDESERIALIZER_OFFSET))(type);
		}
	};
}
