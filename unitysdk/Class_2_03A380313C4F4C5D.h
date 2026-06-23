#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_35D50070BC469EAB.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_03A380313C4F4C5D_METHOD_2_12EE5FCB297B9C05_OFFSET UNITYSDK_OFFSET(0x108D0AF0)
#define CLASS_2_03A380313C4F4C5D_METHOD_2_B703864A5E3486C0_OFFSET UNITYSDK_OFFSET(0x108D0DE0)
#define CLASS_2_03A380313C4F4C5D_METHOD_2_D45CB2D94C698B6D_OFFSET UNITYSDK_OFFSET(0x108D0530)
#define CLASS_2_03A380313C4F4C5D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x108D0DD0)
#define CLASS_2_03A380313C4F4C5D__CTOR_OFFSET UNITYSDK_OFFSET(0x108D04A0)

inline static constexpr unsigned int Class_2_03A380313C4F4C5D_TypeDefinitionIndex = 76228;

class Class_2_03A380313C4F4C5D : public ::Class_1_35D50070BC469EAB
{
public:
	::System::Int32 Field_2_0; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_03A380313C4F4C5D__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D45CB2D94C698B6D(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_03A380313C4F4C5D_METHOD_2_D45CB2D94C698B6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B703864A5E3486C0(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_03A380313C4F4C5D_METHOD_2_B703864A5E3486C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_12EE5FCB297B9C05(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_03A380313C4F4C5D_METHOD_2_12EE5FCB297B9C05_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03A380313C4F4C5D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
