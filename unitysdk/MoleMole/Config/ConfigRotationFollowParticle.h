#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1BD60FF0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE_SETUP_OFFSET UNITYSDK_OFFSET(0x1BD60F50)
#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD611E0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD611C0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x1BD61240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationFollowParticle_TypeDefinitionIndex = 87673;

	class ConfigRotationFollowParticle : public ::MoleMole::Config::ConfigRotation
	{
	public:
		static ::MoleMole::Config::ConfigRotationFollowParticle** StaticGet_StaticRotationFollowParticle()
		{
			return (::MoleMole::Config::ConfigRotationFollowParticle**)Il2CppClass::FromTypeDefinitionIndex(ConfigRotationFollowParticle_TypeDefinitionIndex)->GetStaticField(0x4A950);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE__CCTOR_OFFSET))();
		}

		::System::Void Setup(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& rotateState, ::MoleMole::Battle::Entity* caster, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE_SETUP_OFFSET))(this, movementComponent, other, rotateState, caster, instancedAbility);
		}

		::System::Void Process(::Class_3_C93CC3D2C2AC4067* characterModelComp, ::Class_3_248DACE3BB3053DD* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE_PROCESS_OFFSET))(this, characterModelComp, movementComponent, deltaTime);
		}

		::System::Void __base_Setup(::Class_3_248DACE3BB3053DD* P0, ::MoleMole::Battle::Entity* P1, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& P2, ::MoleMole::Battle::Entity* P3, ::Class_2_14986121AA61AD99* P4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONFOLLOWPARTICLE___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
