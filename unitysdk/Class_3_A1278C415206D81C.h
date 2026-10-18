#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialB51RacingGameButtonType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A1278C415206D81C_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1CDCFEE0)
#define CLASS_3_A1278C415206D81C_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1CDCFF20)
#define CLASS_3_A1278C415206D81C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCFF10)

inline static constexpr unsigned int Class_3_A1278C415206D81C_TypeDefinitionIndex = 24389;

class Class_3_A1278C415206D81C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TutorialB51RacingGameButtonType PGOHOFMMIAJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A1278C415206D81C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A1278C415206D81C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A1278C415206D81C*&))((::PBYTE)hIl2Cpp + CLASS_3_A1278C415206D81C_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A1278C415206D81C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A1278C415206D81C*))((::PBYTE)hIl2Cpp + CLASS_3_A1278C415206D81C_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
