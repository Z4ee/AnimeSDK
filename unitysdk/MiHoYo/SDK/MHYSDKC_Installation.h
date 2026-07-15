#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Installation_TypeDefinitionIndex = 44512;

	class MHYSDKC_Installation : public ::System::Object
	{
	public:
		// static const ::System::String* MOVE_APK; // 0x0
		// static const ::System::String* INSTALL_APK; // 0x0
		// static const ::System::String* DELETE_APK; // 0x0
	};
}
