#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_D20C39A612656926_METHOD_3_481800E2ED22AD35_OFFSET UNITYSDK_OFFSET(0x18F89EA0)
#define CLASS_3_D20C39A612656926_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x18F89F20)
#define CLASS_3_D20C39A612656926__CTOR_OFFSET UNITYSDK_OFFSET(0x18F89EF0)

inline static constexpr unsigned int Class_3_D20C39A612656926_TypeDefinitionIndex = 21913;

class Class_3_D20C39A612656926 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DamateTextFontStyle Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D20C39A612656926__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_481800E2ED22AD35(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D20C39A612656926*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D20C39A612656926*&))((::PBYTE)hIl2Cpp + CLASS_3_D20C39A612656926_METHOD_3_481800E2ED22AD35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D20C39A612656926* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D20C39A612656926*))((::PBYTE)hIl2Cpp + CLASS_3_D20C39A612656926_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
