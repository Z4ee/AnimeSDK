#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_211;
class Class_1_AC9A71375E037558;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AC9A71375E037558_CLASS_1_52C3903F3907D03E_METHOD_1_509B1C3C859EAFB5_OFFSET UNITYSDK_OFFSET(0x12899500)
#define CLASS_1_AC9A71375E037558_CLASS_1_52C3903F3907D03E_METHOD_1_6AD8DB3FB0E0379A_OFFSET UNITYSDK_OFFSET(0x12899360)
#define CLASS_1_AC9A71375E037558_CLASS_1_52C3903F3907D03E__CTOR_OFFSET UNITYSDK_OFFSET(0x12899350)

inline static constexpr unsigned int Class_1_AC9A71375E037558_Class_1_52C3903F3907D03E_TypeDefinitionIndex = 86868;

class Class_1_AC9A71375E037558_Class_1_52C3903F3907D03E : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_0; // 0x10
	::Class_1_AC9A71375E037558* Field_1_7; // 0x18
	::System::Action_1<::System::Exception*>* Field_1_5; // 0x20
	::System::Int32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_52C3903F3907D03E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6AD8DB3FB0E0379A(::Class_0_16E4307DCC419505_211* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_211*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_52C3903F3907D03E_METHOD_1_6AD8DB3FB0E0379A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_509B1C3C859EAFB5(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_52C3903F3907D03E_METHOD_1_509B1C3C859EAFB5_OFFSET))(this, a1);
	}
};
