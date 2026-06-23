#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_35D50070BC469EAB.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace MoleMole::Config { class InteractEntryModeChat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_51FF5C04C142799C_METHOD_2_33759097F16D6C61_OFFSET UNITYSDK_OFFSET(0x134BC1C0)
#define CLASS_2_51FF5C04C142799C_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x134BC170)
#define CLASS_2_51FF5C04C142799C__CTOR_OFFSET UNITYSDK_OFFSET(0x134BC0E0)

inline static constexpr unsigned int Class_2_51FF5C04C142799C_TypeDefinitionIndex = 80274;

class Class_2_51FF5C04C142799C : public ::Class_1_35D50070BC469EAB
{
public:
	::MoleMole::Config::InteractEntryModeChat* Field_2_0; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_51FF5C04C142799C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_51FF5C04C142799C_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_33759097F16D6C61(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_51FF5C04C142799C_METHOD_2_33759097F16D6C61_OFFSET))(this, a1, a2);
	}
};
