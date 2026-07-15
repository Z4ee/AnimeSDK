#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_GameService_TypeDefinitionIndex = 44483;

	class MHYSDKC_GameService : public ::System::Object
	{
	public:
		// static const ::System::String* UNLOCK_ACHIEVEMENT; // 0x0
		// static const ::System::String* INCREMENT_ACHIEVEMENT; // 0x0
		// static const ::System::String* GET_ACHIEVEMENTS; // 0x0
	};
}
