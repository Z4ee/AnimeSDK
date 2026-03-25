#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1BD9A352EF1010C8.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_19348DE77242334B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AAAC80)
#define CLASS_2_19348DE77242334B_METHOD_2_39CF329C9DA015B1_OFFSET UNITYSDK_OFFSET(0x8AAACF0)
#define CLASS_2_19348DE77242334B_METHOD_2_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x8AAAE60)
#define CLASS_2_19348DE77242334B_METHOD_2_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x8AAAD40)
#define CLASS_2_19348DE77242334B_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x8AAADC0)
#define CLASS_2_19348DE77242334B_METHOD_2_D9D34364A9301075_OFFSET UNITYSDK_OFFSET(0x8AAAE70)
#define CLASS_2_19348DE77242334B__CTOR_OFFSET UNITYSDK_OFFSET(0x8AAABD0)

inline static constexpr unsigned int Class_2_19348DE77242334B_TypeDefinitionIndex = 60873;

class Class_2_19348DE77242334B : public ::Class_1_1BD9A352EF1010C8
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x10

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_19348DE77242334B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19348DE77242334B_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_39CF329C9DA015B1(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19348DE77242334B_METHOD_2_39CF329C9DA015B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_19348DE77242334B_METHOD_2_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19348DE77242334B_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19348DE77242334B_METHOD_2_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_D9D34364A9301075(::System::String* P0)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19348DE77242334B_METHOD_2_D9D34364A9301075_OFFSET))(this, P0);
	}
};
