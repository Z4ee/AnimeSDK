#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/Nap/NapECS/EcsEntity.h"

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x13844820)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntity_TypeDefinitionIndex = 53242;

	class HollowEntity : public ::Nap::NapECS::EcsEntity
	{
	public:
		::Nap::NapECS::ComponentMask TickComponentMask; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITY__CTOR_OFFSET))(this);
		}
	};
}
