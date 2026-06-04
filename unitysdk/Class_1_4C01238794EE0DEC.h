#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Patch/PatchType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4C01238794EE0DEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x119172E0)
#define CLASS_1_4C01238794EE0DEC__CTOR_OFFSET UNITYSDK_OFFSET(0x11917350)
#define CLASS_1_4C01238794EE0DEC___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11917360)

inline static constexpr unsigned int Class_1_4C01238794EE0DEC_TypeDefinitionIndex = 74428;

class Class_1_4C01238794EE0DEC : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::UInt64 Field_1_5; // 0x38
	::RPG::Client::Patch::PatchType Field_1_6; // 0x40
	::System::UInt64 Field_1_7; // 0x48
	::System::UInt64 Field_1_8; // 0x50
	::System::UInt64 Field_1_9; // 0x58
	::System::UInt64 Field_1_10; // 0x60
	::System::UInt64 Field_1_11; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C01238794EE0DEC__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C01238794EE0DEC_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C01238794EE0DEC___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
