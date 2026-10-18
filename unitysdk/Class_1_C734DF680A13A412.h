#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_751;
namespace UnityEngine { class GameObject; }

#define CLASS_1_C734DF680A13A412_EQUALS_OFFSET UNITYSDK_OFFSET(0xBD92630)
#define CLASS_1_C734DF680A13A412_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBD925D0)
#define CLASS_1_C734DF680A13A412_METHOD_1_2F2FD57F59598DAA_OFFSET UNITYSDK_OFFSET(0xBD92510)
#define CLASS_1_C734DF680A13A412_METHOD_1_33BE1421F087867A_OFFSET UNITYSDK_OFFSET(0xBD924A0)
#define CLASS_1_C734DF680A13A412__CTOR_OFFSET UNITYSDK_OFFSET(0xBD92490)

inline static constexpr unsigned int Class_1_C734DF680A13A412_TypeDefinitionIndex = 59760;

class Class_1_C734DF680A13A412 : public ::System::Object
{
public:
	::UnityEngine::GameObject* MDIAMHAKNDK; // 0x10

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C734DF680A13A412__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_C734DF680A13A412* Method_1_33BE1421F087867A(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::Class_1_C734DF680A13A412*(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C734DF680A13A412_METHOD_1_33BE1421F087867A_OFFSET))(a1, a2);
	}

	::RPG::MVector3 Method_1_2F2FD57F59598DAA()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C734DF680A13A412_METHOD_1_2F2FD57F59598DAA_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C734DF680A13A412_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_0_16E4307DCC419505_751* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_751*))((::PBYTE)hIl2Cpp + CLASS_1_C734DF680A13A412_EQUALS_OFFSET))(this, a1);
	}
};
