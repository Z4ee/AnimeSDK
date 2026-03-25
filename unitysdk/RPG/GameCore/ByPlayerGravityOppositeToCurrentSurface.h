#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_49E737891EF71207_OFFSET UNITYSDK_OFFSET(0x17038C50)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_5790C917C115380D_OFFSET UNITYSDK_OFFSET(0x17038D20)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x17038CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPlayerGravityOppositeToCurrentSurface_TypeDefinitionIndex = 19640;

	class ByPlayerGravityOppositeToCurrentSurface : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_49E737891EF71207(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_49E737891EF71207_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5790C917C115380D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_METHOD_4_5790C917C115380D_OFFSET))(a1, a2);
		}
	};
}
