#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_GET_INS_OFFSET UNITYSDK_OFFSET(0x1B502C80)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_PROCESS_OFFSET UNITYSDK_OFFSET(0x1B502DD0)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_SETUP_OFFSET UNITYSDK_OFFSET(0x1B502D10)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B502E70)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B502C60)
#define MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x1B502E80)

namespace MoleMole::DynamicMoveConfig
{
	inline static constexpr unsigned int ConfigRotationDynamicProxy_TypeDefinitionIndex = 78888;

	class ConfigRotationDynamicProxy : public ::MoleMole::Config::ConfigRotation
	{
	public:
		static ::MoleMole::DynamicMoveConfig::ConfigRotationDynamicProxy** StaticGet__ins()
		{
			return (::MoleMole::DynamicMoveConfig::ConfigRotationDynamicProxy**)Il2CppClass::FromTypeDefinitionIndex(ConfigRotationDynamicProxy_TypeDefinitionIndex)->GetStaticField(0x4E8C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY__CCTOR_OFFSET))();
		}

		static ::MoleMole::DynamicMoveConfig::ConfigRotationDynamicProxy* get_Ins()
		{
			return ((::MoleMole::DynamicMoveConfig::ConfigRotationDynamicProxy*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_GET_INS_OFFSET))();
		}

		::System::Void Setup(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& rotateState, ::MoleMole::Battle::Entity* caster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_SETUP_OFFSET))(this, movementComponent, other, rotateState, caster, instancedAbility);
		}

		::System::Void Process(::Class_3_C93CC3D2C2AC4067* modelComponent, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY_PROCESS_OFFSET))(this, modelComponent, movementComponent, deltaTime);
		}

		::System::Void __base_Setup(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& P2, ::MoleMole::Battle::Entity* P3, ::Class_2_14986121AA61AD99* P4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICMOVECONFIG_CONFIGROTATIONDYNAMICPROXY___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
