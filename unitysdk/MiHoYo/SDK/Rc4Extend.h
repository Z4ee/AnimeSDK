#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class Encoding; }

#define MIHOYO_SDK_RC4EXTEND_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1A504E90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Rc4Extend_TypeDefinitionIndex = 35302;

	class Rc4Extend : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* GetBytes(::System::String* str, ::System::Text::Encoding* en)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RC4EXTEND_GETBYTES_OFFSET))(str, en);
		}
	};
}
