#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_53A1511C498CDC69_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1D2D54D0)
#define CLASS_3_53A1511C498CDC69_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1D2D5490)
#define CLASS_3_53A1511C498CDC69__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D54C0)

inline static constexpr unsigned int Class_3_53A1511C498CDC69_TypeDefinitionIndex = 22784;

class Class_3_53A1511C498CDC69 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x18
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x20
	::Enum_3_DB663931210BBC27 FKCKKFALPBK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53A1511C498CDC69__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_53A1511C498CDC69*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_53A1511C498CDC69*&))((::PBYTE)hIl2Cpp + CLASS_3_53A1511C498CDC69_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_53A1511C498CDC69* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_53A1511C498CDC69*))((::PBYTE)hIl2Cpp + CLASS_3_53A1511C498CDC69_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
