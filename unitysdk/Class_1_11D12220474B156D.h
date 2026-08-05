#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_80D3E4DC7BC9DF13;
class Class_2_9F7D78FFC33B7AE7_Class_2_9E10F61E218DF1FF;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11D12220474B156D_METHOD_1_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0x11174830)
#define CLASS_1_11D12220474B156D_METHOD_1_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0x11174640)
#define CLASS_1_11D12220474B156D_METHOD_1_B8ADD1482F0B3E5B_OFFSET UNITYSDK_OFFSET(0x11174280)
#define CLASS_1_11D12220474B156D_METHOD_1_C0390E47015795E7_OFFSET UNITYSDK_OFFSET(0x11174A00)
#define CLASS_1_11D12220474B156D_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x111747E0)
#define CLASS_1_11D12220474B156D__CTOR_OFFSET UNITYSDK_OFFSET(0x11174200)

inline static constexpr unsigned int Class_1_11D12220474B156D_TypeDefinitionIndex = 75965;

class Class_1_11D12220474B156D : public ::System::Object
{
public:
	::Class_2_9F7D78FFC33B7AE7_Class_2_9E10F61E218DF1FF* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_1_1; // 0x18
	::Class_1_80D3E4DC7BC9DF13* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_9F7D78FFC33B7AE7_Class_2_9E10F61E218DF1FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9F7D78FFC33B7AE7_Class_2_9E10F61E218DF1FF*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8ADD1482F0B3E5B(::Class_1_80D3E4DC7BC9DF13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80D3E4DC7BC9DF13*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_B8ADD1482F0B3E5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5ED655A622B0DBD9(::Class_1_80D3E4DC7BC9DF13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80D3E4DC7BC9DF13*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_5ED655A622B0DBD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F2138E056F9294A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_0F2138E056F9294A_OFFSET))(this);
	}

	::System::Void Method_1_C0390E47015795E7(::MoleMole::UIBaseController* a1, ::Class_1_80D3E4DC7BC9DF13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_80D3E4DC7BC9DF13*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_C0390E47015795E7_OFFSET))(this, a1, a2);
	}
};
