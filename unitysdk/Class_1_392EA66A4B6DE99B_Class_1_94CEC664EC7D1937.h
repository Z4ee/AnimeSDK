#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_392EA66A4B6DE99B_CLASS_1_94CEC664EC7D1937_METHOD_1_5354309BA2B69EB5_OFFSET UNITYSDK_OFFSET(0x1290F130)
#define CLASS_1_392EA66A4B6DE99B_CLASS_1_94CEC664EC7D1937_METHOD_1_C18F932B2B1DA216_OFFSET UNITYSDK_OFFSET(0x1290F060)
#define CLASS_1_392EA66A4B6DE99B_CLASS_1_94CEC664EC7D1937__CTOR_OFFSET UNITYSDK_OFFSET(0x1290F000)

inline static constexpr unsigned int Class_1_392EA66A4B6DE99B_Class_1_94CEC664EC7D1937_TypeDefinitionIndex = 59475;

class Class_1_392EA66A4B6DE99B_Class_1_94CEC664EC7D1937 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Byte>* Field_1_2; // 0x10
	::System::Byte Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_392EA66A4B6DE99B_CLASS_1_94CEC664EC7D1937__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C18F932B2B1DA216(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_392EA66A4B6DE99B_CLASS_1_94CEC664EC7D1937_METHOD_1_C18F932B2B1DA216_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5354309BA2B69EB5(::System::IO::MemoryStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_392EA66A4B6DE99B_CLASS_1_94CEC664EC7D1937_METHOD_1_5354309BA2B69EB5_OFFSET))(this, a1);
	}
};
