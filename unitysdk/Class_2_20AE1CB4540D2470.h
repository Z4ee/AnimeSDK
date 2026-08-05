#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_36.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_460.h"

class Class_0_16E4307DCC419505_7;
class Class_1_B9D6E7E76075C6E2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_20AE1CB4540D2470_METHOD_2_4993EDAE54425105_1_OFFSET UNITYSDK_OFFSET(0x16964990)
#define CLASS_2_20AE1CB4540D2470_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x16964440)
#define CLASS_2_20AE1CB4540D2470_METHOD_2_4D57F940C21F4816_OFFSET UNITYSDK_OFFSET(0x16964450)
#define CLASS_2_20AE1CB4540D2470_METHOD_2_8B9DCFDAAAB0314E_OFFSET UNITYSDK_OFFSET(0x16964400)
#define CLASS_2_20AE1CB4540D2470__CTOR_OFFSET UNITYSDK_OFFSET(0x169643B0)

inline static constexpr unsigned int Class_2_20AE1CB4540D2470_TypeDefinitionIndex = 18442;

class Class_2_20AE1CB4540D2470 : public ::Class_1_D9FAA3DCCFE14DB8_36
{
public:
	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Field_2_1; // 0x58
	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_460 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_460, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_2_4D57F940C21F4816(::System::String* a1, ::Struct_2_3E75877A2888D88A_460 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID, ::System::String*, ::Struct_2_3E75877A2888D88A_460))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470_METHOD_2_4D57F940C21F4816_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* Method_2_4993EDAE54425105_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470_METHOD_2_4993EDAE54425105_1_OFFSET))(this);
	}

	::System::Void Method_2_8B9DCFDAAAB0314E(::Struct_2_3E75877A2888D88A_460 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_460))((::PBYTE)hIl2Cpp + CLASS_2_20AE1CB4540D2470_METHOD_2_8B9DCFDAAAB0314E_OFFSET))(this, a1);
	}
};
