#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PillarPuzzle/PillarPuzzleBoard.h"

#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDALLHIT_INITPILLARPROPS_OFFSET UNITYSDK_OFFSET(0xAE91AA0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDALLHIT_ONPILLARHIT_OFFSET UNITYSDK_OFFSET(0xAE91C20)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDALLHIT__CTOR_OFFSET UNITYSDK_OFFSET(0xAE91D60)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDALLHIT___IFIXBASEPROXY_INITPILLARPROPS_OFFSET UNITYSDK_OFFSET(0xAE91F00)

namespace RPG::Client::Prop::PillarPuzzle
{
	inline static constexpr unsigned int PillarPuzzleBoardAllHit_TypeDefinitionIndex = 72462;

	class PillarPuzzleBoardAllHit : public ::RPG::Client::Prop::PillarPuzzle::PillarPuzzleBoard
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDALLHIT__CTOR_OFFSET))(this);
		}

		::System::Boolean InitPillarProps()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDALLHIT_INITPILLARPROPS_OFFSET))(this);
		}

		::System::Void OnPillarHit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDALLHIT_ONPILLARHIT_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_InitPillarProps()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDALLHIT___IFIXBASEPROXY_INITPILLARPROPS_OFFSET))(this);
		}
	};
}
