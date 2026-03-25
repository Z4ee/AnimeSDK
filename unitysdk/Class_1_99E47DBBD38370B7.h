#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define CLASS_1_99E47DBBD38370B7_METHOD_1_3A420A67E4E3A054_OFFSET UNITYSDK_OFFSET(0x11338100)
#define CLASS_1_99E47DBBD38370B7_METHOD_1_93010FB55B6D7ACE_OFFSET UNITYSDK_OFFSET(0x11338040)
#define CLASS_1_99E47DBBD38370B7_METHOD_1_94D3970D26FF95B7_OFFSET UNITYSDK_OFFSET(0x11337F30)
#define CLASS_1_99E47DBBD38370B7_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x113382A0)
#define CLASS_1_99E47DBBD38370B7__CTOR_OFFSET UNITYSDK_OFFSET(0x11338030)

inline static constexpr unsigned int Class_1_99E47DBBD38370B7_TypeDefinitionIndex = 58871;

class Class_1_99E47DBBD38370B7 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_0; // 0x10
	::UnityEngine::Vector2 Field_1_2; // 0x18
	::UnityEngine::Vector2 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99E47DBBD38370B7__CTOR_OFFSET))(this);
	}

	static ::Class_1_99E47DBBD38370B7* Method_1_94D3970D26FF95B7(::UnityEngine::RectTransform* a1)
	{
		return ((::Class_1_99E47DBBD38370B7*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_99E47DBBD38370B7_METHOD_1_94D3970D26FF95B7_OFFSET))(a1);
	}

	::UnityEngine::Vector2 Method_1_93010FB55B6D7ACE(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_99E47DBBD38370B7_METHOD_1_93010FB55B6D7ACE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_3A420A67E4E3A054(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_99E47DBBD38370B7_METHOD_1_3A420A67E4E3A054_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99E47DBBD38370B7_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}
};
