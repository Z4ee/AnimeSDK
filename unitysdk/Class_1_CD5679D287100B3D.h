#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41227C43B8705FA0.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_253;
class Class_1_CB7F0487F7A6164A;
class Class_1_E795C5D5DDF30620;
class Class_2_167BB37617B940E3;
class Class_3_DBF5783EF2C3816D;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CD5679D287100B3D_METHOD_1_3D8915149EE2CE27_OFFSET UNITYSDK_OFFSET(0x18FD4CE0)
#define CLASS_1_CD5679D287100B3D_METHOD_1_91A951C31CA2E659_OFFSET UNITYSDK_OFFSET(0x18FD39B0)
#define CLASS_1_CD5679D287100B3D_METHOD_1_C8CB91A6616CFCAD_OFFSET UNITYSDK_OFFSET(0x18FD4950)
#define CLASS_1_CD5679D287100B3D_METHOD_1_DF9D58A36152196F_OFFSET UNITYSDK_OFFSET(0x18FD5230)

inline static constexpr unsigned int Class_1_CD5679D287100B3D_TypeDefinitionIndex = 43602;

class Class_1_CD5679D287100B3D : public ::System::Object
{
public:
	static ::System::Void Method_1_91A951C31CA2E659(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD5679D287100B3D_METHOD_1_91A951C31CA2E659_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_253* Method_1_C8CB91A6616CFCAD(::Class_3_DBF5783EF2C3816D* a1, ::Class_1_CB7F0487F7A6164A* a2, ::MoleMole::Config::ConfigPosRot* a3)
	{
		return ((::Class_0_16E4307DCC419505_253*(*)(::Class_3_DBF5783EF2C3816D*, ::Class_1_CB7F0487F7A6164A*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_1_CD5679D287100B3D_METHOD_1_C8CB91A6616CFCAD_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::MonoConfigurableCollider* Method_1_3D8915149EE2CE27(::MoleMole::Battle::Entity* a1, ::Class_2_167BB37617B940E3* a2, ::Class_1_E795C5D5DDF30620* a3, ::UnityEngine::Transform* a4, ::Enum_3_41227C43B8705FA0 a5)
	{
		return ((::MoleMole::MonoConfigurableCollider*(*)(::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::Class_1_E795C5D5DDF30620*, ::UnityEngine::Transform*, ::Enum_3_41227C43B8705FA0))((::PBYTE)hIl2Cpp + CLASS_1_CD5679D287100B3D_METHOD_1_3D8915149EE2CE27_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_DF9D58A36152196F(::Class_3_DBF5783EF2C3816D* a1)
	{
		return ((::System::Void(*)(::Class_3_DBF5783EF2C3816D*))((::PBYTE)hIl2Cpp + CLASS_1_CD5679D287100B3D_METHOD_1_DF9D58A36152196F_OFFSET))(a1);
	}
};
