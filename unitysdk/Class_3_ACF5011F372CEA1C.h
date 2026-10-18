#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_4.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_ACF5011F372CEA1C_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1D269BF0)
#define CLASS_3_ACF5011F372CEA1C_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1D269C30)
#define CLASS_3_ACF5011F372CEA1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D269C20)

inline static constexpr unsigned int Class_3_ACF5011F372CEA1C_TypeDefinitionIndex = 23164;

class Class_3_ACF5011F372CEA1C : public ::RPG::GameCore::TaskConfig
{
public:
	::Enum_3_ED790DAC948A65A9_4 GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACF5011F372CEA1C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_ACF5011F372CEA1C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_ACF5011F372CEA1C*&))((::PBYTE)hIl2Cpp + CLASS_3_ACF5011F372CEA1C_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_ACF5011F372CEA1C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_ACF5011F372CEA1C*))((::PBYTE)hIl2Cpp + CLASS_3_ACF5011F372CEA1C_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
