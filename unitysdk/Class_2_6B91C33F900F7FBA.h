#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_816D4E2238E8C24A.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace MoleMole::Config { class InteractEntryModeChat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6B91C33F900F7FBA_METHOD_2_0009ED820E1DACB4_OFFSET UNITYSDK_OFFSET(0xBD98570)
#define CLASS_2_6B91C33F900F7FBA_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0xBD98520)
#define CLASS_2_6B91C33F900F7FBA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD98490)

inline static constexpr unsigned int Class_2_6B91C33F900F7FBA_TypeDefinitionIndex = 61026;

class Class_2_6B91C33F900F7FBA : public ::Class_1_816D4E2238E8C24A
{
public:
	::MoleMole::Config::InteractEntryModeChat* Field_2_0; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_6B91C33F900F7FBA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6B91C33F900F7FBA_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0009ED820E1DACB4(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_6B91C33F900F7FBA_METHOD_2_0009ED820E1DACB4_OFFSET))(this, a1, a2);
	}
};
