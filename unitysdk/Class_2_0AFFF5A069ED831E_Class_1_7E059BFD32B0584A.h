#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Object.h"

class Class_2_0AFFF5A069ED831E;
namespace MoleMole { class UIGeneralBattleQuickTeamWidgetController_Context; }
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_0AFFF5A069ED831E_CLASS_1_7E059BFD32B0584A_METHOD_1_35052F64F3F99691_OFFSET UNITYSDK_OFFSET(0x10DD35A0)
#define CLASS_2_0AFFF5A069ED831E_CLASS_1_7E059BFD32B0584A_METHOD_1_C40CF6A156CA0938_OFFSET UNITYSDK_OFFSET(0x10DD3530)
#define CLASS_2_0AFFF5A069ED831E_CLASS_1_7E059BFD32B0584A__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD3520)

inline static constexpr unsigned int Class_2_0AFFF5A069ED831E_Class_1_7E059BFD32B0584A_TypeDefinitionIndex = 49518;

class Class_2_0AFFF5A069ED831E_Class_1_7E059BFD32B0584A : public ::System::Object
{
public:
	::Class_2_0AFFF5A069ED831E* Field_1_0; // 0x10
	::Class_2_F16D73323D71766B<::MoleMole::UIGeneralBattleQuickTeamWidgetController_Context*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AFFF5A069ED831E_CLASS_1_7E059BFD32B0584A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C40CF6A156CA0938(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_0AFFF5A069ED831E_CLASS_1_7E059BFD32B0584A_METHOD_1_C40CF6A156CA0938_OFFSET))(this, a1);
	}

	::MoleMole::UIGeneralBattleQuickTeamWidgetController_Context* Method_1_35052F64F3F99691()
	{
		return ((::MoleMole::UIGeneralBattleQuickTeamWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AFFF5A069ED831E_CLASS_1_7E059BFD32B0584A_METHOD_1_35052F64F3F99691_OFFSET))(this);
	}
};
