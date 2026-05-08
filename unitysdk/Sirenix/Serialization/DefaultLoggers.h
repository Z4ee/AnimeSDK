#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class ILogger; }

#define SIRENIX_SERIALIZATION_DEFAULTLOGGERS_GET_DEFAULTLOGGER_OFFSET UNITYSDK_OFFSET(0x1C559540)
#define SIRENIX_SERIALIZATION_DEFAULTLOGGERS_GET_UNITYLOGGER_OFFSET UNITYSDK_OFFSET(0x1C5595A0)
#define SIRENIX_SERIALIZATION_DEFAULTLOGGERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C559830)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DefaultLoggers_TypeDefinitionIndex = 6495;

	class DefaultLoggers : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::ILogger** StaticGet_unityLogger()
		{
			return (::Sirenix::Serialization::ILogger**)Il2CppClass::FromTypeDefinitionIndex(DefaultLoggers_TypeDefinitionIndex)->GetStaticField(0x5A40);
		}
		static ::System::Object** StaticGet_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DefaultLoggers_TypeDefinitionIndex)->GetStaticField(0x5A48);
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
