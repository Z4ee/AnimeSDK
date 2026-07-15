#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_866FEB8E1747AA26_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x1B45CB70)
#define CLASS_3_866FEB8E1747AA26_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x1B45CB30)
#define CLASS_3_866FEB8E1747AA26__CTOR_OFFSET UNITYSDK_OFFSET(0x1B45CB60)

inline static constexpr unsigned int Class_3_866FEB8E1747AA26_TypeDefinitionIndex = 19151;

class Class_3_866FEB8E1747AA26 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FateRinCaseBoardTeamType Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_866FEB8E1747AA26__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_866FEB8E1747AA26*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_866FEB8E1747AA26*&))((::PBYTE)hIl2Cpp + CLASS_3_866FEB8E1747AA26_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_866FEB8E1747AA26* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_866FEB8E1747AA26*))((::PBYTE)hIl2Cpp + CLASS_3_866FEB8E1747AA26_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
