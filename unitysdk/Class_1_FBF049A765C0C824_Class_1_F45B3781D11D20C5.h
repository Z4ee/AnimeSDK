#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UILineupSelectContext_OnGetRoleSelectContextDel; }
namespace MoleMole { class UIRoleSelectPageContext; }

#define CLASS_1_FBF049A765C0C824_CLASS_1_F45B3781D11D20C5_METHOD_1_3B754366988F50D0_OFFSET UNITYSDK_OFFSET(0x141A74C0)
#define CLASS_1_FBF049A765C0C824_CLASS_1_F45B3781D11D20C5__CTOR_OFFSET UNITYSDK_OFFSET(0x141A74B0)

inline static constexpr unsigned int Class_1_FBF049A765C0C824_Class_1_F45B3781D11D20C5_TypeDefinitionIndex = 45203;

class Class_1_FBF049A765C0C824_Class_1_F45B3781D11D20C5 : public ::System::Object
{
public:
	::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_F45B3781D11D20C5__CTOR_OFFSET))(this);
	}

	::MoleMole::UIRoleSelectPageContext* Method_1_3B754366988F50D0(::System::Int32 a1, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* a2)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_F45B3781D11D20C5_METHOD_1_3B754366988F50D0_OFFSET))(this, a1, a2);
	}
};
