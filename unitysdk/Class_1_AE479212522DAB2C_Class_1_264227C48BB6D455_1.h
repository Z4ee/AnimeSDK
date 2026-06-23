#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define CLASS_1_AE479212522DAB2C_CLASS_1_264227C48BB6D455_1_METHOD_1_800ECFD9ACACE733_OFFSET UNITYSDK_OFFSET(0x1594E350)
#define CLASS_1_AE479212522DAB2C_CLASS_1_264227C48BB6D455_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1594E340)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_264227C48BB6D455_1_TypeDefinitionIndex = 47494;

class Class_1_AE479212522DAB2C_Class_1_264227C48BB6D455_1 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Field_1_0; // 0x10
	::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_264227C48BB6D455_1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_800ECFD9ACACE733(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_264227C48BB6D455_1_METHOD_1_800ECFD9ACACE733_OFFSET))(this, a1);
	}
};
