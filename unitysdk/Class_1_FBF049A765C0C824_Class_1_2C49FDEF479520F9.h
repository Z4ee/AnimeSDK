#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_741;
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { class String; }

#define CLASS_1_FBF049A765C0C824_CLASS_1_2C49FDEF479520F9_METHOD_1_7A63EF348E144DE5_OFFSET UNITYSDK_OFFSET(0x1354FD00)
#define CLASS_1_FBF049A765C0C824_CLASS_1_2C49FDEF479520F9_METHOD_1_80D17D5096B17A35_OFFSET UNITYSDK_OFFSET(0x1354FCC0)
#define CLASS_1_FBF049A765C0C824_CLASS_1_2C49FDEF479520F9_METHOD_1_85BC32599D3264DD_OFFSET UNITYSDK_OFFSET(0x1354FCE0)
#define CLASS_1_FBF049A765C0C824_CLASS_1_2C49FDEF479520F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1354FCB0)

inline static constexpr unsigned int Class_1_FBF049A765C0C824_Class_1_2C49FDEF479520F9_TypeDefinitionIndex = 70949;

class Class_1_FBF049A765C0C824_Class_1_2C49FDEF479520F9 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_741* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_2C49FDEF479520F9__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_80D17D5096B17A35(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_2C49FDEF479520F9_METHOD_1_80D17D5096B17A35_OFFSET))(this, a1);
	}

	::MoleMole::UIActivePropsWindowContext* Method_1_85BC32599D3264DD(::MoleMole::UIActivePropsWindowContext* a1)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_2C49FDEF479520F9_METHOD_1_85BC32599D3264DD_OFFSET))(this, a1);
	}

	::MoleMole::UIRoleSelectPageContext* Method_1_7A63EF348E144DE5(::System::Int32 a1, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* a2)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_2C49FDEF479520F9_METHOD_1_7A63EF348E144DE5_OFFSET))(this, a1, a2);
	}
};
