#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_BF8338B17E7527E3_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1CF4B240)
#define CLASS_3_BF8338B17E7527E3_METHOD_3_9B7C85FBDDFDAE6D_OFFSET UNITYSDK_OFFSET(0x1CF4B290)
#define CLASS_3_BF8338B17E7527E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF4B280)

inline static constexpr unsigned int Class_3_BF8338B17E7527E3_TypeDefinitionIndex = 22338;

class Class_3_BF8338B17E7527E3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF8338B17E7527E3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF8338B17E7527E3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF8338B17E7527E3*&))((::PBYTE)hIl2Cpp + CLASS_3_BF8338B17E7527E3_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B7C85FBDDFDAE6D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF8338B17E7527E3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF8338B17E7527E3*))((::PBYTE)hIl2Cpp + CLASS_3_BF8338B17E7527E3_METHOD_3_9B7C85FBDDFDAE6D_OFFSET))(a1, a2);
	}
};
