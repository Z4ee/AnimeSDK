#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class ILogger; }

#define SIRENIX_SERIALIZATION_DEFAULTLOGGERS_GET_DEFAULTLOGGER_OFFSET UNITYSDK_OFFSET(0x1E8897B0)
#define SIRENIX_SERIALIZATION_DEFAULTLOGGERS_GET_UNITYLOGGER_OFFSET UNITYSDK_OFFSET(0x1E889810)
#define SIRENIX_SERIALIZATION_DEFAULTLOGGERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E889AA0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DefaultLoggers_TypeDefinitionIndex = 6539;

	class DefaultLoggers : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::ILogger** StaticGet_unityLogger()
		{
			return (::Sirenix::Serialization::ILogger**)Il2CppClass::FromTypeDefinitionIndex(DefaultLoggers_TypeDefinitionIndex)->GetStaticField(0x5A90);
		}
		static ::System::Object** StaticGet_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultLoggers_TypeDefinitionIndex)->GetStaticField(0x5A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTLOGGERS__CCTOR_OFFSET))();
		}

		static ::Sirenix::Serialization::ILogger* get_DefaultLogger()
		{
			return ((::Sirenix::Serialization::ILogger*(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTLOGGERS_GET_DEFAULTLOGGER_OFFSET))();
		}

		static ::Sirenix::Serialization::ILogger* get_UnityLogger()
		{
			return ((::Sirenix::Serialization::ILogger*(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEFAULTLOGGERS_GET_UNITYLOGGER_OFFSET))();
		}
	};
}
