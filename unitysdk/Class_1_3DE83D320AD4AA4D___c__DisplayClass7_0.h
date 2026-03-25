#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A;
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_3DE83D320AD4AA4D___C__DISPLAYCLASS7_0__APPLYFORMATION_B__0_OFFSET UNITYSDK_OFFSET(0x8B7AD00)
#define CLASS_1_3DE83D320AD4AA4D___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8B79DA0)

inline static constexpr unsigned int Class_1_3DE83D320AD4AA4D___c__DisplayClass7_0_TypeDefinitionIndex = 47713;

class Class_1_3DE83D320AD4AA4D___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::GameCore::TransformComponent* pTransCmpt; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ApplyFormation_b__0(::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A* p)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3DE83D320AD4AA4D_Class_1_A4B66D97A840228A*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D___C__DISPLAYCLASS7_0__APPLYFORMATION_B__0_OFFSET))(this, p);
	}
};
