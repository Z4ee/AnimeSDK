#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/Logger_StateTreeLogInstanceMode.h"
#include "unitysdk/StateTreeCore/Logger_VerboseLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define STATETREECORE_LOGGER_CHECKINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1E592D00)
#define STATETREECORE_LOGGER_ERROR_1_OFFSET UNITYSDK_OFFSET(0x1E593190)
#define STATETREECORE_LOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x1E593100)
#define STATETREECORE_LOGGER_INFO_1_OFFSET UNITYSDK_OFFSET(0x1E592ED0)
#define STATETREECORE_LOGGER_INFO_OFFSET UNITYSDK_OFFSET(0x1E592E40)
#define STATETREECORE_LOGGER_SETSTATETREEINSTANCELOGMODE_OFFSET UNITYSDK_OFFSET(0x1E592C90)
#define STATETREECORE_LOGGER_VERBOSE_1_OFFSET UNITYSDK_OFFSET(0x1E592FB0)
#define STATETREECORE_LOGGER_VERBOSE_OFFSET UNITYSDK_OFFSET(0x1E592F30)
#define STATETREECORE_LOGGER_WARNING_1_OFFSET UNITYSDK_OFFSET(0x1E5930A0)
#define STATETREECORE_LOGGER_WARNING_OFFSET UNITYSDK_OFFSET(0x1E593010)
#define STATETREECORE_LOGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5931F0)

namespace StateTreeCore
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 30982;

	class Logger : public ::System::Object
	{
	public:
		static ::StateTreeCore::Logger_VerboseLevel* StaticGet_CurrentVerbosity()
		{
			return (::StateTreeCore::Logger_VerboseLevel*)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x7B50);
		}
		static ::System::Boolean* StaticGet_EnableStateTreeLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x7B54);
		}
		static ::System::Int32* StaticGet__stateTreeLogInstanceID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x7B58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetStateTreeInstanceLogMode(::StateTreeCore::Logger_StateTreeLogInstanceMode logMode, ::System::Int32 instanceID)
		{
			return ((::System::Void(*)(::StateTreeCore::Logger_StateTreeLogInstanceMode, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_SETSTATETREEINSTANCELOGMODE_OFFSET))(logMode, instanceID);
		}

		static ::System::Boolean CheckInstanceID(::System::Int32 instanceID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_CHECKINSTANCEID_OFFSET))(instanceID);
		}

		static ::System::Void Info(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_INFO_OFFSET))(msg);
		}

		static ::System::Void Info_1(::System::Int32 instanceID, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_INFO_1_OFFSET))(instanceID, msg);
		}

		static ::System::Void Verbose(::System::String* msg, ::System::Boolean veryVerbose)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_VERBOSE_OFFSET))(msg, veryVerbose);
		}

		static ::System::Void Verbose_1(::System::Int32 instanceID, ::System::String* msg, ::System::Boolean veryVerbose)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_VERBOSE_1_OFFSET))(instanceID, msg, veryVerbose);
		}

		static ::System::Void Warning(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_WARNING_OFFSET))(msg);
		}

		static ::System::Void Warning_1(::System::Int32 instanceID, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_WARNING_1_OFFSET))(instanceID, msg);
		}

		static ::System::Void Error(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_ERROR_OFFSET))(msg);
		}

		static ::System::Void Error_1(::System::Int32 instanceID, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STATETREECORE_LOGGER_ERROR_1_OFFSET))(instanceID, msg);
		}
	};
}
