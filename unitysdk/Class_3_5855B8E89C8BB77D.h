#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A45A3A893E113CFD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_626F93E2306641CC;
namespace System { class String; }

#define CLASS_3_5855B8E89C8BB77D_METHOD_3_EA8B33115E80A793_OFFSET UNITYSDK_OFFSET(0x9905AE0)
#define CLASS_3_5855B8E89C8BB77D_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x9905D70)
#define CLASS_3_5855B8E89C8BB77D_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9905BA0)
#define CLASS_3_5855B8E89C8BB77D__CTOR_OFFSET UNITYSDK_OFFSET(0x9905DF0)
#define CLASS_3_5855B8E89C8BB77D__ONEXECUTE_B__5_0_OFFSET UNITYSDK_OFFSET(0x9905E00)
#define CLASS_3_5855B8E89C8BB77D___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x9905ED0)
#define CLASS_3_5855B8E89C8BB77D___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9905E70)

inline static constexpr unsigned int Class_3_5855B8E89C8BB77D_TypeDefinitionIndex = 71673;

class Class_3_5855B8E89C8BB77D : public ::Class_2_A45A3A893E113CFD
{
public:
	::System::String* Field_3_1; // 0x20
	::Class_3_626F93E2306641CC* Field_3_0; // 0x28
	::UnityEngine::Vector3 Field_3_2; // 0x30
	::System::Single Field_3_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D__CTOR_OFFSET))(this);
	}

	static ::Class_3_5855B8E89C8BB77D* Method_3_EA8B33115E80A793(::Class_3_626F93E2306641CC* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::Class_3_5855B8E89C8BB77D*(*)(::Class_3_626F93E2306641CC*, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D_METHOD_3_EA8B33115E80A793_OFFSET))(a1, a2, a3, a4);
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

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5855B8E89C8BB77D___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
