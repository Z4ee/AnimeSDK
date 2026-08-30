#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C3183153408A386B.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"

class Class_2_EAA478112055D9A1;
namespace RPG::GameCore { class FreeStyleController; }
namespace System { class String; }

#define CLASS_2_EAA478112055D9A1_CLASS_2_751EB263B781FA51_METHOD_2_A515B6CEE5CF7274_OFFSET UNITYSDK_OFFSET(0xC384B50)
#define CLASS_2_EAA478112055D9A1_CLASS_2_751EB263B781FA51__CTOR_OFFSET UNITYSDK_OFFSET(0xC3832F0)

inline static constexpr unsigned int Class_2_EAA478112055D9A1_Class_2_751EB263B781FA51_TypeDefinitionIndex = 57439;

class Class_2_EAA478112055D9A1_Class_2_751EB263B781FA51 : public ::Class_1_C3183153408A386B
{
public:
	::System::String* JFAAAMANCDA; // 0x10
	::Struct_2_D3B84DD3734B83D6 HMBJNEIEIJK; // 0x18

	::System::Void _ctor(::Class_2_EAA478112055D9A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_EAA478112055D9A1*))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_CLASS_2_751EB263B781FA51__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_A515B6CEE5CF7274(::RPG::GameCore::FreeStyleController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + CLASS_2_EAA478112055D9A1_CLASS_2_751EB263B781FA51_METHOD_2_A515B6CEE5CF7274_OFFSET))(this, a1);
	}
};
