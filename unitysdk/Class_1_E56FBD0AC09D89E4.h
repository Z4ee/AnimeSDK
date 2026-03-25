#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_56FF45D7B2C55655;
class Class_1_5B228A4605C15E47;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E56FBD0AC09D89E4_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10A94180)
#define CLASS_1_E56FBD0AC09D89E4_METHOD_1_42B8C4AE6883DB3C_OFFSET UNITYSDK_OFFSET(0x10A94570)
#define CLASS_1_E56FBD0AC09D89E4_METHOD_1_ECB29EB056B27311_OFFSET UNITYSDK_OFFSET(0x10A942A0)
#define CLASS_1_E56FBD0AC09D89E4__CTOR_OFFSET UNITYSDK_OFFSET(0x10A94BF0)

inline static constexpr unsigned int Class_1_E56FBD0AC09D89E4_TypeDefinitionIndex = 60615;

class Class_1_E56FBD0AC09D89E4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_5B228A4605C15E47*>* Field_1_2; // 0x28
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E56FBD0AC09D89E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E56FBD0AC09D89E4_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_ECB29EB056B27311(::UnityEngine::Vector3 a1, ::System::Single a2, ::Class_1_5B228A4605C15E47* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Class_1_5B228A4605C15E47*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E56FBD0AC09D89E4_METHOD_1_ECB29EB056B27311_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_42B8C4AE6883DB3C(::Class_1_56FF45D7B2C55655* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E56FBD0AC09D89E4_METHOD_1_42B8C4AE6883DB3C_OFFSET))(this, a1, a2);
	}
};
