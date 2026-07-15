#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_12C323E8C448EAFE_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1B4506E0)
#define CLASS_3_12C323E8C448EAFE_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1B4506A0)
#define CLASS_3_12C323E8C448EAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4506D0)

inline static constexpr unsigned int Class_3_12C323E8C448EAFE_TypeDefinitionIndex = 22079;

class Class_3_12C323E8C448EAFE : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::FormatString Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12C323E8C448EAFE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_12C323E8C448EAFE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_12C323E8C448EAFE*&))((::PBYTE)hIl2Cpp + CLASS_3_12C323E8C448EAFE_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_12C323E8C448EAFE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_12C323E8C448EAFE*))((::PBYTE)hIl2Cpp + CLASS_3_12C323E8C448EAFE_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
