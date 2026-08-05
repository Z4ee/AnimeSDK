#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class PrecompiledTypeDeserializer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_METHOD_1_9E86D16B476C4CAF_OFFSET UNITYSDK_OFFSET(0x1CBC77D0)
#define MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_METHOD_1_A33108F24FD72EA4_OFFSET UNITYSDK_OFFSET(0x1CBC77F0)
#define MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_SETPRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZER_OFFSET UNITYSDK_OFFSET(0x1CBC7770)

namespace MoleMole::BehaviorTreeDeserialization
{
	inline static constexpr unsigned int PrecompiledTypeDeserializationDatabaseInitialization_TypeDefinitionIndex = 93822;

	class PrecompiledTypeDeserializationDatabaseInitialization : public ::System::Object
	{
	public:
		static ::System::Void SetPrecompiledTypeDeserializationDatabaseInitializer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_SETPRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZER_OFFSET))();
		}

		static ::System::Void Method_1_9E86D16B476C4CAF(::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*& a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_METHOD_1_9E86D16B476C4CAF_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>* Method_1_A33108F24FD72EA4()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_METHOD_1_A33108F24FD72EA4_OFFSET))();
		}
	};
}
