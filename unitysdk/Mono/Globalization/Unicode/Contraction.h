#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_GLOBALIZATION_UNICODE_CONTRACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E2C90)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int Contraction_TypeDefinitionIndex = 35;

	class Contraction : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* Source; // 0x10
		::Il2CppArray<::System::Byte>* SortKey; // 0x18
		::System::String* Replacement; // 0x20
		::System::Int32 Index; // 0x28

		::System::Void _ctor(::System::Int32 index, ::Il2CppArray<::System::Char>* source, ::System::String* replacement, ::Il2CppArray<::System::Byte>* sortkey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTION__CTOR_OFFSET))(this, index, source, replacement, sortkey);
		}
	};
}
