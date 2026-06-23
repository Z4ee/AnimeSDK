#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_25.h"

class Class_1_E5B7864412CDC074;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIHollowMainPageController; }

#define CLASS_2_9DCE2FC33F67E8A2_METHOD_2_9F86FD0988591376_OFFSET UNITYSDK_OFFSET(0x138E7ED0)
#define CLASS_2_9DCE2FC33F67E8A2__CTOR_OFFSET UNITYSDK_OFFSET(0x138E7EC0)

inline static constexpr unsigned int Class_2_9DCE2FC33F67E8A2_TypeDefinitionIndex = 56135;

class Class_2_9DCE2FC33F67E8A2 : public ::Class_1_43BD383C98B4C0C5_25
{
public:
	::MoleMole::UIHollowMainPageController* Field_2_2; // 0x10
	::MoleMole::UIHollowChessboard3DModelController* Field_2_0; // 0x18
	::Class_1_E5B7864412CDC074* Field_2_1; // 0x20

	::System::Void _ctor(::MoleMole::UIHollowChessboard3DModelController* a1, ::Class_1_E5B7864412CDC074* a2, ::MoleMole::UIHollowMainPageController* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessboard3DModelController*, ::Class_1_E5B7864412CDC074*, ::MoleMole::UIHollowMainPageController*))((::PBYTE)hIl2Cpp + CLASS_2_9DCE2FC33F67E8A2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_9F86FD0988591376()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DCE2FC33F67E8A2_METHOD_2_9F86FD0988591376_OFFSET))(this);
	}
};
