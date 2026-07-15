#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_B2714ECCB11DEF92_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1BD529C0)
#define CLASS_3_B2714ECCB11DEF92_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1BD52A00)
#define CLASS_3_B2714ECCB11DEF92__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD529F0)

inline static constexpr unsigned int Class_3_B2714ECCB11DEF92_TypeDefinitionIndex = 22342;

class Class_3_B2714ECCB11DEF92 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DamateTextFontStyle Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2714ECCB11DEF92__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B2714ECCB11DEF92*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B2714ECCB11DEF92*&))((::PBYTE)hIl2Cpp + CLASS_3_B2714ECCB11DEF92_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B2714ECCB11DEF92* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B2714ECCB11DEF92*))((::PBYTE)hIl2Cpp + CLASS_3_B2714ECCB11DEF92_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
