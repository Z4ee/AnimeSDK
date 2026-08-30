#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystemV2Space { class EnvProfileV2; }
namespace System { class String; }

#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE7CC10)
#define CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS26_0__LOADPROFILE_B__0_OFFSET UNITYSDK_OFFSET(0xBE7CC20)

inline static constexpr unsigned int Class_2_B3BCC9AA95120603___c__DisplayClass26_0_TypeDefinitionIndex = 49855;

class Class_2_B3BCC9AA95120603___c__DisplayClass26_0 : public ::System::Object
{
public:
	::System::String* path; // 0x10
	::EnviromentSystemV2Space::EnvProfileV2* ret; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadProfile_b__0(::EnviromentSystemV2Space::EnvProfileV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + CLASS_2_B3BCC9AA95120603___C__DISPLAYCLASS26_0__LOADPROFILE_B__0_OFFSET))(this, a1);
	}
};
