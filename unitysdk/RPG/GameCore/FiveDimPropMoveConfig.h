#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_METHOD_2_44799DD6C3ABA574_OFFSET UNITYSDK_OFFSET(0x1D873A50)
#define RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_METHOD_2_87F909D4BFB039B5_OFFSET UNITYSDK_OFFSET(0x1D8747A0)
#define RPG_GAMECORE_FIVEDIMPROPMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85A690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropMoveConfig_TypeDefinitionIndex = 16511;

	class FiveDimPropMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* PhysicsPrefab; // 0x18
		::System::Single ColliderSizeX; // 0x20
		::System::Single ColliderSizeY; // 0x24
		::System::Single MaxSpeed; // 0x28
		::System::Single RotationDamping; // 0x2C
		::System::Single DestroyDitherDuration; // 0x30
		::Il2CppArray<::RPG::GameCore::FiveDimPropBakedMoveConfig*>* BakedConfigs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_44799DD6C3ABA574(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_METHOD_2_44799DD6C3ABA574_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_87F909D4BFB039B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPMOVECONFIG_METHOD_2_87F909D4BFB039B5_OFFSET))(a1, a2);
		}
	};
}
