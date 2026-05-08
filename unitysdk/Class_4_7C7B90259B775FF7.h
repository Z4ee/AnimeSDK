#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9524C68D713A7E40.h"
#include "unitysdk/Enum_3_60B60884B6778625.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_EA1FEF8121ADE963;
class Class_2_604B5548310BA4BE;
class Class_2_C9E71E68DA068632_1;
class Class_3_F25445702F7D8455;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_4_7C7B90259B775FF7_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFABB2B0)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_06136970C1C25108_OFFSET UNITYSDK_OFFSET(0xFABC8B0)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_0D5E1D6B20EA2168_OFFSET UNITYSDK_OFFSET(0xFABD080)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_31226F30FB8B7CBF_OFFSET UNITYSDK_OFFSET(0xFABB640)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_42D0F605EDCC4ED7_OFFSET UNITYSDK_OFFSET(0xFABB8C0)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_4A3C495AD32201C5_OFFSET UNITYSDK_OFFSET(0xFABBED0)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_68131D32DAC80789_OFFSET UNITYSDK_OFFSET(0xFABD240)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_6A8BC08449E36907_OFFSET UNITYSDK_OFFSET(0xFABD090)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_8F4C8C8FDB42A9C5_OFFSET UNITYSDK_OFFSET(0xFABCB80)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0xFABCB30)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xFABD1B0)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_CBCD6BD30C4DB2B1_OFFSET UNITYSDK_OFFSET(0xFABB540)
#define CLASS_4_7C7B90259B775FF7_METHOD_4_FB93391243286502_OFFSET UNITYSDK_OFFSET(0xFABC3C0)
#define CLASS_4_7C7B90259B775FF7__CTOR_OFFSET UNITYSDK_OFFSET(0xFABB4F0)

inline static constexpr unsigned int Class_4_7C7B90259B775FF7_TypeDefinitionIndex = 74960;

class Class_4_7C7B90259B775FF7 : public ::Class_3_9524C68D713A7E40
{
public:
	static ::Class_4_7C7B90259B775FF7** StaticGet_Field_4_0()
	{
		return (::Class_4_7C7B90259B775FF7**)Il2CppClass::FromTypeDefinitionIndex(Class_4_7C7B90259B775FF7_TypeDefinitionIndex)->GetStaticField(0x3BB70);
	}
	::Nap::NapECS::EcsFilter* Field_4_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_4_CBCD6BD30C4DB2B1(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::Enum_3_60B60884B6778625 a3, ::System::Single a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::Enum_3_60B60884B6778625, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_CBCD6BD30C4DB2B1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_4_42D0F605EDCC4ED7(::Class_2_C9E71E68DA068632_1* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9E71E68DA068632_1*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_42D0F605EDCC4ED7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_4A3C495AD32201C5(::Class_3_F25445702F7D8455* a1, ::Class_2_C9E71E68DA068632_1* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F25445702F7D8455*, ::Class_2_C9E71E68DA068632_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_4A3C495AD32201C5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_06136970C1C25108(::Class_3_F25445702F7D8455* a1, ::Class_1_EA1FEF8121ADE963* a2, ::MoleMole::Config::ConfigHitEffect* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F25445702F7D8455*, ::Class_1_EA1FEF8121ADE963*, ::MoleMole::Config::ConfigHitEffect*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_06136970C1C25108_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_A11144519902A27F_OFFSET))(this, a1);
	}

	::System::Void Method_4_8F4C8C8FDB42A9C5(::MoleMole::Battle::Entity* a1, ::Class_2_604B5548310BA4BE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_604B5548310BA4BE*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_8F4C8C8FDB42A9C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_0D5E1D6B20EA2168(::Class_3_F25445702F7D8455* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F25445702F7D8455*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_0D5E1D6B20EA2168_OFFSET))(this, a1);
	}

	::System::Void Method_4_6A8BC08449E36907(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_6A8BC08449E36907_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_FB93391243286502(::Class_2_C9E71E68DA068632_1* a1, ::Class_3_F25445702F7D8455* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C9E71E68DA068632_1*, ::Class_3_F25445702F7D8455*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_FB93391243286502_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_31226F30FB8B7CBF(::Class_3_F25445702F7D8455* a1, ::Enum_3_60B60884B6778625 a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F25445702F7D8455*, ::Enum_3_60B60884B6778625, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_31226F30FB8B7CBF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_4_68131D32DAC80789(::Class_3_F25445702F7D8455* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F25445702F7D8455*))((::PBYTE)hIl2Cpp + CLASS_4_7C7B90259B775FF7_METHOD_4_68131D32DAC80789_OFFSET))(this, a1);
	}
};
