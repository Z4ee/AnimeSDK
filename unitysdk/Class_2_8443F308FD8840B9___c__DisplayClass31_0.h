#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8443F308FD8840B9;
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8443F308FD8840B9___C__DISPLAYCLASS31_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x8F7E5C0)
#define CLASS_2_8443F308FD8840B9___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F7E5B0)

inline static constexpr unsigned int Class_2_8443F308FD8840B9___c__DisplayClass31_0_TypeDefinitionIndex = 68014;

class Class_2_8443F308FD8840B9___c__DisplayClass31_0 : public ::System::Object
{
public:
	::Class_2_8443F308FD8840B9* __4__this; // 0x10
	::UnityEngine::Transform* parent; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8443F308FD8840B9___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Void _AsyncLoad_b__0(::UnityEngine::Object* prefabObj)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8443F308FD8840B9___C__DISPLAYCLASS31_0__ASYNCLOAD_B__0_OFFSET))(this, prefabObj);
	}
};
