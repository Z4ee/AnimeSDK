#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AE479212522DAB2C_CLASS_1_790BAC16F64035C8_METHOD_1_09D2EF4396EB8F99_OFFSET UNITYSDK_OFFSET(0x128888B0)
#define CLASS_1_AE479212522DAB2C_CLASS_1_790BAC16F64035C8__CTOR_OFFSET UNITYSDK_OFFSET(0x128888A0)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_790BAC16F64035C8_TypeDefinitionIndex = 47482;

class Class_1_AE479212522DAB2C_Class_1_790BAC16F64035C8 : public ::System::Object
{
public:
	::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_790BAC16F64035C8__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* Method_1_09D2EF4396EB8F99(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_790BAC16F64035C8_METHOD_1_09D2EF4396EB8F99_OFFSET))(this, a1);
	}
};
