#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1D7B69991D584C07__CTOR_OFFSET UNITYSDK_OFFSET(0x154FD9F0)

inline static constexpr unsigned int Class_1_1D7B69991D584C07_TypeDefinitionIndex = 48062;

class Class_1_1D7B69991D584C07 : public ::System::Object
{
public:
	::System::String* EDMBKLOAKIG; // 0x10
	::System::UInt32 ICDJHJKFGKK; // 0x18
	::System::Single FIJLEDEKBJP; // 0x1C
	::System::UInt32 OKPLNHKELKI; // 0x20
	::System::Int32 HCDEOKNIGKG; // 0x24
	::RPG::Client::TextID NFCHLOMEGFA; // 0x28
	::RPG::Client::TextID PJHMJKEIGOA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D7B69991D584C07__CTOR_OFFSET))(this);
	}
};
