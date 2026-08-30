#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimFireEffectAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_METHOD_4_22822F2C65719189_OFFSET UNITYSDK_OFFSET(0x1D114690)
#define RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_METHOD_4_7DDA3B0F74F8B9C6_OFFSET UNITYSDK_OFFSET(0x1D114650)
#define RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D114680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelFireEffectAction_TypeDefinitionIndex = 18583;

	class FourRotateVoxelFireEffectAction : public ::RPG::GameCore::FiveDimFireEffectAction
	{
	public:
		::System::Boolean IsAlwaysFaceToScreen; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7DDA3B0F74F8B9C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelFireEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelFireEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_METHOD_4_7DDA3B0F74F8B9C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22822F2C65719189(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelFireEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelFireEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_METHOD_4_22822F2C65719189_OFFSET))(a1, a2);
		}
	};
}
