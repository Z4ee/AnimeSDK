#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_339067D9E32FBBB4_METHOD_1_91674D2320793B72_OFFSET UNITYSDK_OFFSET(0x8D6C870)
#define CLASS_1_339067D9E32FBBB4_METHOD_1_AA8C2676333BF9A1_OFFSET UNITYSDK_OFFSET(0x8D6C910)
#define CLASS_1_339067D9E32FBBB4__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6C9E0)

inline static constexpr unsigned int Class_1_339067D9E32FBBB4_TypeDefinitionIndex = 60524;

class Class_1_339067D9E32FBBB4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_3; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Single Field_1_0; // 0x1C
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_339067D9E32FBBB4__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_91674D2320793B72()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_339067D9E32FBBB4_METHOD_1_91674D2320793B72_OFFSET))(this);
	}

	::System::Void Method_1_AA8C2676333BF9A1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_339067D9E32FBBB4_METHOD_1_AA8C2676333BF9A1_OFFSET))(this, a1);
	}
};
