#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_AccountInfo_TypeDefinitionIndex = 44464;

	class MHYSDKC_AccountInfo : public ::System::Object
	{
	public:
		// static const ::System::String* UID; // 0x0
		// static const ::System::String* TOKEN; // 0x0
		// static const ::System::String* ACCOUNT; // 0x0
		// static const ::System::String* PASSWORD; // 0x0
	};
}
