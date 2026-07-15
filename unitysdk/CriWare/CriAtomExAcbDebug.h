#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcbDebug_AcbInfo.h"
#include "unitysdk/CriWare/CriAtomExAcbDebug_AcbInfoForMarshaling.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomExAcb; }

#define CRIWARE_CRIATOMEXACBDEBUG_CRIATOMEXACB_GETACBINFO_OFFSET UNITYSDK_OFFSET(0x1AEF3BC0)
#define CRIWARE_CRIATOMEXACBDEBUG_GETACBINFO_OFFSET UNITYSDK_OFFSET(0x1AEF3B30)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbDebug_TypeDefinitionIndex = 38035;

	class CriAtomExAcbDebug : public ::System::Object
	{
	public:
		static ::System::Boolean GetAcbInfo(::CriWare::CriAtomExAcb* a1, ::CriWare::CriAtomExAcbDebug_AcbInfo& a2)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcb*, ::CriWare::CriAtomExAcbDebug_AcbInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBDEBUG_GETACBINFO_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcb_GetAcbInfo(::System::IntPtr a1, ::CriWare::CriAtomExAcbDebug_AcbInfoForMarshaling& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriAtomExAcbDebug_AcbInfoForMarshaling&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBDEBUG_CRIATOMEXACB_GETACBINFO_OFFSET))(a1, a2);
		}
	};
}
