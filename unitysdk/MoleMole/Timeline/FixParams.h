#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_C638E91FC0D3A13A_1_OFFSET UNITYSDK_OFFSET(0x17DF6DD0)
#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_C638E91FC0D3A13A_2_OFFSET UNITYSDK_OFFSET(0x17DF6F30)
#define MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x17DF6C70)
#define MOLEMOLE_TIMELINE_FIXPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF6C60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FixParams_TypeDefinitionIndex = 62671;

	class FixParams : public ::System::Object
	{
	public:
		::System::Boolean FixShadowCoverageOutOfFrustume; // 0x10
		::System::Boolean fixShadowCoverageOutOfFrustume; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_1_C638E91FC0D3A13A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_C638E91FC0D3A13A_1_OFFSET))(this);
		}

		::System::Void Method_1_C638E91FC0D3A13A_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_METHOD_1_C638E91FC0D3A13A_2_OFFSET))(this);
		}
	};
}
