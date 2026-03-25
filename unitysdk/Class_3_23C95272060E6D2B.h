#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_68C34B5C1C40C2FF.h"
#include "unitysdk/RPG/GameCore/TurnInsertActionConditionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_23C95272060E6D2B_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x16D8EF70)
#define CLASS_3_23C95272060E6D2B_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x16D8EF30)
#define CLASS_3_23C95272060E6D2B__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8EF60)

inline static constexpr unsigned int Class_3_23C95272060E6D2B_TypeDefinitionIndex = 16751;

class Class_3_23C95272060E6D2B : public ::Class_2_68C34B5C1C40C2FF
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x10
	::RPG::GameCore::TurnInsertActionConditionType Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23C95272060E6D2B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_23C95272060E6D2B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_23C95272060E6D2B*&))((::PBYTE)hIl2Cpp + CLASS_3_23C95272060E6D2B_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_23C95272060E6D2B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_23C95272060E6D2B*))((::PBYTE)hIl2Cpp + CLASS_3_23C95272060E6D2B_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
