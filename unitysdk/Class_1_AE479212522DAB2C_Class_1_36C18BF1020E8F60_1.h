#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AE479212522DAB2C_CLASS_1_36C18BF1020E8F60_1_METHOD_1_3BDC8628579234FE_OFFSET UNITYSDK_OFFSET(0x18778280)
#define CLASS_1_AE479212522DAB2C_CLASS_1_36C18BF1020E8F60_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18778270)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_36C18BF1020E8F60_1_TypeDefinitionIndex = 47490;

class Class_1_AE479212522DAB2C_Class_1_36C18BF1020E8F60_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_36C18BF1020E8F60_1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_3BDC8628579234FE(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_36C18BF1020E8F60_1_METHOD_1_3BDC8628579234FE_OFFSET))(this, a1);
	}
};
