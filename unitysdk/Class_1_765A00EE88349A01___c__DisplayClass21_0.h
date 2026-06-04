#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class VolumetricLight; }

#define CLASS_1_765A00EE88349A01___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA634AB0)
#define CLASS_1_765A00EE88349A01___C__DISPLAYCLASS21_0__UNSERIALIZEASYNC_B__4_OFFSET UNITYSDK_OFFSET(0xA6355C0)

inline static constexpr unsigned int Class_1_765A00EE88349A01___c__DisplayClass21_0_TypeDefinitionIndex = 46256;

class Class_1_765A00EE88349A01___c__DisplayClass21_0 : public ::System::Object
{
public:
	::UnityEngine::VolumetricLight* vlight; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__4(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_765A00EE88349A01___C__DISPLAYCLASS21_0__UNSERIALIZEASYNC_B__4_OFFSET))(this, a1);
	}
};
