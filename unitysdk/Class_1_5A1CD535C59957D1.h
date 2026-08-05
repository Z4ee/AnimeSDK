#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace System { class String; }

#define CLASS_1_5A1CD535C59957D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1157C360)

inline static constexpr unsigned int Class_1_5A1CD535C59957D1_TypeDefinitionIndex = 56280;

class Class_1_5A1CD535C59957D1 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::UnityEngine::Timeline::KFrameFieldType Field_1_1; // 0x18
	::System::Single Field_1_0; // 0x1C

	::System::Void _ctor(::UnityEngine::Timeline::KFrameFieldType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::KFrameFieldType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5A1CD535C59957D1__CTOR_OFFSET))(this, a1, a2);
	}
};
