#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_250DE1D032671F25;
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_250DE1D032671F25___C__DISPLAYCLASS31_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x169E5960)
#define CLASS_2_250DE1D032671F25___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169E2190)

inline static constexpr unsigned int Class_2_250DE1D032671F25___c__DisplayClass31_0_TypeDefinitionIndex = 70499;

class Class_2_250DE1D032671F25___c__DisplayClass31_0 : public ::System::Object
{
public:
	::UnityEngine::Transform* parent; // 0x10
	::Class_2_250DE1D032671F25* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_250DE1D032671F25___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Void _AsyncLoad_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_250DE1D032671F25___C__DISPLAYCLASS31_0__ASYNCLOAD_B__0_OFFSET))(this, a1);
	}
};
