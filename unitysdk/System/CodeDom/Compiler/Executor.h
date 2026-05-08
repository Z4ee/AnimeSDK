#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::CodeDom::Compiler { class TempFileCollection; }

#define SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAITWITHCAPTURE_1_OFFSET UNITYSDK_OFFSET(0x19201A10)
#define SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAITWITHCAPTURE_2_OFFSET UNITYSDK_OFFSET(0x19201A50)
#define SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAITWITHCAPTURE_3_OFFSET UNITYSDK_OFFSET(0x19201A90)
#define SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAITWITHCAPTURE_OFFSET UNITYSDK_OFFSET(0x192019D0)
#define SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAIT_OFFSET UNITYSDK_OFFSET(0x19201990)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int Executor_TypeDefinitionIndex = 4292;

	class Executor : public ::System::Object
	{
	public:
		static ::System::Void ExecWait(::System::String* cmd, ::System::CodeDom::Compiler::TempFileCollection* tempFiles)
		{
			return ((::System::Void(*)(::System::String*, ::System::CodeDom::Compiler::TempFileCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAIT_OFFSET))(cmd, tempFiles);
		}

		static ::System::Int32 ExecWaitWithCapture(::System::IntPtr userToken, ::System::String* cmd, ::System::CodeDom::Compiler::TempFileCollection* tempFiles, ::System::String*& outputName, ::System::String*& errorName)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::CodeDom::Compiler::TempFileCollection*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAITWITHCAPTURE_OFFSET))(userToken, cmd, tempFiles, outputName, errorName);
		}

		static ::System::Int32 ExecWaitWithCapture_1(::System::IntPtr userToken, ::System::String* cmd, ::System::String* currentDir, ::System::CodeDom::Compiler::TempFileCollection* tempFiles, ::System::String*& outputName, ::System::String*& errorName)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::CodeDom::Compiler::TempFileCollection*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAITWITHCAPTURE_1_OFFSET))(userToken, cmd, currentDir, tempFiles, outputName, errorName);
		}

		static ::System::Int32 ExecWaitWithCapture_2(::System::String* cmd, ::System::CodeDom::Compiler::TempFileCollection* tempFiles, ::System::String*& outputName, ::System::String*& errorName)
		{
			return ((::System::Int32(*)(::System::String*, ::System::CodeDom::Compiler::TempFileCollection*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAITWITHCAPTURE_2_OFFSET))(cmd, tempFiles, outputName, errorName);
		}

		static ::System::Int32 ExecWaitWithCapture_3(::System::String* cmd, ::System::String* currentDir, ::System::CodeDom::Compiler::TempFileCollection* tempFiles, ::System::String*& outputName, ::System::String*& errorName)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::CodeDom::Compiler::TempFileCollection*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_EXECUTOR_EXECWAITWITHCAPTURE_3_OFFSET))(cmd, currentDir, tempFiles, outputName, errorName);
		}
	};
}
