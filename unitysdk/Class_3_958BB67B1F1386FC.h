#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_958BB67B1F1386FC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x145042A0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_25F3139CC6B2877A_OFFSET UNITYSDK_OFFSET(0x14504E00)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_42D59398E65EF6BC_OFFSET UNITYSDK_OFFSET(0x14504A00)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_5FB8340547BA285B_OFFSET UNITYSDK_OFFSET(0x145051C0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_6A8BC08449E36907_OFFSET UNITYSDK_OFFSET(0x14504E70)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_84D29FD846000139_OFFSET UNITYSDK_OFFSET(0x14504B10)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_92EEB198074DA183_1_OFFSET UNITYSDK_OFFSET(0x14504AD0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0x145047F0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_ABFF84F08E943DB9_1_OFFSET UNITYSDK_OFFSET(0x14505780)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_ABFF84F08E943DB9_OFFSET UNITYSDK_OFFSET(0x14504C60)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14505590)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14505130)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_E0078F6C95D82674_1_OFFSET UNITYSDK_OFFSET(0x14505620)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_E0078F6C95D82674_OFFSET UNITYSDK_OFFSET(0x14504FD0)
#define CLASS_3_958BB67B1F1386FC_METHOD_3_FE275294F69C24FC_OFFSET UNITYSDK_OFFSET(0x14504830)
#define CLASS_3_958BB67B1F1386FC_UPDATE_OFFSET UNITYSDK_OFFSET(0x14504640)
#define CLASS_3_958BB67B1F1386FC__CTOR_OFFSET UNITYSDK_OFFSET(0x145047A0)

inline static constexpr unsigned int Class_3_958BB67B1F1386FC_TypeDefinitionIndex = 60758;

class Class_3_958BB67B1F1386FC : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	::System::Void Method_3_FE275294F69C24FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_FE275294F69C24FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_42D59398E65EF6BC(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_42D59398E65EF6BC_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_92EEB198074DA183_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_92EEB198074DA183_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_84D29FD846000139(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_84D29FD846000139_OFFSET))(a1);
	}

	static ::System::Void Method_3_ABFF84F08E943DB9(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_ABFF84F08E943DB9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_25F3139CC6B2877A(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_25F3139CC6B2877A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_E0078F6C95D82674(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_E0078F6C95D82674_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_5FB8340547BA285B(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_5FB8340547BA285B_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_E0078F6C95D82674_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_E0078F6C95D82674_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6A8BC08449E36907(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_6A8BC08449E36907_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_ABFF84F08E943DB9_1(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_958BB67B1F1386FC_METHOD_3_ABFF84F08E943DB9_1_OFFSET))(a1, a2);
	}
};
