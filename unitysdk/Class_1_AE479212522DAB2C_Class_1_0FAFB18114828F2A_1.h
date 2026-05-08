#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AE479212522DAB2C_CLASS_1_0FAFB18114828F2A_1_METHOD_1_A5FD6B610BBD35D8_OFFSET UNITYSDK_OFFSET(0xFEC4690)
#define CLASS_1_AE479212522DAB2C_CLASS_1_0FAFB18114828F2A_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFEC4680)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_0FAFB18114828F2A_1_TypeDefinitionIndex = 62210;

class Class_1_AE479212522DAB2C_Class_1_0FAFB18114828F2A_1 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_0FAFB18114828F2A_1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_A5FD6B610BBD35D8(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_0FAFB18114828F2A_1_METHOD_1_A5FD6B610BBD35D8_OFFSET))(this, a1);
	}
};
