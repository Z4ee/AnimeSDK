#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define MIHOYO_SDK_RC4EXTEND_GETBYTES_OFFSET UNITYSDK_OFFSET(0xB28F590)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Rc4Extend_TypeDefinitionIndex = 46939;

	class Rc4Extend : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* GetBytes(::System::String* a1, ::System::Text::Encoding* a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RC4EXTEND_GETBYTES_OFFSET))(a1, a2);
		}
	};
}
