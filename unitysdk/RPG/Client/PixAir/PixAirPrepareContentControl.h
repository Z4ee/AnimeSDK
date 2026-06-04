#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

#define RPG_CLIENT_PIXAIR_PIXAIRPREPARECONTENTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E66B0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPrepareContentControl_TypeDefinitionIndex = 73558;

	class PixAirPrepareContentControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPREPARECONTENTCONTROL__CTOR_OFFSET))(this);
		}
	};
}
