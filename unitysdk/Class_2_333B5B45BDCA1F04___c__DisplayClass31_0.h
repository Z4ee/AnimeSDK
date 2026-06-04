#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_333B5B45BDCA1F04;
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_333B5B45BDCA1F04___C__DISPLAYCLASS31_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xB9E38B0)
#define CLASS_2_333B5B45BDCA1F04___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB9DFB90)

inline static constexpr unsigned int Class_2_333B5B45BDCA1F04___c__DisplayClass31_0_TypeDefinitionIndex = 68972;

class Class_2_333B5B45BDCA1F04___c__DisplayClass31_0 : public ::System::Object
{
public:
	::Class_2_333B5B45BDCA1F04* __4__this; // 0x10
	::UnityEngine::Transform* parent; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_333B5B45BDCA1F04___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Void _AsyncLoad_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_333B5B45BDCA1F04___C__DISPLAYCLASS31_0__ASYNCLOAD_B__0_OFFSET))(this, a1);
	}
};
