#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_E0C0E5A2FEE22B08_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x19D5E100)
#define CLASS_3_E0C0E5A2FEE22B08_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x19D5E080)
#define CLASS_3_E0C0E5A2FEE22B08__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5E0D0)

inline static constexpr unsigned int Class_3_E0C0E5A2FEE22B08_TypeDefinitionIndex = 20306;

class Class_3_E0C0E5A2FEE22B08 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::UInt32 Field_3_2; // 0x28
	::RPG::GameCore::ChenLingFesItemFilterType Field_3_3; // 0x2C
	::System::UInt32 Field_3_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0C0E5A2FEE22B08__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E0C0E5A2FEE22B08*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E0C0E5A2FEE22B08*&))((::PBYTE)hIl2Cpp + CLASS_3_E0C0E5A2FEE22B08_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E0C0E5A2FEE22B08* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E0C0E5A2FEE22B08*))((::PBYTE)hIl2Cpp + CLASS_3_E0C0E5A2FEE22B08_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
