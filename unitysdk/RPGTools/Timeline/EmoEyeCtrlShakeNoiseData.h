#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_METHOD_1_9E9BA2E1C4AD5533_OFFSET UNITYSDK_OFFSET(0xB8C3BE0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8C3880)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_METHOD_1_EADB2ABA0DC53DB5_OFFSET UNITYSDK_OFFSET(0xB8C3570)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C3D50)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeCtrlShakeNoiseData_TypeDefinitionIndex = 44846;

	class EmoEyeCtrlShakeNoiseData : public ::System::Object
	{
	public:
		::System::Boolean EnableNoise; // 0x10
		::System::Single Amplitude; // 0x14
		::System::Single Circle; // 0x18
		::System::Single PerlinSample; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EADB2ABA0DC53DB5(::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData*, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_METHOD_1_EADB2ABA0DC53DB5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_9E9BA2E1C4AD5533(::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_METHOD_1_9E9BA2E1C4AD5533_OFFSET))(this, a1);
		}
	};
}
