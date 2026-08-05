#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_816D4E2238E8C24A.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_792E0A2942914283_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x1906EC70)
#define CLASS_2_792E0A2942914283_METHOD_2_E87FFB8E4D3D2796_OFFSET UNITYSDK_OFFSET(0x1906ECC0)
#define CLASS_2_792E0A2942914283_METHOD_2_F2286F014D7A7112_OFFSET UNITYSDK_OFFSET(0x1906E5E0)
#define CLASS_2_792E0A2942914283__CTOR_OFFSET UNITYSDK_OFFSET(0x1906E5C0)

inline static constexpr unsigned int Class_2_792E0A2942914283_TypeDefinitionIndex = 64610;

class Class_2_792E0A2942914283 : public ::Class_1_816D4E2238E8C24A
{
public:
	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_792E0A2942914283__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F2286F014D7A7112(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_792E0A2942914283_METHOD_2_F2286F014D7A7112_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_792E0A2942914283_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E87FFB8E4D3D2796(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_792E0A2942914283_METHOD_2_E87FFB8E4D3D2796_OFFSET))(this, a1, a2, a3);
	}
};
