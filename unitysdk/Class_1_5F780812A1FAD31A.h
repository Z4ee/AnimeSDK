#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define CLASS_1_5F780812A1FAD31A_METHOD_1_412F2CEBDE691C81_OFFSET UNITYSDK_OFFSET(0x11FD7970)
#define CLASS_1_5F780812A1FAD31A_METHOD_1_5344F2FAE4C5E896_OFFSET UNITYSDK_OFFSET(0x11FD80A0)
#define CLASS_1_5F780812A1FAD31A_METHOD_1_97C299E305E98374_OFFSET UNITYSDK_OFFSET(0x11FD79D0)
#define CLASS_1_5F780812A1FAD31A_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x11FD7EE0)
#define CLASS_1_5F780812A1FAD31A__CTOR_OFFSET UNITYSDK_OFFSET(0x11FD7960)

inline static constexpr unsigned int Class_1_5F780812A1FAD31A_TypeDefinitionIndex = 70718;

class Class_1_5F780812A1FAD31A : public ::System::Object
{
public:
	::UnityEngine::Quaternion Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F780812A1FAD31A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_412F2CEBDE691C81(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_5F780812A1FAD31A_METHOD_1_412F2CEBDE691C81_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_97C299E305E98374(::UnityEngine::Quaternion& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_5F780812A1FAD31A_METHOD_1_97C299E305E98374_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F780812A1FAD31A_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_5344F2FAE4C5E896()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F780812A1FAD31A_METHOD_1_5344F2FAE4C5E896_OFFSET))(this);
	}
};
