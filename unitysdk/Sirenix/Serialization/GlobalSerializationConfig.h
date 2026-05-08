#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"
#include "unitysdk/Sirenix/Serialization/ErrorHandlingPolicy.h"
#include "unitysdk/Sirenix/Serialization/LoggingPolicy.h"
#include "unitysdk/Sirenix/Utilities/GlobalConfig_1.h"

namespace Sirenix::Serialization { class ILogger; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_BUILDSERIALIZATIONFORMAT_OFFSET UNITYSDK_OFFSET(0x1C5598E0)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_EDITORSERIALIZATIONFORMAT_OFFSET UNITYSDK_OFFSET(0x1C5598C0)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_ERRORHANDLINGPOLICY_OFFSET UNITYSDK_OFFSET(0x1C559920)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1C559860)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_LOGGINGPOLICY_OFFSET UNITYSDK_OFFSET(0x1C559900)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_ONINSPECTORGUI_OFFSET UNITYSDK_OFFSET(0x1C559940)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_SET_BUILDSERIALIZATIONFORMAT_OFFSET UNITYSDK_OFFSET(0x1C5598F0)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_SET_EDITORSERIALIZATIONFORMAT_OFFSET UNITYSDK_OFFSET(0x1C5598D0)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_SET_ERRORHANDLINGPOLICY_OFFSET UNITYSDK_OFFSET(0x1C559930)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_SET_LOGGINGPOLICY_OFFSET UNITYSDK_OFFSET(0x1C559910)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C559E00)
#define SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C559D90)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int GlobalSerializationConfig_TypeDefinitionIndex = 6497;

	class GlobalSerializationConfig : public ::Sirenix::Utilities::GlobalConfig_1<::Sirenix::Serialization::GlobalSerializationConfig*>
	{
	public:
		static ::Il2CppArray<::Sirenix::Serialization::DataFormat>** StaticGet_BuildFormats()
		{
			return (::Il2CppArray<::Sirenix::Serialization::DataFormat>**)Il2CppClass::FromTypeDefinitionIndex(GlobalSerializationConfig_TypeDefinitionIndex)->GetStaticField(0x5A50);
		}
		// static const ::System::String* ODIN_SERIALIZATION_CAUTIONARY_WARNING_TEXT; // 0x0
		// static const ::System::String* ODIN_PREFAB_CAUTIONARY_WARNING_TEXT; // 0x0
		// static const ::System::String* ODIN_SERIALIZATION_CAUTIONARY_WARNING_BUTTON_TEXT; // 0x0
		// static const ::System::String* ODIN_PREFAB_CAUTIONARY_WARNING_BUTTON_TEXT; // 0x0
		::System::Boolean HideSerializationCautionaryMessage; // 0x18
		::System::Boolean HidePrefabCautionaryMessage; // 0x19
		::System::Boolean HideOdinSerializeAttributeWarningMessages; // 0x1A
		::System::Boolean HideNonSerializedShowInInspectorWarningMessages; // 0x1B
		::Sirenix::Serialization::DataFormat buildSerializationFormat; // 0x1C
		::Sirenix::Serialization::DataFormat editorSerializationFormat; // 0x20
		::Sirenix::Serialization::LoggingPolicy loggingPolicy; // 0x24
		::Sirenix::Serialization::ErrorHandlingPolicy errorHandlingPolicy; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG__CCTOR_OFFSET))();
		}

		::Sirenix::Serialization::ILogger* get_Logger()
		{
			return ((::Sirenix::Serialization::ILogger*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_LOGGER_OFFSET))(this);
		}

		::Sirenix::Serialization::DataFormat get_EditorSerializationFormat()
		{
			return ((::Sirenix::Serialization::DataFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_EDITORSERIALIZATIONFORMAT_OFFSET))(this);
		}

		::System::Void set_EditorSerializationFormat(::Sirenix::Serialization::DataFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::DataFormat))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_SET_EDITORSERIALIZATIONFORMAT_OFFSET))(this, value);
		}

		::Sirenix::Serialization::DataFormat get_BuildSerializationFormat()
		{
			return ((::Sirenix::Serialization::DataFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_BUILDSERIALIZATIONFORMAT_OFFSET))(this);
		}

		::System::Void set_BuildSerializationFormat(::Sirenix::Serialization::DataFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::DataFormat))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_SET_BUILDSERIALIZATIONFORMAT_OFFSET))(this, value);
		}

		::Sirenix::Serialization::LoggingPolicy get_LoggingPolicy()
		{
			return ((::Sirenix::Serialization::LoggingPolicy(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_LOGGINGPOLICY_OFFSET))(this);
		}

		::System::Void set_LoggingPolicy(::Sirenix::Serialization::LoggingPolicy value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::LoggingPolicy))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_SET_LOGGINGPOLICY_OFFSET))(this, value);
		}

		::Sirenix::Serialization::ErrorHandlingPolicy get_ErrorHandlingPolicy()
		{
			return ((::Sirenix::Serialization::ErrorHandlingPolicy(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_GET_ERRORHANDLINGPOLICY_OFFSET))(this);
		}

		::System::Void set_ErrorHandlingPolicy(::Sirenix::Serialization::ErrorHandlingPolicy value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::ErrorHandlingPolicy))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_SET_ERRORHANDLINGPOLICY_OFFSET))(this, value);
		}

		::System::Void OnInspectorGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_GLOBALSERIALIZATIONCONFIG_ONINSPECTORGUI_OFFSET))(this);
		}
	};
}
