#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E18DD7D3DEDDD336.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
class Class_1_CB7F0487F7A6164A;
class Class_1_E795C5D5DDF30620;
class Class_2_14986121AA61AD99;
class Class_3_F0C8C4E9D0100466;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CD5679D287100B3D_METHOD_1_3D8915149EE2CE27_OFFSET UNITYSDK_OFFSET(0x145C4B90)
#define CLASS_1_CD5679D287100B3D_METHOD_1_B0DCF29309694C5D_OFFSET UNITYSDK_OFFSET(0x145C2D90)
#define CLASS_1_CD5679D287100B3D_METHOD_1_C8CB91A6616CFCAD_OFFSET UNITYSDK_OFFSET(0x145C4800)
#define CLASS_1_CD5679D287100B3D_METHOD_1_DF9D58A36152196F_OFFSET UNITYSDK_OFFSET(0x145C3C70)

inline static constexpr unsigned int Class_1_CD5679D287100B3D_TypeDefinitionIndex = 90140;

class Class_1_CD5679D287100B3D : public ::System::Object
{
public:
	static ::System::Void Method_1_B0DCF29309694C5D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD5679D287100B3D_METHOD_1_B0DCF29309694C5D_OFFSET))(a1);
	}

	static ::System::Void Method_1_DF9D58A36152196F(::Class_3_F0C8C4E9D0100466* a1)
	{
		return ((::System::Void(*)(::Class_3_F0C8C4E9D0100466*))((::PBYTE)hIl2Cpp + CLASS_1_CD5679D287100B3D_METHOD_1_DF9D58A36152196F_OFFSET))(a1);
	}

	static ::MoleMole::MonoConfigurableCollider* Method_1_3D8915149EE2CE27(::MoleMole::Battle::Entity* a1, ::Class_2_14986121AA61AD99* a2, ::Class_1_E795C5D5DDF30620* a3, ::UnityEngine::Transform* a4, ::Enum_3_E18DD7D3DEDDD336 a5)
	{
		return ((::MoleMole::MonoConfigurableCollider*(*)(::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::Class_1_E795C5D5DDF30620*, ::UnityEngine::Transform*, ::Enum_3_E18DD7D3DEDDD336))((::PBYTE)hIl2Cpp + CLASS_1_CD5679D287100B3D_METHOD_1_3D8915149EE2CE27_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_0_16E4307DCC419505_280* Method_1_C8CB91A6616CFCAD(::Class_3_F0C8C4E9D0100466* a1, ::Class_1_CB7F0487F7A6164A* a2, ::MoleMole::Config::ConfigPosRot* a3)
	{
		return ((::Class_0_16E4307DCC419505_280*(*)(::Class_3_F0C8C4E9D0100466*, ::Class_1_CB7F0487F7A6164A*, ::MoleMole::Config::ConfigPosRot*))((::PBYTE)hIl2Cpp + CLASS_1_CD5679D287100B3D_METHOD_1_C8CB91A6616CFCAD_OFFSET))(a1, a2, a3);
	}
};
