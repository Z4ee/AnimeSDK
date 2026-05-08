#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/QTECameraBaseInfo.h"

#define MOLEMOLE_QTECAMERAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11DED250)

namespace MoleMole
{
	inline static constexpr unsigned int QTECameraInfo_TypeDefinitionIndex = 46427;

	class QTECameraInfo : public ::MoleMole::QTECameraBaseInfo
	{
	public:
		::System::Boolean MaxEndFrame; // 0x38
		::System::Boolean MaxStartFrame; // 0x39
		::System::Int32 StartFrame; // 0x3C
		::System::Int32 EndFrame; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO__CTOR_OFFSET))(this);
		}
	};
}
