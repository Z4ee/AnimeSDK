#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_163;
namespace System { class Action; }

#define CLASS_1_7FF1F5D2A77378DD_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1C56CE00)
#define CLASS_1_7FF1F5D2A77378DD_GET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0x1C56CD40)
#define CLASS_1_7FF1F5D2A77378DD_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1C56CD50)
#define CLASS_1_7FF1F5D2A77378DD_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x1C56CD90)
#define CLASS_1_7FF1F5D2A77378DD_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x1C56D200)
#define CLASS_1_7FF1F5D2A77378DD_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1C56CE60)
#define CLASS_1_7FF1F5D2A77378DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56CEC0)
#define CLASS_1_7FF1F5D2A77378DD___CTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C56D2C0)

inline static constexpr unsigned int Class_1_7FF1F5D2A77378DD_TypeDefinitionIndex = 41776;

class Class_1_7FF1F5D2A77378DD : public ::System::Object
{
public:
	::System::Action* OnChanged; // 0x10
	::System::Int32 EGDFHCJJJJK; // 0x18
	::System::Int32 _MaxPercent_k__BackingField; // 0x1C
	::System::Int32 OCAFOPCCEKF; // 0x20
	::System::Int32 ACOBAMHHFMI; // 0x24

	::System::Void _ctor(::Class_0_16E4307DCC419505_163* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_163*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7FF1F5D2A77378DD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 get_MaxPercent()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF1F5D2A77378DD_GET_MAXPERCENT_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF1F5D2A77378DD_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7FF1F5D2A77378DD_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void add_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7FF1F5D2A77378DD_ADD_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7FF1F5D2A77378DD_REMOVE_ONCHANGED_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7FF1F5D2A77378DD_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void __ctor_b__12_0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7FF1F5D2A77378DD___CTOR_B__12_0_OFFSET))(this, a1);
	}
};
