#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_35D50070BC469EAB.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0F46FF045198AF15_METHOD_2_C3B03AE07F54EBC3_OFFSET UNITYSDK_OFFSET(0x71748A0)
#define CLASS_2_0F46FF045198AF15_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x7174FB0)
#define CLASS_2_0F46FF045198AF15_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7174FA0)
#define CLASS_2_0F46FF045198AF15__CTOR_OFFSET UNITYSDK_OFFSET(0x7174810)

inline static constexpr unsigned int Class_2_0F46FF045198AF15_TypeDefinitionIndex = 70188;

class Class_2_0F46FF045198AF15 : public ::Class_1_35D50070BC469EAB
{
public:
	::System::Int32 Field_2_0; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_0F46FF045198AF15__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C3B03AE07F54EBC3(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_0F46FF045198AF15_METHOD_2_C3B03AE07F54EBC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_0F46FF045198AF15_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F46FF045198AF15_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
