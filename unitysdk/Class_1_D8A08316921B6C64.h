#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D8A08316921B6C64_METHOD_1_1021EEFD8E1ED37C_OFFSET UNITYSDK_OFFSET(0x16173CA0)
#define CLASS_1_D8A08316921B6C64_METHOD_1_6B8C0137E53D192A_OFFSET UNITYSDK_OFFSET(0x16173D70)
#define CLASS_1_D8A08316921B6C64__CTOR_OFFSET UNITYSDK_OFFSET(0x16173E40)

inline static constexpr unsigned int Class_1_D8A08316921B6C64_TypeDefinitionIndex = 73728;

class Class_1_D8A08316921B6C64 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* HDMFBGKLLCI; // 0x10
	::System::Int32 NCDEGDCPCHN; // 0x18
	::System::Int32 OPDJPDEOCJM; // 0x1C
	::System::Single OIDOGOPLOCL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8A08316921B6C64__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_1021EEFD8E1ED37C()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8A08316921B6C64_METHOD_1_1021EEFD8E1ED37C_OFFSET))(this);
	}

	::System::Void Method_1_6B8C0137E53D192A(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D8A08316921B6C64_METHOD_1_6B8C0137E53D192A_OFFSET))(this, a1);
	}
};
