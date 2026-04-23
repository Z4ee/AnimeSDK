#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExBeatSync_CbFunc; }

#define CRIWARE_CRIATOMEXBEATSYNC_ADD_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x12BDF650)
#define CRIWARE_CRIATOMEXBEATSYNC_REMOVE_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x12BDF660)
#define CRIWARE_CRIATOMEXBEATSYNC_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x12BDF670)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExBeatSync_TypeDefinitionIndex = 36745;

	class CriAtomExBeatSync : public ::System::Object
	{
	public:
		static ::System::Void add_OnCallback(::CriWare::CriAtomExBeatSync_CbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_ADD_ONCALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnCallback(::CriWare::CriAtomExBeatSync_CbFunc* value)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_REMOVE_ONCALLBACK_OFFSET))(value);
		}

		static ::System::Void SetCallback(::CriWare::CriAtomExBeatSync_CbFunc* func)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_SETCALLBACK_OFFSET))(func);
		}
	};
}
