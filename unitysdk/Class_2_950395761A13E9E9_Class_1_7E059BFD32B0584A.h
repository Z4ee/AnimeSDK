#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Object.h"

class Class_2_950395761A13E9E9;
namespace MoleMole { class UIGeneralBattleQuickTeamWidgetController_Context; }
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_950395761A13E9E9_CLASS_1_7E059BFD32B0584A_METHOD_1_B7B0517F35ABEFDA_OFFSET UNITYSDK_OFFSET(0x185EE2D0)
#define CLASS_2_950395761A13E9E9_CLASS_1_7E059BFD32B0584A_METHOD_1_C40CF6A156CA0938_OFFSET UNITYSDK_OFFSET(0x185EE260)
#define CLASS_2_950395761A13E9E9_CLASS_1_7E059BFD32B0584A__CTOR_OFFSET UNITYSDK_OFFSET(0x185EE250)

inline static constexpr unsigned int Class_2_950395761A13E9E9_Class_1_7E059BFD32B0584A_TypeDefinitionIndex = 76036;

class Class_2_950395761A13E9E9_Class_1_7E059BFD32B0584A : public ::System::Object
{
public:
	::Class_2_950395761A13E9E9* Field_1_1; // 0x10
	::Class_2_F16D73323D71766B<::MoleMole::UIGeneralBattleQuickTeamWidgetController_Context*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_950395761A13E9E9_CLASS_1_7E059BFD32B0584A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C40CF6A156CA0938(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_950395761A13E9E9_CLASS_1_7E059BFD32B0584A_METHOD_1_C40CF6A156CA0938_OFFSET))(this, a1);
	}

	::MoleMole::UIGeneralBattleQuickTeamWidgetController_Context* Method_1_B7B0517F35ABEFDA()
	{
		return ((::MoleMole::UIGeneralBattleQuickTeamWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_950395761A13E9E9_CLASS_1_7E059BFD32B0584A_METHOD_1_B7B0517F35ABEFDA_OFFSET))(this);
	}
};
