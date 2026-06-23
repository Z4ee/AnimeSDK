#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace BehaviorDesigner::Runtime { class PrecompiledTypeDeserializer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_DATABASEINITIALIZER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E5BD240)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_DATABASEINITIALIZER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E5BD270)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_DATABASEINITIALIZER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E5BCF10)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_DATABASEINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BCEF0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int PrecompiledTypeDeserializationDatabase_DatabaseInitializer_TypeDefinitionIndex = 33262;

	class PrecompiledTypeDeserializationDatabase_DatabaseInitializer : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_DATABASEINITIALIZER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*& typeDatabase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*&))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_DATABASEINITIALIZER_INVOKE_OFFSET))(this, typeDatabase);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*& typeDatabase, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_DATABASEINITIALIZER_BEGININVOKE_OFFSET))(this, typeDatabase, callback, object);
		}

		::System::Void EndInvoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*& typeDatabase, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONDATABASE_DATABASEINITIALIZER_ENDINVOKE_OFFSET))(this, typeDatabase, result);
		}
	};
}
