#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_963;
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { class String; }

#define CLASS_1_FBF049A765C0C824_CLASS_1_A7A7BE01E62D2654_METHOD_1_80D17D5096B17A35_OFFSET UNITYSDK_OFFSET(0x1BB78B20)
#define CLASS_1_FBF049A765C0C824_CLASS_1_A7A7BE01E62D2654_METHOD_1_85BC32599D3264DD_OFFSET UNITYSDK_OFFSET(0x1BB78AD0)
#define CLASS_1_FBF049A765C0C824_CLASS_1_A7A7BE01E62D2654_METHOD_1_AE6B2976BFDEE38E_OFFSET UNITYSDK_OFFSET(0x1BB78AF0)
#define CLASS_1_FBF049A765C0C824_CLASS_1_A7A7BE01E62D2654__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB76CE0)

inline static constexpr unsigned int Class_1_FBF049A765C0C824_Class_1_A7A7BE01E62D2654_TypeDefinitionIndex = 45199;

class Class_1_FBF049A765C0C824_Class_1_A7A7BE01E62D2654 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_963* Field_1_3; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x19
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_A7A7BE01E62D2654__CTOR_OFFSET))(this);
	}

	::MoleMole::UIActivePropsWindowContext* Method_1_85BC32599D3264DD(::MoleMole::UIActivePropsWindowContext* a1)
	{
		return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_A7A7BE01E62D2654_METHOD_1_85BC32599D3264DD_OFFSET))(this, a1);
	}

	::MoleMole::UIRoleSelectPageContext* Method_1_AE6B2976BFDEE38E(::System::Int32 a1, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* a2)
	{
		return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_A7A7BE01E62D2654_METHOD_1_AE6B2976BFDEE38E_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_80D17D5096B17A35(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FBF049A765C0C824_CLASS_1_A7A7BE01E62D2654_METHOD_1_80D17D5096B17A35_OFFSET))(this, a1);
	}
};
