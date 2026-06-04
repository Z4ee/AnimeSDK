#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Patch/RemoteType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_57F7B863E140D583__CTOR_OFFSET UNITYSDK_OFFSET(0x136A3650)

inline static constexpr unsigned int Class_1_57F7B863E140D583_TypeDefinitionIndex = 74431;

class Class_1_57F7B863E140D583 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt64 Field_1_2; // 0x20
	::RPG::Client::Patch::RemoteType Field_1_3; // 0x28
	::System::UInt64 Field_1_4; // 0x30
	::System::Int64 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57F7B863E140D583__CTOR_OFFSET))(this);
	}
};
