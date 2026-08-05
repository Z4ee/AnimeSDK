#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_691;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CC5809FFBBB78995_METHOD_1_3658BD3488A73B2E_1_OFFSET UNITYSDK_OFFSET(0x13E09410)
#define CLASS_1_CC5809FFBBB78995_METHOD_1_3658BD3488A73B2E_OFFSET UNITYSDK_OFFSET(0x13E09170)
#define CLASS_1_CC5809FFBBB78995_METHOD_1_640BCCEECAEBC7CA_OFFSET UNITYSDK_OFFSET(0x13E08B70)
#define CLASS_1_CC5809FFBBB78995__CTOR_OFFSET UNITYSDK_OFFSET(0x13E09400)

inline static constexpr unsigned int Class_1_CC5809FFBBB78995_TypeDefinitionIndex = 87801;

class Class_1_CC5809FFBBB78995 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_691*>* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5809FFBBB78995__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_640BCCEECAEBC7CA(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC5809FFBBB78995_METHOD_1_640BCCEECAEBC7CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3658BD3488A73B2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5809FFBBB78995_METHOD_1_3658BD3488A73B2E_OFFSET))(this);
	}

	::System::Void Method_1_3658BD3488A73B2E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5809FFBBB78995_METHOD_1_3658BD3488A73B2E_1_OFFSET))(this);
	}
};
