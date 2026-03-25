#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_947F5BB3E2AFC4CE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8DFE030)
#define CLASS_1_947F5BB3E2AFC4CE__CTOR_OFFSET UNITYSDK_OFFSET(0x8DFE020)

inline static constexpr unsigned int Class_1_947F5BB3E2AFC4CE_TypeDefinitionIndex = 39304;

class Class_1_947F5BB3E2AFC4CE : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_3; // 0x18
	::System::String* Field_1_0; // 0x20
	::UnityEngine::Timeline::TrackAsset* Field_1_2; // 0x28
	::UnityEngine::GameObject* Field_1_4; // 0x30

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_947F5BB3E2AFC4CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_947F5BB3E2AFC4CE__CTOR_1_OFFSET))(this, a1, a2);
	}
};
