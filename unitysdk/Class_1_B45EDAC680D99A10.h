#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F23B38E9DDCD5F0A;
namespace FlatBuffers { class ByteBuffer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B45EDAC680D99A10__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C0270)

inline static constexpr unsigned int Class_1_B45EDAC680D99A10_TypeDefinitionIndex = 26373;

class Class_1_B45EDAC680D99A10 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Action_1<::FlatBuffers::ByteBuffer*>* Field_1_0; // 0x20
	::System::Action_1<::Class_1_F23B38E9DDCD5F0A*>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B45EDAC680D99A10__CTOR_OFFSET))(this);
	}
};
