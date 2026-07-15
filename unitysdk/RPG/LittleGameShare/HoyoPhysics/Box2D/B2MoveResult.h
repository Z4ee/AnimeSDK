#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2MovePair; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB654BC0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MoveResult_TypeDefinitionIndex = 35171;

	class B2MoveResult : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MovePair* pairList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVERESULT__CTOR_OFFSET))(this);
		}
	};
}
