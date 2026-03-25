#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace UnityEngine { class Rigidbody; }

#define CLASS_1_59B98C410EFDD281_CLEAR_OFFSET UNITYSDK_OFFSET(0x11656C50)
#define CLASS_1_59B98C410EFDD281_METHOD_1_1C5751DE38D528FC_OFFSET UNITYSDK_OFFSET(0x11656E30)
#define CLASS_1_59B98C410EFDD281_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11656D40)
#define CLASS_1_59B98C410EFDD281_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x11656CF0)
#define CLASS_1_59B98C410EFDD281_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11656CA0)
#define CLASS_1_59B98C410EFDD281_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x11656D90)
#define CLASS_1_59B98C410EFDD281_METHOD_1_F470081F1838BD2B_OFFSET UNITYSDK_OFFSET(0x11656BE0)
#define CLASS_1_59B98C410EFDD281__CTOR_OFFSET UNITYSDK_OFFSET(0x11656BD0)

inline static constexpr unsigned int Class_1_59B98C410EFDD281_TypeDefinitionIndex = 62654;

class Class_1_59B98C410EFDD281 : public ::System::Object
{
public:
	::UnityEngine::Rigidbody* Field_1_1; // 0x10
	::Class_2_9DD8A46984F1AFFD* Field_1_0; // 0x18
	::Class_3_1A92845FAFA5EC77* Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F470081F1838BD2B(::Class_3_1A92845FAFA5EC77* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::UnityEngine::Rigidbody* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_1_59B98C410EFDD281_METHOD_1_F470081F1838BD2B_OFFSET))(this, a1, a2, a3);
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
