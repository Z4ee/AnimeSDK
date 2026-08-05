#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_2FE9803BD12F3AA0_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1416F6E0)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_0508563E26675EC4_OFFSET UNITYSDK_OFFSET(0x141715F0)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_169E48D0752099B7_OFFSET UNITYSDK_OFFSET(0x141701A0)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_24516B096911BF3E_OFFSET UNITYSDK_OFFSET(0x14171430)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_42B1858173354DB9_OFFSET UNITYSDK_OFFSET(0x1416FB60)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_720276D61C98B5C9_OFFSET UNITYSDK_OFFSET(0x14171050)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_9503FCA18E7DF0AE_OFFSET UNITYSDK_OFFSET(0x1416FF30)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_A5A4D6ECA4952E91_OFFSET UNITYSDK_OFFSET(0x141704F0)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_AAD237E957D9ECE7_OFFSET UNITYSDK_OFFSET(0x1416FC00)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_B87830109453658A_OFFSET UNITYSDK_OFFSET(0x14170FF0)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_BA4D8AC6C8F5E98C_OFFSET UNITYSDK_OFFSET(0x14170FA0)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14171680)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_D251354C268B73B6_OFFSET UNITYSDK_OFFSET(0x14171710)
#define CLASS_3_2FE9803BD12F3AA0_METHOD_3_E424FC307A0E8010_OFFSET UNITYSDK_OFFSET(0x14170F60)
#define CLASS_3_2FE9803BD12F3AA0__CTOR_OFFSET UNITYSDK_OFFSET(0x1416FB10)

inline static constexpr unsigned int Class_3_2FE9803BD12F3AA0_TypeDefinitionIndex = 67385;

class Class_3_2FE9803BD12F3AA0 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_42B1858173354DB9(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_42B1858173354DB9_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_AAD237E957D9ECE7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_AAD237E957D9ECE7_OFFSET))(a1);
	}

	static ::System::Void Method_3_9503FCA18E7DF0AE(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_9503FCA18E7DF0AE_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_169E48D0752099B7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_169E48D0752099B7_OFFSET))(a1);
	}

	static ::System::Void Method_3_A5A4D6ECA4952E91(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_A5A4D6ECA4952E91_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_E424FC307A0E8010(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_E424FC307A0E8010_OFFSET))(a1);
	}

	::System::Void Method_3_BA4D8AC6C8F5E98C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_BA4D8AC6C8F5E98C_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B87830109453658A(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_B87830109453658A_OFFSET))(a1);
	}

	::System::Void Method_3_720276D61C98B5C9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_720276D61C98B5C9_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_24516B096911BF3E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_24516B096911BF3E_OFFSET))(a1);
	}

	static ::System::Void Method_3_0508563E26675EC4(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_0508563E26675EC4_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_D251354C268B73B6(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_METHOD_3_D251354C268B73B6_OFFSET))(a1, a2);
	}
};
