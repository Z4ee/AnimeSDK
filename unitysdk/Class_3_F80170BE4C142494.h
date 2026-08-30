#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_F80170BE4C142494_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1C7BF390)
#define CLASS_3_F80170BE4C142494_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1C7BF3D0)
#define CLASS_3_F80170BE4C142494__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BF3C0)

inline static constexpr unsigned int Class_3_F80170BE4C142494_TypeDefinitionIndex = 10182;

class Class_3_F80170BE4C142494 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
	::System::Boolean OKHPAEJAPKG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F80170BE4C142494__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F80170BE4C142494*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F80170BE4C142494*&))((::PBYTE)hIl2Cpp + CLASS_3_F80170BE4C142494_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F80170BE4C142494* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F80170BE4C142494*))((::PBYTE)hIl2Cpp + CLASS_3_F80170BE4C142494_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
