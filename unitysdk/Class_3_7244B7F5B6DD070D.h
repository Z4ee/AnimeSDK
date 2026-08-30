#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamateTextFontStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_7244B7F5B6DD070D_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1C76EF20)
#define CLASS_3_7244B7F5B6DD070D_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1C76EF60)
#define CLASS_3_7244B7F5B6DD070D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C76EF50)

inline static constexpr unsigned int Class_3_7244B7F5B6DD070D_TypeDefinitionIndex = 22912;

class Class_3_7244B7F5B6DD070D : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DamateTextFontStyle GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7244B7F5B6DD070D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7244B7F5B6DD070D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7244B7F5B6DD070D*&))((::PBYTE)hIl2Cpp + CLASS_3_7244B7F5B6DD070D_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7244B7F5B6DD070D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7244B7F5B6DD070D*))((::PBYTE)hIl2Cpp + CLASS_3_7244B7F5B6DD070D_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
