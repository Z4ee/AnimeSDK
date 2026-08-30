#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2AD0C0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MovePair_TypeDefinitionIndex = 36031;

	class B2MovePair : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MovePair* next; // 0x10
		::System::Boolean heap; // 0x18
		::System::Int32 shapeIndexB; // 0x1C
		::System::Int32 shapeIndexA; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVEPAIR__CTOR_OFFSET))(this);
		}
	};
}
