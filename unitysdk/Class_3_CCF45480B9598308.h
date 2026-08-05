#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9DCE2FC33F67E8A2.h"

class Class_1_E5B7864412CDC074;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define CLASS_3_CCF45480B9598308_METHOD_3_888EAF38C5DF027B_OFFSET UNITYSDK_OFFSET(0x10F2B9C0)
#define CLASS_3_CCF45480B9598308_METHOD_3_BAC621C4B92C6604_OFFSET UNITYSDK_OFFSET(0x10F2B9D0)
#define CLASS_3_CCF45480B9598308__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2B9A0)

inline static constexpr unsigned int Class_3_CCF45480B9598308_TypeDefinitionIndex = 86215;

class Class_3_CCF45480B9598308 : public ::Class_2_9DCE2FC33F67E8A2
{
public:
	::MoleMole::HollowChessboard::HollowEntity* Field_3_0; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowEntity* a1, ::MoleMole::UIHollowChessboard3DModelController* a2, ::Class_1_E5B7864412CDC074* a3, ::MoleMole::UIHollowMainPageController* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::UIHollowChessboard3DModelController*, ::Class_1_E5B7864412CDC074*, ::MoleMole::UIHollowMainPageController*))((::PBYTE)hIl2Cpp + CLASS_3_CCF45480B9598308__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_888EAF38C5DF027B(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CCF45480B9598308_METHOD_3_888EAF38C5DF027B_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_3_BAC621C4B92C6604()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CCF45480B9598308_METHOD_3_BAC621C4B92C6604_OFFSET))(this);
	}
};
