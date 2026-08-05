#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F23B38E9DDCD5F0A;
namespace FlatBuffers { class ByteBuffer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B45EDAC680D99A10__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE16A70)

inline static constexpr unsigned int Class_1_B45EDAC680D99A10_TypeDefinitionIndex = 29359;

class Class_1_B45EDAC680D99A10 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Action_1<::Class_1_F23B38E9DDCD5F0A*>* Field_1_0; // 0x18
	::System::Action_1<::FlatBuffers::ByteBuffer*>* Field_1_2; // 0x20
	::System::Action* Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45EDAC680D99A10__CTOR_OFFSET))(this);
	}
};
