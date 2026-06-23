#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC9A71375E037558;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AC9A71375E037558_CLASS_1_B3527532089BC39E_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x12D6BE30)
#define CLASS_1_AC9A71375E037558_CLASS_1_B3527532089BC39E_METHOD_1_A0003B8FAB2DF11F_OFFSET UNITYSDK_OFFSET(0x12D6BE70)
#define CLASS_1_AC9A71375E037558_CLASS_1_B3527532089BC39E_METHOD_1_BAEE5DE0AF1ED2B0_OFFSET UNITYSDK_OFFSET(0x12D6BE50)
#define CLASS_1_AC9A71375E037558_CLASS_1_B3527532089BC39E__CTOR_OFFSET UNITYSDK_OFFSET(0x12D6BE20)

inline static constexpr unsigned int Class_1_AC9A71375E037558_Class_1_B3527532089BC39E_TypeDefinitionIndex = 50507;

class Class_1_AC9A71375E037558_Class_1_B3527532089BC39E : public ::System::Object
{
public:
	::System::Action_1<::System::Exception*>* Field_1_1; // 0x10
	::Class_1_AC9A71375E037558* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_B3527532089BC39E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_B3527532089BC39E_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_BAEE5DE0AF1ED2B0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_B3527532089BC39E_METHOD_1_BAEE5DE0AF1ED2B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0003B8FAB2DF11F(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_B3527532089BC39E_METHOD_1_A0003B8FAB2DF11F_OFFSET))(this, a1);
	}
};
