#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_5.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_61.h"

class Class_0_16E4307DCC419505_13;
class Class_1_B9D6E7E76075C6E2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_20AE1CB4540D2470_METHOD_2_4993EDAE54425105_1_OFFSET UNITYSDK_OFFSET(0x1471DB30)
#define CLASS_2_20AE1CB4540D2470_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1471DB20)
#define CLASS_2_20AE1CB4540D2470_METHOD_2_4D57F940C21F4816_OFFSET UNITYSDK_OFFSET(0x1471D5E0)
#define CLASS_2_20AE1CB4540D2470_METHOD_2_8B9DCFDAAAB0314E_OFFSET UNITYSDK_OFFSET(0x1471D5A0)
#define CLASS_2_20AE1CB4540D2470__CTOR_OFFSET UNITYSDK_OFFSET(0x1471D550)

inline static constexpr unsigned int Class_2_20AE1CB4540D2470_TypeDefinitionIndex = 11768;

class Class_2_20AE1CB4540D2470 : public ::Class_1_D9FAA3DCCFE14DB8_5
{
public:
	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Field_2_0; // 0x58
	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Field_2_1; // 0x60

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_61 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_61, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B9DCFDAAAB0314E(::Struct_2_3E75877A2888D88A_61 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_61))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470_METHOD_2_8B9DCFDAAAB0314E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_2_4D57F940C21F4816(::System::String* a1, ::Struct_2_3E75877A2888D88A_61 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID, ::System::String*, ::Struct_2_3E75877A2888D88A_61))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470_METHOD_2_4D57F940C21F4816_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_2_4993EDAE54425105_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470_METHOD_2_4993EDAE54425105_1_OFFSET))(this);
	}
};
