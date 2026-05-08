#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AE479212522DAB2C_CLASS_1_9613C945C5A402C6_METHOD_1_6B023902A6558627_OFFSET UNITYSDK_OFFSET(0x122B6600)
#define CLASS_1_AE479212522DAB2C_CLASS_1_9613C945C5A402C6_METHOD_1_95C4EEA1984407E2_OFFSET UNITYSDK_OFFSET(0x122B6580)
#define CLASS_1_AE479212522DAB2C_CLASS_1_9613C945C5A402C6__CTOR_OFFSET UNITYSDK_OFFSET(0x122B57E0)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_9613C945C5A402C6_TypeDefinitionIndex = 62220;

class Class_1_AE479212522DAB2C_Class_1_9613C945C5A402C6 : public ::System::Object
{
public:
	::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_9613C945C5A402C6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_95C4EEA1984407E2(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_9613C945C5A402C6_METHOD_1_95C4EEA1984407E2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6B023902A6558627(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_9613C945C5A402C6_METHOD_1_6B023902A6558627_OFFSET))(this, a1);
	}
};
