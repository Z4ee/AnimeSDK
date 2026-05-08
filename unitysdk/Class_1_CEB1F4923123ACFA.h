#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_CEB1F4923123ACFA_METHOD_1_447F61E5CF183BE0_OFFSET UNITYSDK_OFFSET(0x13F33730)
#define CLASS_1_CEB1F4923123ACFA_METHOD_1_F343EF16AEF126FD_OFFSET UNITYSDK_OFFSET(0x13F33610)
#define CLASS_1_CEB1F4923123ACFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F335C0)
#define CLASS_1_CEB1F4923123ACFA__CTOR_OFFSET UNITYSDK_OFFSET(0x13F335B0)

inline static constexpr unsigned int Class_1_CEB1F4923123ACFA_TypeDefinitionIndex = 53497;

class Class_1_CEB1F4923123ACFA : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEB1F4923123ACFA_TypeDefinitionIndex)->GetStaticField(0x3E4A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB1F4923123ACFA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEB1F4923123ACFA__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F343EF16AEF126FD(::System::UInt16 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CEB1F4923123ACFA_METHOD_1_F343EF16AEF126FD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_447F61E5CF183BE0(::System::UInt16 a1)
	{
		return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_CEB1F4923123ACFA_METHOD_1_447F61E5CF183BE0_OFFSET))(a1);
	}
};
