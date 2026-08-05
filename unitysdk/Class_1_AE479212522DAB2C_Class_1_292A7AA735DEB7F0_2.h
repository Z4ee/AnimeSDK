#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_0_16E4307DCC419505_193;

#define CLASS_1_AE479212522DAB2C_CLASS_1_292A7AA735DEB7F0_2_METHOD_1_163090F9909F84B3_OFFSET UNITYSDK_OFFSET(0xF1FB6C0)
#define CLASS_1_AE479212522DAB2C_CLASS_1_292A7AA735DEB7F0_2__CTOR_OFFSET UNITYSDK_OFFSET(0xF1FB6B0)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_292A7AA735DEB7F0_2_TypeDefinitionIndex = 40880;

class Class_1_AE479212522DAB2C_Class_1_292A7AA735DEB7F0_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_193<::MoleMole::Battle::Entity*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_292A7AA735DEB7F0_2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_163090F9909F84B3(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_292A7AA735DEB7F0_2_METHOD_1_163090F9909F84B3_OFFSET))(this, a1);
	}
};
