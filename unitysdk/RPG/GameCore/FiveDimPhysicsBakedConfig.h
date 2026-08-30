#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPHYSICSBAKEDCONFIG_METHOD_2_9AB856C646928E60_OFFSET UNITYSDK_OFFSET(0x1D86A970)
#define RPG_GAMECORE_FIVEDIMPHYSICSBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86FEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPhysicsBakedConfig_TypeDefinitionIndex = 16475;

	class FiveDimPhysicsBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CapsuleRadius; // 0x10
		::System::Single CapsuleHeight; // 0x14
		::System::Single CapsuleCrouchHeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPHYSICSBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9AB856C646928E60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPhysicsBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPhysicsBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPHYSICSBAKEDCONFIG_METHOD_2_9AB856C646928E60_OFFSET))(a1, a2);
		}
	};
}
