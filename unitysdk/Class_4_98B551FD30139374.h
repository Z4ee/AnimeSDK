#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_98B551FD30139374_METHOD_4_0EE9A132E4098A12_OFFSET UNITYSDK_OFFSET(0x1DDE1D10)
#define CLASS_4_98B551FD30139374_METHOD_4_BE6C7711392DA568_OFFSET UNITYSDK_OFFSET(0x1DDE1D50)
#define CLASS_4_98B551FD30139374__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE1D40)

inline static constexpr unsigned int Class_4_98B551FD30139374_TypeDefinitionIndex = 22193;

class Class_4_98B551FD30139374 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* KEFNJGCFHGH; // 0x18
	::System::String* PFDLMJILKBK; // 0x20
	::System::Boolean AHEEAFKFALM; // 0x28
	::System::Boolean CLJEBKODGHK; // 0x29
	::System::Single MHKKCHLPABL; // 0x2C
	::System::Single HIDPIGLKPFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_98B551FD30139374__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_0EE9A132E4098A12(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_98B551FD30139374*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_98B551FD30139374*&))((::PBYTE)hIl2Cpp + CLASS_4_98B551FD30139374_METHOD_4_0EE9A132E4098A12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BE6C7711392DA568(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_98B551FD30139374* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_98B551FD30139374*))((::PBYTE)hIl2Cpp + CLASS_4_98B551FD30139374_METHOD_4_BE6C7711392DA568_OFFSET))(a1, a2);
	}
};
