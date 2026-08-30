#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Patch/PatchType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4C01238794EE0DEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x135216E0)
#define CLASS_1_4C01238794EE0DEC__CTOR_OFFSET UNITYSDK_OFFSET(0x13521750)

inline static constexpr unsigned int Class_1_4C01238794EE0DEC_TypeDefinitionIndex = 80859;

class Class_1_4C01238794EE0DEC : public ::System::Object
{
public:
	::System::String* JMMHFKPJCLJ; // 0x10
	::System::String* APPHMMKOOIJ; // 0x18
	::System::String* IGPEOAOCBEN; // 0x20
	::System::String* CBLAEPMKJJO; // 0x28
	::System::String* OPAEHKAIKFK; // 0x30
	::System::UInt64 HBIGEMPHIFK; // 0x38
	::System::UInt64 LOBIDLPCIEO; // 0x40
	::System::UInt64 MLCDMOKHPFM; // 0x48
	::System::UInt64 ADGBDFABJNP; // 0x50
	::System::UInt64 NHEDLAEBMPM; // 0x58
	::System::UInt64 GOLOBIGLIJM; // 0x60
	::RPG::Client::Patch::PatchType DLIMODEMDOM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C01238794EE0DEC__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C01238794EE0DEC_TOSTRING_OFFSET))(this);
	}
};
