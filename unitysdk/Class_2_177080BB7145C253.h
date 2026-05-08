#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_35D50070BC469EAB.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_177080BB7145C253_METHOD_2_825F7C05602A972C_OFFSET UNITYSDK_OFFSET(0x144277D0)
#define CLASS_2_177080BB7145C253_METHOD_2_C13734625AA30F8B_OFFSET UNITYSDK_OFFSET(0x14427E90)
#define CLASS_2_177080BB7145C253_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x14427780)
#define CLASS_2_177080BB7145C253__CTOR_OFFSET UNITYSDK_OFFSET(0x14427750)

inline static constexpr unsigned int Class_2_177080BB7145C253_TypeDefinitionIndex = 39604;

class Class_2_177080BB7145C253 : public ::Class_1_35D50070BC469EAB
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

	::System::Void Method_2_C13734625AA30F8B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_177080BB7145C253_METHOD_2_C13734625AA30F8B_OFFSET))(this, a1);
	}
};
