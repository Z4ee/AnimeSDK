#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_27AAEEE349D24BF6_CLASS_1_E5F3AA8173911513_METHOD_1_1E6252318B91FC48_OFFSET UNITYSDK_OFFSET(0x140209C0)
#define CLASS_4_27AAEEE349D24BF6_CLASS_1_E5F3AA8173911513__CTOR_OFFSET UNITYSDK_OFFSET(0x140209B0)

inline static constexpr unsigned int Class_4_27AAEEE349D24BF6_Class_1_E5F3AA8173911513_TypeDefinitionIndex = 68977;

class Class_4_27AAEEE349D24BF6_Class_1_E5F3AA8173911513 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_27AAEEE349D24BF6_CLASS_1_E5F3AA8173911513__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E6252318B91FC48(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_4_27AAEEE349D24BF6_CLASS_1_E5F3AA8173911513_METHOD_1_1E6252318B91FC48_OFFSET))(this, a1);
	}
};
