#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_DB032533D26531DD_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1B3F6340)
#define CLASS_3_DB032533D26531DD_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x1B3F6380)
#define CLASS_3_DB032533D26531DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3F6370)

inline static constexpr unsigned int Class_3_DB032533D26531DD_TypeDefinitionIndex = 21655;

class Class_3_DB032533D26531DD : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FloatCurve* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB032533D26531DD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB032533D26531DD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB032533D26531DD*&))((::PBYTE)hIl2Cpp + CLASS_3_DB032533D26531DD_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB032533D26531DD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB032533D26531DD*))((::PBYTE)hIl2Cpp + CLASS_3_DB032533D26531DD_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};
