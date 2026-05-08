#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_80D3E4DC7BC9DF13;
class Class_2_D764F5D1F3AD4BCF_Class_2_9E10F61E218DF1FF;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11D12220474B156D_METHOD_1_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0x156E1780)
#define CLASS_1_11D12220474B156D_METHOD_1_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0x156E1240)
#define CLASS_1_11D12220474B156D_METHOD_1_B8ADD1482F0B3E5B_OFFSET UNITYSDK_OFFSET(0x156E13E0)
#define CLASS_1_11D12220474B156D_METHOD_1_C0390E47015795E7_OFFSET UNITYSDK_OFFSET(0x156E1960)
#define CLASS_1_11D12220474B156D_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x156E1C70)
#define CLASS_1_11D12220474B156D__CTOR_OFFSET UNITYSDK_OFFSET(0x156E11C0)

inline static constexpr unsigned int Class_1_11D12220474B156D_TypeDefinitionIndex = 79223;

class Class_1_11D12220474B156D : public ::System::Object
{
public:
	::Class_1_80D3E4DC7BC9DF13* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_1_1; // 0x18
	::Class_2_D764F5D1F3AD4BCF_Class_2_9E10F61E218DF1FF* Field_1_0; // 0x20

	::System::Void _ctor(::Class_2_D764F5D1F3AD4BCF_Class_2_9E10F61E218DF1FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D764F5D1F3AD4BCF_Class_2_9E10F61E218DF1FF*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5ED655A622B0DBD9(::Class_1_80D3E4DC7BC9DF13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80D3E4DC7BC9DF13*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_5ED655A622B0DBD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F2138E056F9294A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_0F2138E056F9294A_OFFSET))(this);
	}

	::System::Void Method_1_B8ADD1482F0B3E5B(::Class_1_80D3E4DC7BC9DF13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80D3E4DC7BC9DF13*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_B8ADD1482F0B3E5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0390E47015795E7(::MoleMole::UIBaseController* a1, ::Class_1_80D3E4DC7BC9DF13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_80D3E4DC7BC9DF13*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_C0390E47015795E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}
};
