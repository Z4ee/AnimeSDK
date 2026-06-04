#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2C80CAFD2F9A4580_METHOD_1_1021EEFD8E1ED37C_OFFSET UNITYSDK_OFFSET(0x141FA700)
#define CLASS_1_2C80CAFD2F9A4580_METHOD_1_620C0E1333DE6D16_OFFSET UNITYSDK_OFFSET(0x141FA7D0)
#define CLASS_1_2C80CAFD2F9A4580__CTOR_OFFSET UNITYSDK_OFFSET(0x141FA8A0)

inline static constexpr unsigned int Class_1_2C80CAFD2F9A4580_TypeDefinitionIndex = 68918;

class Class_1_2C80CAFD2F9A4580 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C80CAFD2F9A4580__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_1021EEFD8E1ED37C()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C80CAFD2F9A4580_METHOD_1_1021EEFD8E1ED37C_OFFSET))(this);
	}

	::System::Void Method_1_620C0E1333DE6D16(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_2C80CAFD2F9A4580_METHOD_1_620C0E1333DE6D16_OFFSET))(this, a1);
	}
};
