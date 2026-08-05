#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_CAMERAOFFSETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x175798B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerConfigMono_CameraOffsetInfo_TypeDefinitionIndex = 55980;

	class UIQuestionsAnswerConfigMono_CameraOffsetInfo : public ::System::Object
	{
	public:
		::System::Int32 NpcTag; // 0x10
		::System::Single OffsetAngle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCONFIGMONO_CAMERAOFFSETINFO__CTOR_OFFSET))(this);
		}
	};
}
