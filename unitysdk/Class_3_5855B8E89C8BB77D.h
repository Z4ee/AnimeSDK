#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_39.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_FA020C2C23A72B3F;
namespace System { class String; }

#define CLASS_3_5855B8E89C8BB77D_METHOD_3_EA8B33115E80A793_OFFSET UNITYSDK_OFFSET(0x16E8EA00)
#define CLASS_3_5855B8E89C8BB77D_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16E8ECA0)
#define CLASS_3_5855B8E89C8BB77D_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16E8EAC0)
#define CLASS_3_5855B8E89C8BB77D__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8ED20)
#define CLASS_3_5855B8E89C8BB77D__ONEXECUTE_B__5_0_OFFSET UNITYSDK_OFFSET(0x16E8ED30)

inline static constexpr unsigned int Class_3_5855B8E89C8BB77D_TypeDefinitionIndex = 77704;

class Class_3_5855B8E89C8BB77D : public ::Class_2_A48F3719AA1CF200_39
{
public:
	::Class_3_FA020C2C23A72B3F* PDENFEFCAGN; // 0x20
	::System::String* NNIOCPHFNNG; // 0x28
	::UnityEngine::Vector3 FAIBBJPMAIG; // 0x30
	::System::Single MAEAFKDAOMA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D__CTOR_OFFSET))(this);
	}

	static ::Class_3_5855B8E89C8BB77D* Method_3_EA8B33115E80A793(::Class_3_FA020C2C23A72B3F* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::Class_3_5855B8E89C8BB77D*(*)(::Class_3_FA020C2C23A72B3F*, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D_METHOD_3_EA8B33115E80A793_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D_ONCLEAR_OFFSET))(this);
	}

	::System::Void _OnExecute_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D__ONEXECUTE_B__5_0_OFFSET))(this);
	}
};
