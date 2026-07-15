#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_462CCD35EF693FA1_METHOD_1_1021EEFD8E1ED37C_OFFSET UNITYSDK_OFFSET(0x179EBEC0)
#define CLASS_1_462CCD35EF693FA1_METHOD_1_92327C760C02E633_OFFSET UNITYSDK_OFFSET(0x179EBF90)
#define CLASS_1_462CCD35EF693FA1__CTOR_OFFSET UNITYSDK_OFFSET(0x179EC060)

inline static constexpr unsigned int Class_1_462CCD35EF693FA1_TypeDefinitionIndex = 70450;

class Class_1_462CCD35EF693FA1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_462CCD35EF693FA1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_1021EEFD8E1ED37C()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_462CCD35EF693FA1_METHOD_1_1021EEFD8E1ED37C_OFFSET))(this);
	}

	::System::Void Method_1_92327C760C02E633(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_462CCD35EF693FA1_METHOD_1_92327C760C02E633_OFFSET))(this, a1);
	}
};
