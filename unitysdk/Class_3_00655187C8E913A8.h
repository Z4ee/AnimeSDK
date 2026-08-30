#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageCounterStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_00655187C8E913A8_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1C8E96D0)
#define CLASS_3_00655187C8E913A8_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1C8E9710)
#define CLASS_3_00655187C8E913A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E9700)

inline static constexpr unsigned int Class_3_00655187C8E913A8_TypeDefinitionIndex = 22911;

class Class_3_00655187C8E913A8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DamageCounterStyle GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00655187C8E913A8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_00655187C8E913A8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_00655187C8E913A8*&))((::PBYTE)hIl2Cpp + CLASS_3_00655187C8E913A8_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_00655187C8E913A8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_00655187C8E913A8*))((::PBYTE)hIl2Cpp + CLASS_3_00655187C8E913A8_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
