#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SRF_SRFSTRINGEXTENSIONS_FMT_OFFSET UNITYSDK_OFFSET(0x18466E00)

namespace SRF
{
	inline static constexpr unsigned int SRFStringExtensions_TypeDefinitionIndex = 27658;

	class SRFStringExtensions : public ::System::Object
	{
	public:
		static ::System::String* Fmt(::System::String* formatString, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_SRFSTRINGEXTENSIONS_FMT_OFFSET))(formatString, args);
		}
	};
}
