#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1E5D0351BE7022BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B2210)

inline static constexpr unsigned int Class_1_1E5D0351BE7022BB_TypeDefinitionIndex = 49372;

class Class_1_1E5D0351BE7022BB : public ::System::Object
{
public:
	::System::String* ConnectedPath; // 0x10
	::Il2CppArray<::System::Single>* Direction; // 0x18
	::System::String* Id; // 0x20
	::System::String* Description; // 0x28
	::Il2CppArray<::System::Single>* LocalPos; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E5D0351BE7022BB__CTOR_OFFSET))(this);
	}
};
