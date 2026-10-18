#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimFireEffectAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_METHOD_5_6189478E6C807748_OFFSET UNITYSDK_OFFSET(0x1D6C07A0)
#define RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_METHOD_5_EC6DC8C8339C118D_OFFSET UNITYSDK_OFFSET(0x1D6C07E0)
#define RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C07D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelFireEffectAction_TypeDefinitionIndex = 18793;

	class FourRotateVoxelFireEffectAction : public ::RPG::GameCore::FiveDimFireEffectAction
	{
	public:
		::System::Boolean IsAlwaysFaceToScreen; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6189478E6C807748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelFireEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelFireEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_METHOD_5_6189478E6C807748_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EC6DC8C8339C118D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelFireEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelFireEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFIREEFFECTACTION_METHOD_5_EC6DC8C8339C118D_OFFSET))(a1, a2);
		}
	};
}
