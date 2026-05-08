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

#define CLASS_3_81169F718F8970FA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11AB7BD0)
#define CLASS_3_81169F718F8970FA_METHOD_3_169E48D0752099B7_OFFSET UNITYSDK_OFFSET(0x11AB94C0)
#define CLASS_3_81169F718F8970FA_METHOD_3_24516B096911BF3E_OFFSET UNITYSDK_OFFSET(0x11AB8420)
#define CLASS_3_81169F718F8970FA_METHOD_3_388F7AC45B18BAF4_OFFSET UNITYSDK_OFFSET(0x11AB85E0)
#define CLASS_3_81169F718F8970FA_METHOD_3_42B1858173354DB9_OFFSET UNITYSDK_OFFSET(0x11AB9B80)
#define CLASS_3_81169F718F8970FA_METHOD_3_6DD1BE228613C999_OFFSET UNITYSDK_OFFSET(0x11AB9130)
#define CLASS_3_81169F718F8970FA_METHOD_3_9503FCA18E7DF0AE_OFFSET UNITYSDK_OFFSET(0x11AB9210)
#define CLASS_3_81169F718F8970FA_METHOD_3_AAD237E957D9ECE7_OFFSET UNITYSDK_OFFSET(0x11AB9870)
#define CLASS_3_81169F718F8970FA_METHOD_3_BA4D8AC6C8F5E98C_OFFSET UNITYSDK_OFFSET(0x11AB91C0)
#define CLASS_3_81169F718F8970FA_METHOD_3_BA56E526A4900D7D_OFFSET UNITYSDK_OFFSET(0x11AB9810)
#define CLASS_3_81169F718F8970FA_METHOD_3_BA6B983DA856A984_OFFSET UNITYSDK_OFFSET(0x11AB8040)
#define CLASS_3_81169F718F8970FA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x11AB9030)
#define CLASS_3_81169F718F8970FA_METHOD_3_D251354C268B73B6_OFFSET UNITYSDK_OFFSET(0x11AB90C0)
#define CLASS_3_81169F718F8970FA_METHOD_3_E424FC307A0E8010_OFFSET UNITYSDK_OFFSET(0x11AB9480)
#define CLASS_3_81169F718F8970FA__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB7FF0)

inline static constexpr unsigned int Class_3_81169F718F8970FA_TypeDefinitionIndex = 50152;

class Class_3_81169F718F8970FA : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BA6B983DA856A984(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_BA6B983DA856A984_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_388F7AC45B18BAF4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_388F7AC45B18BAF4_OFFSET))(a1);
	}

	static ::System::Void Method_3_D251354C268B73B6(::Class_3_F97B015544BE936B* a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_D251354C268B73B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6DD1BE228613C999(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_6DD1BE228613C999_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BA4D8AC6C8F5E98C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_BA4D8AC6C8F5E98C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_E424FC307A0E8010(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_E424FC307A0E8010_OFFSET))(a1);
	}

	static ::System::Void Method_3_BA56E526A4900D7D(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_BA56E526A4900D7D_OFFSET))(a1);
	}

	static ::System::Void Method_3_AAD237E957D9ECE7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_AAD237E957D9ECE7_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_169E48D0752099B7(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_169E48D0752099B7_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_24516B096911BF3E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_24516B096911BF3E_OFFSET))(a1);
	}

	::System::Void Method_3_42B1858173354DB9(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_42B1858173354DB9_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_9503FCA18E7DF0AE(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_METHOD_3_9503FCA18E7DF0AE_OFFSET))(a1);
	}
};
