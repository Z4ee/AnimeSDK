#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E2DFEC5475995150;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_384A8CC1A95DCC35_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1D6510F0)
#define CLASS_1_384A8CC1A95DCC35_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1D650B90)
#define CLASS_1_384A8CC1A95DCC35_METHOD_1_8C86D84D981C8F66_OFFSET UNITYSDK_OFFSET(0x1D650FC0)
#define CLASS_1_384A8CC1A95DCC35_METHOD_1_9133398E73B9D974_OFFSET UNITYSDK_OFFSET(0x1D650C70)
#define CLASS_1_384A8CC1A95DCC35__CTOR_OFFSET UNITYSDK_OFFSET(0x1D650AC0)

inline static constexpr unsigned int Class_1_384A8CC1A95DCC35_TypeDefinitionIndex = 91927;

class Class_1_384A8CC1A95DCC35 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E2DFEC5475995150*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_E2DFEC5475995150*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_384A8CC1A95DCC35__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_384A8CC1A95DCC35_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_9133398E73B9D974(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_384A8CC1A95DCC35_METHOD_1_9133398E73B9D974_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_384A8CC1A95DCC35_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_8C86D84D981C8F66(::Class_1_E2DFEC5475995150* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2DFEC5475995150*))((::PBYTE)hIl2Cpp + CLASS_1_384A8CC1A95DCC35_METHOD_1_8C86D84D981C8F66_OFFSET))(this, a1);
	}
};
