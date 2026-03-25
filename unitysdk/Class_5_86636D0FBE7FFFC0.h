#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_A1AB9DF2E917728B.h"
#include "unitysdk/Struct_2_395B739A1AC58399_1.h"

namespace UnityEngine { class Transform; }

#define CLASS_5_86636D0FBE7FFFC0_METHOD_5_4DE904980F091FA2_OFFSET UNITYSDK_OFFSET(0x11792270)
#define CLASS_5_86636D0FBE7FFFC0_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x11792390)
#define CLASS_5_86636D0FBE7FFFC0__CTOR_OFFSET UNITYSDK_OFFSET(0x11792370)
#define CLASS_5_86636D0FBE7FFFC0___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x117924B0)

inline static constexpr unsigned int Class_5_86636D0FBE7FFFC0_TypeDefinitionIndex = 60226;

class Class_5_86636D0FBE7FFFC0 : public ::Class_4_A1AB9DF2E917728B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_86636D0FBE7FFFC0__CTOR_OFFSET))(this);
	}

	static ::Class_5_86636D0FBE7FFFC0* Method_5_4DE904980F091FA2(::System::Single a1, ::Struct_2_395B739A1AC58399_1 a2)
	{
		return ((::Class_5_86636D0FBE7FFFC0*(*)(::System::Single, ::Struct_2_395B739A1AC58399_1))((::PBYTE)hIl2Cpp + CLASS_5_86636D0FBE7FFFC0_METHOD_5_4DE904980F091FA2_OFFSET))(a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_86636D0FBE7FFFC0_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_86636D0FBE7FFFC0___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, P0);
	}
};
