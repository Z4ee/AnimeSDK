#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolInternalType_TypeDefinitionIndex = 7550;

	class ProtocolInternalType : public ::System::Object
	{
	public:
		// static const ::System::String* USER_AGREEMENT; // 0x0
		// static const ::System::String* PRIVACY; // 0x0
		// static const ::System::String* TEENAGER_PRIVACY; // 0x0
		// static const ::System::String* THIRD_PRIVACY; // 0x0
	};
}
