#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UILineupSelectContext_OnGetRoleSelectContextDel; }
namespace MoleMole { class UIRoleSelectPageContext; }

#define CLASS_1_FBF049A765C0C824_CLASS_1_CAD5827FE3B411E0_METHOD_1_4312FC5DE1D0E1D3_OFFSET UNITYSDK_OFFSET(0x14496C00)
#define CLASS_1_FBF049A765C0C824_CLASS_1_CAD5827FE3B411E0__CTOR_OFFSET UNITYSDK_OFFSET(0x14496BF0)

inline static constexpr unsigned int Class_1_FBF049A765C0C824_Class_1_CAD5827FE3B411E0_TypeDefinitionIndex = 70947;

class Class_1_FBF049A765C0C824_Class_1_CAD5827FE3B411E0 : public ::System::Object
{
public:
	::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_CAD5827FE3B411E0__CTOR_OFFSET))(this);
	}

	::MoleMole::UIRoleSelectPageContext* Method_1_4312FC5DE1D0E1D3(::System::Int32 a1, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* a2)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_CAD5827FE3B411E0_METHOD_1_4312FC5DE1D0E1D3_OFFSET))(this, a1, a2);
	}
};
