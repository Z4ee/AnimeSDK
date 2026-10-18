#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_3.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_96AB00172E651941_METHOD_2_C84679B76D518F24_OFFSET UNITYSDK_OFFSET(0x1D7DF730)
#define CLASS_2_96AB00172E651941__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DF810)

inline static constexpr unsigned int Class_2_96AB00172E651941_TypeDefinitionIndex = 22780;

class Class_2_96AB00172E651941 : public ::RPG::GameCore::JsonConfig
{
public:
	::Enum_3_ED790DAC948A65A9_3 BJHMJLEBMGO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96AB00172E651941__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_C84679B76D518F24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_96AB00172E651941*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_96AB00172E651941*&))((::PBYTE)hIl2Cpp + CLASS_2_96AB00172E651941_METHOD_2_C84679B76D518F24_OFFSET))(a1, a2);
	}
};
