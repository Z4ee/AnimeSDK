#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapRoleCardRowItemWidgetContext; }
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_CC8DE38E2B2461EB_METHOD_2_0D9C76C4B2D944F5_OFFSET UNITYSDK_OFFSET(0x116BD650)
#define CLASS_2_CC8DE38E2B2461EB_METHOD_2_4DB14E9CF0E552EE_OFFSET UNITYSDK_OFFSET(0x116BDC20)
#define CLASS_2_CC8DE38E2B2461EB_METHOD_2_501509B4B58077AF_OFFSET UNITYSDK_OFFSET(0x116BD9B0)
#define CLASS_2_CC8DE38E2B2461EB_METHOD_2_C28179008078CEB1_OFFSET UNITYSDK_OFFSET(0x116BDB90)
#define CLASS_2_CC8DE38E2B2461EB_METHOD_2_FF7D42127627E96E_OFFSET UNITYSDK_OFFSET(0x116BDE00)
#define CLASS_2_CC8DE38E2B2461EB__CTOR_OFFSET UNITYSDK_OFFSET(0x116BD960)

inline static constexpr unsigned int Class_2_CC8DE38E2B2461EB_TypeDefinitionIndex = 54883;

class Class_2_CC8DE38E2B2461EB : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC8DE38E2B2461EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0D9C76C4B2D944F5(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_CC8DE38E2B2461EB_METHOD_2_0D9C76C4B2D944F5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_501509B4B58077AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC8DE38E2B2461EB_METHOD_2_501509B4B58077AF_OFFSET))(this);
	}

	::System::Void Method_2_C28179008078CEB1(::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRoleCardRowItemWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_CC8DE38E2B2461EB_METHOD_2_C28179008078CEB1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DB14E9CF0E552EE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC8DE38E2B2461EB_METHOD_2_4DB14E9CF0E552EE_OFFSET))(this);
	}

	::System::String* Method_2_FF7D42127627E96E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC8DE38E2B2461EB_METHOD_2_FF7D42127627E96E_OFFSET))(this);
	}
};
