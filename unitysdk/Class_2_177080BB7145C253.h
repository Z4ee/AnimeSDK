#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_816D4E2238E8C24A.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_177080BB7145C253_METHOD_2_825F7C05602A972C_OFFSET UNITYSDK_OFFSET(0x18269E30)
#define CLASS_2_177080BB7145C253_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x18269DE0)
#define CLASS_2_177080BB7145C253_METHOD_2_D2D9805CB430C454_OFFSET UNITYSDK_OFFSET(0x1826A570)
#define CLASS_2_177080BB7145C253__CTOR_OFFSET UNITYSDK_OFFSET(0x18269DB0)

inline static constexpr unsigned int Class_2_177080BB7145C253_TypeDefinitionIndex = 42846;

class Class_2_177080BB7145C253 : public ::Class_1_816D4E2238E8C24A
{
public:
	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_177080BB7145C253__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_177080BB7145C253_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_825F7C05602A972C(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_177080BB7145C253_METHOD_2_825F7C05602A972C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D2D9805CB430C454(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_177080BB7145C253_METHOD_2_D2D9805CB430C454_OFFSET))(this, a1);
	}
};
