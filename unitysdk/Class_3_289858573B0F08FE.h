#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphComponent.h"

class Class_1_E7BD46EB43F1A06F;

#define CLASS_3_289858573B0F08FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119192B0)
#define CLASS_3_289858573B0F08FE_METHOD_3_B75C7B573F2E1A01_OFFSET UNITYSDK_OFFSET(0x11919390)
#define CLASS_3_289858573B0F08FE_TICK_OFFSET UNITYSDK_OFFSET(0x11919330)
#define CLASS_3_289858573B0F08FE__CTOR_OFFSET UNITYSDK_OFFSET(0x11919450)
#define CLASS_3_289858573B0F08FE__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x119191A0)
#define CLASS_3_289858573B0F08FE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119194C0)
#define CLASS_3_289858573B0F08FE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x119194D0)
#define CLASS_3_289858573B0F08FE___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x11919460)

inline static constexpr unsigned int Class_3_289858573B0F08FE_TypeDefinitionIndex = 49815;

class Class_3_289858573B0F08FE : public ::RPG::GameCore::LevelGraphComponent
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_B75C7B573F2E1A01(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE_METHOD_3_B75C7B573F2E1A01_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
