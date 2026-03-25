#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5969D1EF28728C65_Class_1_3B76E13757985C28_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5969D1EF28728C65_METHOD_1_040B376D8D5FBACC_OFFSET UNITYSDK_OFFSET(0x167A95E0)
#define CLASS_1_5969D1EF28728C65_METHOD_1_5F701AE243364036_OFFSET UNITYSDK_OFFSET(0x167A9310)
#define CLASS_1_5969D1EF28728C65_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x167A9400)
#define CLASS_1_5969D1EF28728C65_METHOD_1_EF80FB47936A5F8D_OFFSET UNITYSDK_OFFSET(0x167A9470)
#define CLASS_1_5969D1EF28728C65__CTOR_OFFSET UNITYSDK_OFFSET(0x167A9750)

inline static constexpr unsigned int Class_1_5969D1EF28728C65_TypeDefinitionIndex = 32652;

class Class_1_5969D1EF28728C65 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_5969D1EF28728C65_Class_1_3B76E13757985C28_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5969D1EF28728C65__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5F701AE243364036(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5969D1EF28728C65_METHOD_1_5F701AE243364036_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5969D1EF28728C65_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Single Method_1_EF80FB47936A5F8D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5969D1EF28728C65_METHOD_1_EF80FB47936A5F8D_OFFSET))(this);
	}

	::System::Void Method_1_040B376D8D5FBACC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5969D1EF28728C65_METHOD_1_040B376D8D5FBACC_OFFSET))(this, a1);
	}
};
