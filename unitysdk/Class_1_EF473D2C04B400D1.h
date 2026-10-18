#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_502;
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_EF473D2C04B400D1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1A6610)
#define CLASS_1_EF473D2C04B400D1_METHOD_1_25787A55F5EE3BE4_OFFSET UNITYSDK_OFFSET(0xC1A61B0)
#define CLASS_1_EF473D2C04B400D1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC1A6530)
#define CLASS_1_EF473D2C04B400D1_METHOD_1_DD53ACEBA0571D27_OFFSET UNITYSDK_OFFSET(0xC1A6590)
#define CLASS_1_EF473D2C04B400D1__CTOR_OFFSET UNITYSDK_OFFSET(0xC1A61A0)

inline static constexpr unsigned int Class_1_EF473D2C04B400D1_TypeDefinitionIndex = 60882;

class Class_1_EF473D2C04B400D1 : public ::System::Object
{
public:
	::UnityEngine::Coroutine* CGAEACAKGMP; // 0x10
	::Class_0_16E4307DCC419505_502* CGJNMCLDIGO; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_502* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_502*))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_25787A55F5EE3BE4(::System::Single a1, ::System::Action_1<::Class_0_16E4307DCC419505_502*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::Class_0_16E4307DCC419505_502*>*))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1_METHOD_1_25787A55F5EE3BE4_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_DD53ACEBA0571D27(::System::Single a1, ::System::Action_1<::Class_0_16E4307DCC419505_502*>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action_1<::Class_0_16E4307DCC419505_502*>*))((::PBYTE)hIl2Cpp + CLASS_1_EF473D2C04B400D1_METHOD_1_DD53ACEBA0571D27_OFFSET))(this, a1, a2);
	}
};
