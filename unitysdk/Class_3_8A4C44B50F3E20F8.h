#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_8A4C44B50F3E20F8_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x1C8520F0)
#define CLASS_3_8A4C44B50F3E20F8_METHOD_3_2D7F1F3EE65089A0_OFFSET UNITYSDK_OFFSET(0x1C8520B0)
#define CLASS_3_8A4C44B50F3E20F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8520E0)

inline static constexpr unsigned int Class_3_8A4C44B50F3E20F8_TypeDefinitionIndex = 21207;

class Class_3_8A4C44B50F3E20F8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* IOPKGDPHPJN; // 0x18
	::RPG::GameCore::DynamicString* HCKELNILFPJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8A4C44B50F3E20F8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D7F1F3EE65089A0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8A4C44B50F3E20F8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8A4C44B50F3E20F8*&))((::PBYTE)hIl2Cpp + CLASS_3_8A4C44B50F3E20F8_METHOD_3_2D7F1F3EE65089A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8A4C44B50F3E20F8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8A4C44B50F3E20F8*))((::PBYTE)hIl2Cpp + CLASS_3_8A4C44B50F3E20F8_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
