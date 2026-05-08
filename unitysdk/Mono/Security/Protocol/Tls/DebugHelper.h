#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C4B0800)
#define MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITEBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1C4B0860)
#define MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4B0850)
#define MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x1C4B0830)
#define MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x1C4B0840)
#define MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1C4B0820)
#define MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B09A0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int DebugHelper_TypeDefinitionIndex = 2357;

	class DebugHelper : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DebugHelper_TypeDefinitionIndex)->GetStaticField(0xF70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_INITIALIZE_OFFSET))();
		}

		static ::System::Void WriteLine(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITELINE_OFFSET))(format, args);
		}

		static ::System::Void WriteLine_1(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITELINE_1_OFFSET))(message);
		}

		static ::System::Void WriteLine_2(::System::String* message, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITELINE_2_OFFSET))(message, buffer);
		}

		static ::System::Void WriteBuffer(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITEBUFFER_OFFSET))(buffer);
		}

		static ::System::Void WriteBuffer_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_DEBUGHELPER_WRITEBUFFER_1_OFFSET))(buffer, index, length);
		}
	};
}
