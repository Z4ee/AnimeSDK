#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AE479212522DAB2C_CLASS_1_3F57F33EF7145762_METHOD_1_0F0A26483CDC9350_OFFSET UNITYSDK_OFFSET(0x18613F60)
#define CLASS_1_AE479212522DAB2C_CLASS_1_3F57F33EF7145762__CTOR_OFFSET UNITYSDK_OFFSET(0x18613F50)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_3F57F33EF7145762_TypeDefinitionIndex = 47488;

class Class_1_AE479212522DAB2C_Class_1_3F57F33EF7145762 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_3F57F33EF7145762__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_0F0A26483CDC9350(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_3F57F33EF7145762_METHOD_1_0F0A26483CDC9350_OFFSET))(this, a1);
	}
};
