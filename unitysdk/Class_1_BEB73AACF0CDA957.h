#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace System { class String; }

#define CLASS_1_BEB73AACF0CDA957__CTOR_OFFSET UNITYSDK_OFFSET(0x104F0FF0)

inline static constexpr unsigned int Class_1_BEB73AACF0CDA957_TypeDefinitionIndex = 55502;

class Class_1_BEB73AACF0CDA957 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Google::Protobuf::ByteString* Field_1_2; // 0x18
	::RPG::GameCore::ESwitchHandGestureType Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEB73AACF0CDA957__CTOR_OFFSET))(this);
	}
};
