#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Patch/RemoteType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_57F7B863E140D583__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEEE50)

inline static constexpr unsigned int Class_1_57F7B863E140D583_TypeDefinitionIndex = 80861;

class Class_1_57F7B863E140D583 : public ::System::Object
{
public:
	::System::String* INIPHBJBIOE; // 0x10
	::System::String* DJNKMHHLKHM; // 0x18
	::System::UInt64 BIHIFGPMHAH; // 0x20
	::RPG::Client::Patch::RemoteType ALOJFEAPKHC; // 0x28
	::System::Int64 COIHCPBGBPA; // 0x30
	::System::UInt64 APGOMHPJMEC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57F7B863E140D583__CTOR_OFFSET))(this);
	}
};
