#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG_SETPRECOMPILEDTYPEDESERIALIZATIONENABLED_OFFSET UNITYSDK_OFFSET(0x1C2A8B00)
#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2A8B40)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int PrecompiledTypeDeserializationConfig_TypeDefinitionIndex = 31706;

	class PrecompiledTypeDeserializationConfig : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Enabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PrecompiledTypeDeserializationConfig_TypeDefinitionIndex)->GetStaticField(0x7D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void SetPrecompiledTypeDeserializationEnabled()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZATIONCONFIG_SETPRECOMPILEDTYPEDESERIALIZATIONENABLED_OFFSET))();
		}
	};
}
