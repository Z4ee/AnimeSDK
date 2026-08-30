#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBtnType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_F24A6B42D13525AC_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1C8F28F0)
#define CLASS_3_F24A6B42D13525AC_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1C8F2940)
#define CLASS_3_F24A6B42D13525AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F2930)

inline static constexpr unsigned int Class_3_F24A6B42D13525AC_TypeDefinitionIndex = 21243;

class Class_3_F24A6B42D13525AC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FiveDimBtnType MBOBPDOAGLL; // 0x18
	::System::Boolean MOKNCFJICIC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F24A6B42D13525AC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F24A6B42D13525AC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F24A6B42D13525AC*&))((::PBYTE)hIl2Cpp + CLASS_3_F24A6B42D13525AC_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F24A6B42D13525AC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F24A6B42D13525AC*))((::PBYTE)hIl2Cpp + CLASS_3_F24A6B42D13525AC_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
