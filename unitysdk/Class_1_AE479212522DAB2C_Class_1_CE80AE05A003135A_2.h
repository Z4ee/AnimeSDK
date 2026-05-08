#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_0_16E4307DCC419505_621;

#define CLASS_1_AE479212522DAB2C_CLASS_1_CE80AE05A003135A_2_METHOD_1_4E14CE50F7AEAC2E_OFFSET UNITYSDK_OFFSET(0x13959180)
#define CLASS_1_AE479212522DAB2C_CLASS_1_CE80AE05A003135A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13959170)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_CE80AE05A003135A_2_TypeDefinitionIndex = 62221;

class Class_1_AE479212522DAB2C_Class_1_CE80AE05A003135A_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_621<::MoleMole::Battle::Entity*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_CE80AE05A003135A_2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_4E14CE50F7AEAC2E(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_CE80AE05A003135A_2_METHOD_1_4E14CE50F7AEAC2E_OFFSET))(this, a1);
	}
};
