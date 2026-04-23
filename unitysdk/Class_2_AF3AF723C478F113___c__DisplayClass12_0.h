#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Object; }

#define CLASS_2_AF3AF723C478F113___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA5E10)
#define CLASS_2_AF3AF723C478F113___C__DISPLAYCLASS12_0__UNSERIALIZEASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x12AA61F0)

inline static constexpr unsigned int Class_2_AF3AF723C478F113___c__DisplayClass12_0_TypeDefinitionIndex = 45640;

class Class_2_AF3AF723C478F113___c__DisplayClass12_0 : public ::System::Object
{
public:
	::UnityEngine::MeshFilter* mf; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__2(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113___C__DISPLAYCLASS12_0__UNSERIALIZEASYNC_B__2_OFFSET))(this, m);
	}
};
