#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/OrbitTargetPosType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_2_E5D38AB31F1F266B_METHOD_2_BB96740FC520E8ED_OFFSET UNITYSDK_OFFSET(0x184A2CB0)
#define CLASS_2_E5D38AB31F1F266B__CTOR_OFFSET UNITYSDK_OFFSET(0x184A3080)

inline static constexpr unsigned int Class_2_E5D38AB31F1F266B_TypeDefinitionIndex = 22037;

class Class_2_E5D38AB31F1F266B : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_2_0; // 0x10
	::RPG::GameCore::DynamicFloat* Field_2_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_2_2; // 0x20
	::RPG::GameCore::DynamicFloat* Field_2_3; // 0x28
	::RPG::GameCore::DynamicFloat* Field_2_4; // 0x30
	::RPG::GameCore::DynamicFloat* Field_2_5; // 0x38
	::RPG::GameCore::OrbitTargetPosType Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5D38AB31F1F266B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_BB96740FC520E8ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_E5D38AB31F1F266B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_E5D38AB31F1F266B*&))((::PBYTE)hIl2Cpp + CLASS_2_E5D38AB31F1F266B_METHOD_2_BB96740FC520E8ED_OFFSET))(a1, a2);
	}
};
