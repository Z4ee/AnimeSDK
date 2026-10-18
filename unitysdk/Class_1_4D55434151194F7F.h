#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4D55434151194F7F__CTOR_OFFSET UNITYSDK_OFFSET(0xC49D6F0)

inline static constexpr unsigned int Class_1_4D55434151194F7F_TypeDefinitionIndex = 48929;

class Class_1_4D55434151194F7F : public ::System::Object
{
public:
	::System::String* Description; // 0x10
	::System::String* Name; // 0x18
	::System::String* ConnectedPath; // 0x20
	::Il2CppArray<::System::Single>* Direction; // 0x28
	::Il2CppArray<::System::Single>* LocalPos; // 0x30
	::System::String* Id; // 0x38
	::System::Nullable_1<::System::Single> Radius; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D55434151194F7F__CTOR_OFFSET))(this);
	}
};
