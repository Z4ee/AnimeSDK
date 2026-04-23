#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcbDebug_AcbInfo.h"
#include "unitysdk/CriWare/CriAtomExAcbDebug_AcbInfoForMarshaling.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExAcb; }

#define CRIWARE_CRIATOMEXACBDEBUG_CRIATOMEXACB_GETACBINFO_OFFSET UNITYSDK_OFFSET(0x12BD4570)
#define CRIWARE_CRIATOMEXACBDEBUG_GETACBINFO_OFFSET UNITYSDK_OFFSET(0x12BD4480)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbDebug_TypeDefinitionIndex = 36929;

	class CriAtomExAcbDebug : public ::System::Object
	{
	public:
		static ::System::Boolean GetAcbInfo(::CriWare::CriAtomExAcb* acb, ::CriWare::CriAtomExAcbDebug_AcbInfo& acbInfo)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcb*, ::CriWare::CriAtomExAcbDebug_AcbInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBDEBUG_GETACBINFO_OFFSET))(acb, acbInfo);
		}

		static ::System::Int32 criAtomExAcb_GetAcbInfo(::System::IntPtr acbHn, ::CriWare::CriAtomExAcbDebug_AcbInfoForMarshaling& acbInfo)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriAtomExAcbDebug_AcbInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBDEBUG_CRIATOMEXACB_GETACBINFO_OFFSET))(acbHn, acbInfo);
		}
	};
}
