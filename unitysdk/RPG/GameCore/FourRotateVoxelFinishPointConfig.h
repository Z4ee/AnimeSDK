#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_METHOD_3_A0677714A1F91588_OFFSET UNITYSDK_OFFSET(0x1721B520)
#define RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_METHOD_3_B792DCD4C8ADDA5F_OFFSET UNITYSDK_OFFSET(0x1721B4B0)
#define RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1721B500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelFinishPointConfig_TypeDefinitionIndex = 15359;

	class FourRotateVoxelFinishPointConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsFinishPoint; // 0x10
		::RPG::GameCore::PropButtonConfig* BeforeFinishInteractButtonConfig; // 0x18
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x20
		::System::Int32 AnimMatIndex; // 0x28
		::RPG::GameCore::LittleGameEvent* OnGameStart; // 0x30
		::RPG::GameCore::LittleGameEvent* OnAll2DBrickUpgrade; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B792DCD4C8ADDA5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_METHOD_3_B792DCD4C8ADDA5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A0677714A1F91588(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelFinishPointConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelFinishPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFINISHPOINTCONFIG_METHOD_3_A0677714A1F91588_OFFSET))(a1, a2);
		}
	};
}
