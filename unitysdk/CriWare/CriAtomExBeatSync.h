#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExBeatSync_CbFunc; }

#define CRIWARE_CRIATOMEXBEATSYNC_ADD_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1469CFB0)
#define CRIWARE_CRIATOMEXBEATSYNC_REMOVE_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1469CFC0)
#define CRIWARE_CRIATOMEXBEATSYNC_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1469CFD0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExBeatSync_TypeDefinitionIndex = 37045;

	class CriAtomExBeatSync : public ::System::Object
	{
	public:
		static ::System::Void add_OnCallback(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_ADD_ONCALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove_OnCallback(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_REMOVE_ONCALLBACK_OFFSET))(a1);
		}

		static ::System::Void SetCallback(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXBEATSYNC_SETCALLBACK_OFFSET))(a1);
		}
	};
}
