#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_36857654F4A216AC_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x103D3220)
#define CLASS_3_36857654F4A216AC_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x103D3260)
#define CLASS_3_36857654F4A216AC__CTOR_OFFSET UNITYSDK_OFFSET(0x103D3250)

inline static constexpr unsigned int Class_3_36857654F4A216AC_TypeDefinitionIndex = 22899;

class Class_3_36857654F4A216AC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::FormatString Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36857654F4A216AC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_36857654F4A216AC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_36857654F4A216AC*&))((::PBYTE)hIl2Cpp + CLASS_3_36857654F4A216AC_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_36857654F4A216AC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_36857654F4A216AC*))((::PBYTE)hIl2Cpp + CLASS_3_36857654F4A216AC_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
