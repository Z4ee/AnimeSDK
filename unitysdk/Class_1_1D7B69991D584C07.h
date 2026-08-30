#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1D7B69991D584C07__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA3E50)

inline static constexpr unsigned int Class_1_1D7B69991D584C07_TypeDefinitionIndex = 48062;

class Class_1_1D7B69991D584C07 : public ::System::Object
{
public:
	::System::String* EDMBKLOAKIG; // 0x10
	::RPG::Client::TextID PJHMJKEIGOA; // 0x18
	::System::UInt32 ICDJHJKFGKK; // 0x28
	::System::Single FIJLEDEKBJP; // 0x2C
	::RPG::Client::TextID NFCHLOMEGFA; // 0x30
	::System::Int32 HCDEOKNIGKG; // 0x40
	::System::UInt32 OKPLNHKELKI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D7B69991D584C07__CTOR_OFFSET))(this);
	}
};
