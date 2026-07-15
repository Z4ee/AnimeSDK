#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Object; }

#define LOCALAMBIENTVOLUME___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA84C0)
#define LOCALAMBIENTVOLUME___C__DISPLAYCLASS1_0__UNSERIALIZEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x18DAA4A0)

inline static constexpr unsigned int LocalAmbientVolume___c__DisplayClass1_0_TypeDefinitionIndex = 45676;

class LocalAmbientVolume___c__DisplayClass1_0 : public ::System::Object
{
public:
	::UnityEngine::MeshFilter* mf; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME___C__DISPLAYCLASS1_0__UNSERIALIZEASYNC_B__0_OFFSET))(this, a1);
	}
};
