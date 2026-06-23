#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_7339E2B0B6BCD798;
class Class_3_7339E2B0B6BCD798_Class_3_690B4E0207F7991E;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_7316CE4788029E92_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x105A6E10)
#define CLASS_3_7316CE4788029E92_METHOD_3_4F43A6CFA27F0EA2_1_OFFSET UNITYSDK_OFFSET(0x105A8360)
#define CLASS_3_7316CE4788029E92_METHOD_3_4F43A6CFA27F0EA2_OFFSET UNITYSDK_OFFSET(0x105A80E0)
#define CLASS_3_7316CE4788029E92_METHOD_3_5CF7366E2012E729_OFFSET UNITYSDK_OFFSET(0x105A8550)
#define CLASS_3_7316CE4788029E92_METHOD_3_A30AFD3AAB6BCFF7_OFFSET UNITYSDK_OFFSET(0x105A70D0)
#define CLASS_3_7316CE4788029E92_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x105A82D0)
#define CLASS_3_7316CE4788029E92_METHOD_3_CED5D882855A55E5_OFFSET UNITYSDK_OFFSET(0x105A7630)
#define CLASS_3_7316CE4788029E92_METHOD_3_D4B7AE4CD3A3FB8B_OFFSET UNITYSDK_OFFSET(0x105A7C10)
#define CLASS_3_7316CE4788029E92__CTOR_OFFSET UNITYSDK_OFFSET(0x105A7080)

inline static constexpr unsigned int Class_3_7316CE4788029E92_TypeDefinitionIndex = 58779;

class Class_3_7316CE4788029E92 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7316CE4788029E92__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7316CE4788029E92_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A30AFD3AAB6BCFF7(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_7316CE4788029E92_METHOD_3_A30AFD3AAB6BCFF7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4F43A6CFA27F0EA2(::Class_3_7339E2B0B6BCD798_Class_3_690B4E0207F7991E* a1)
	{
		return ((::System::Void(*)(::Class_3_7339E2B0B6BCD798_Class_3_690B4E0207F7991E*))((::PBYTE)hIl2Cpp + CLASS_3_7316CE4788029E92_METHOD_3_4F43A6CFA27F0EA2_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7316CE4788029E92_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4F43A6CFA27F0EA2_1(::Class_3_7339E2B0B6BCD798_Class_3_690B4E0207F7991E* a1)
	{
		return ((::System::Void(*)(::Class_3_7339E2B0B6BCD798_Class_3_690B4E0207F7991E*))((::PBYTE)hIl2Cpp + CLASS_3_7316CE4788029E92_METHOD_3_4F43A6CFA27F0EA2_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_D4B7AE4CD3A3FB8B(::MoleMole::Battle::Entity* a1, ::Class_3_7339E2B0B6BCD798* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_7339E2B0B6BCD798*))((::PBYTE)hIl2Cpp + CLASS_3_7316CE4788029E92_METHOD_3_D4B7AE4CD3A3FB8B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5CF7366E2012E729(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_7316CE4788029E92_METHOD_3_5CF7366E2012E729_OFFSET))(a1);
	}

	static ::System::Void Method_3_CED5D882855A55E5(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_7316CE4788029E92_METHOD_3_CED5D882855A55E5_OFFSET))(a1, a2);
	}
};
