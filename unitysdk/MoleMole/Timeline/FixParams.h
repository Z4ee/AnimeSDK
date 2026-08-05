#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_0868EF727040C390_1_OFFSET UNITYSDK_OFFSET(0x190BD8E0)
#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_0868EF727040C390_2_OFFSET UNITYSDK_OFFSET(0x190BDA40)
#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x190BD780)
#define MOLEMOLE_TIMELINE_FIXPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x190BD770)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FixParams_TypeDefinitionIndex = 74621;

	class FixParams : public ::System::Object
	{
	public:
		::System::Boolean FixShadowCoverageOutOfFrustume; // 0x10
		::System::Boolean fixShadowCoverageOutOfFrustume; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_0868EF727040C390()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_0868EF727040C390_OFFSET))(this);
		}

		::System::Void Method_1_0868EF727040C390_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_0868EF727040C390_1_OFFSET))(this);
		}

		::System::Void Method_1_0868EF727040C390_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_0868EF727040C390_2_OFFSET))(this);
		}
	};
}
