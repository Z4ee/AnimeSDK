#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_689;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EBA8C9C89C53F81F_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x13B91AC0)
#define CLASS_1_EBA8C9C89C53F81F_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x13B91B00)
#define CLASS_1_EBA8C9C89C53F81F__CTOR_OFFSET UNITYSDK_OFFSET(0x13B91B70)

inline static constexpr unsigned int Class_1_EBA8C9C89C53F81F_TypeDefinitionIndex = 69507;

class Class_1_EBA8C9C89C53F81F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_689*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA8C9C89C53F81F__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA8C9C89C53F81F_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA8C9C89C53F81F_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
