#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_A79C3B1527350D28_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1B26AC50)
#define CLASS_3_A79C3B1527350D28_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1B26AC10)
#define CLASS_3_A79C3B1527350D28__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26AC40)

inline static constexpr unsigned int Class_3_A79C3B1527350D28_TypeDefinitionIndex = 21965;

class Class_3_A79C3B1527350D28 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::ElationPointModifyFunction Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A79C3B1527350D28__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A79C3B1527350D28*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A79C3B1527350D28*&))((::PBYTE)hIl2Cpp + CLASS_3_A79C3B1527350D28_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A79C3B1527350D28* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A79C3B1527350D28*))((::PBYTE)hIl2Cpp + CLASS_3_A79C3B1527350D28_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
