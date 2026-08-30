#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SRF_SRFSTRINGEXTENSIONS_FMT_OFFSET UNITYSDK_OFFSET(0x1E6A87A0)

namespace SRF
{
	inline static constexpr unsigned int SRFStringExtensions_TypeDefinitionIndex = 34702;

	class SRFStringExtensions : public ::System::Object
	{
	public:
		static ::System::String* Fmt(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_SRFSTRINGEXTENSIONS_FMT_OFFSET))(a1, a2);
		}
	};
}
