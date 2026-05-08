#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define DIGITALOPUS_MB_CORE_MB_TGAWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1AF88780)
#define DIGITALOPUS_MB_CORE_MB_TGAWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x1AF88690)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_TGAWriter_TypeDefinitionIndex = 85094;

	class MB_TGAWriter : public ::System::Object
	{
	public:
		static ::System::Void Write(::Il2CppArray<::UnityEngine::Color>* pixels, ::System::Int32 width, ::System::Int32 height, ::System::String* path)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Color>*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TGAWRITER_WRITE_OFFSET))(pixels, width, height, path);
		}

		static ::System::Void Write_1(::Il2CppArray<::UnityEngine::Color>* pixels, ::System::Int32 width, ::System::Int32 height, ::System::IO::Stream* output)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Color>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TGAWRITER_WRITE_1_OFFSET))(pixels, width, height, output);
		}
	};
}
