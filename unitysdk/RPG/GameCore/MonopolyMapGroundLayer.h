#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyMapBaseLayer.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_METHOD_3_4B4CD97E29F6148E_OFFSET UNITYSDK_OFFSET(0x1D1C7780)
#define RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_METHOD_3_672839ACB18C3BB0_OFFSET UNITYSDK_OFFSET(0x1D1C7180)
#define RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C7170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapGroundLayer_TypeDefinitionIndex = 16066;

	class MonopolyMapGroundLayer : public ::RPG::GameCore::MonopolyMapBaseLayer
	{
	public:
		::System::UInt32 ContentID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B4CD97E29F6148E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapGroundLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapGroundLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_METHOD_3_4B4CD97E29F6148E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_672839ACB18C3BB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyMapGroundLayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyMapGroundLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPGROUNDLAYER_METHOD_3_672839ACB18C3BB0_OFFSET))(a1, a2);
		}
	};
}
