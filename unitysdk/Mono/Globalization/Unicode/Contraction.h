#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_GLOBALIZATION_UNICODE_CONTRACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16DE08B0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int Contraction_TypeDefinitionIndex = 32;

	class Contraction : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* SortKey; // 0x10
		::Il2CppArray<::System::Char>* Source; // 0x18
		::System::String* Replacement; // 0x20
		::System::Int32 Index; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Char>* a2, ::System::String* a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_CONTRACTION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
