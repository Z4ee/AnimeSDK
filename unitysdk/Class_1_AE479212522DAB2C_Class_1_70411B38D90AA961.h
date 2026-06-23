#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class IComparable; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AE479212522DAB2C_CLASS_1_70411B38D90AA961_METHOD_1_9634FC8E375BFB75_OFFSET UNITYSDK_OFFSET(0x158641E0)
#define CLASS_1_AE479212522DAB2C_CLASS_1_70411B38D90AA961__CTOR_OFFSET UNITYSDK_OFFSET(0x158641D0)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_70411B38D90AA961_TypeDefinitionIndex = 47481;

class Class_1_AE479212522DAB2C_Class_1_70411B38D90AA961 : public ::System::Object
{
public:
	::System::Func_2<::MoleMole::Battle::Entity*, ::System::IComparable*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_70411B38D90AA961__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_9634FC8E375BFB75(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_70411B38D90AA961_METHOD_1_9634FC8E375BFB75_OFFSET))(this, a1);
	}
};
