#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A509A996D269C6F2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDE4C0)

inline static constexpr unsigned int Class_1_A509A996D269C6F2_2_TypeDefinitionIndex = 50226;

class Class_1_A509A996D269C6F2_2 : public ::System::Object
{
public:
	::System::String* InviteCode; // 0x10
	::System::UInt32 InviteCntCur; // 0x18
	::System::UInt32 InviteCntMax; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A509A996D269C6F2_2__CTOR_OFFSET))(this);
	}
};
