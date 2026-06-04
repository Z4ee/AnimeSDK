#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace UnityEngine { class Rigidbody; }

#define CLASS_1_59B98C410EFDD281_CLEAR_OFFSET UNITYSDK_OFFSET(0x10612770)
#define CLASS_1_59B98C410EFDD281_METHOD_1_1C5751DE38D528FC_OFFSET UNITYSDK_OFFSET(0x10612950)
#define CLASS_1_59B98C410EFDD281_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10612860)
#define CLASS_1_59B98C410EFDD281_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x10612810)
#define CLASS_1_59B98C410EFDD281_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x106127C0)
#define CLASS_1_59B98C410EFDD281_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x106128B0)
#define CLASS_1_59B98C410EFDD281_METHOD_1_F470081F1838BD2B_OFFSET UNITYSDK_OFFSET(0x10612700)
#define CLASS_1_59B98C410EFDD281__CTOR_OFFSET UNITYSDK_OFFSET(0x106126F0)

inline static constexpr unsigned int Class_1_59B98C410EFDD281_TypeDefinitionIndex = 71487;

class Class_1_59B98C410EFDD281 : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::UnityEngine::Rigidbody* Field_1_1; // 0x18
	::Class_2_B9E8C2EEAA5C96EC* Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F470081F1838BD2B(::Class_3_1E4F9B0ED3BF21DE* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::UnityEngine::Rigidbody* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_2_B9E8C2EEAA5C96EC*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281_METHOD_1_F470081F1838BD2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_1_1C5751DE38D528FC(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281_METHOD_1_1C5751DE38D528FC_OFFSET))(this, a1);
	}
};
