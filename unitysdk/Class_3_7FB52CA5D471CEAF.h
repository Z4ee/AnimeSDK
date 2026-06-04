#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9C4E0E0141829F67.h"

namespace UnityEngine { class Transform; }

#define CLASS_3_7FB52CA5D471CEAF_ISDONE_OFFSET UNITYSDK_OFFSET(0xA5E8EE0)
#define CLASS_3_7FB52CA5D471CEAF_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA5E8FB0)
#define CLASS_3_7FB52CA5D471CEAF_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xA5E9030)
#define CLASS_3_7FB52CA5D471CEAF_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA5E9090)
#define CLASS_3_7FB52CA5D471CEAF_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA5E8DB0)
#define CLASS_3_7FB52CA5D471CEAF_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xA5E8F20)
#define CLASS_3_7FB52CA5D471CEAF_STEP_OFFSET UNITYSDK_OFFSET(0xA5E8E70)
#define CLASS_3_7FB52CA5D471CEAF__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E9010)
#define CLASS_3_7FB52CA5D471CEAF___IFIXBASEPROXY_ISDONE_OFFSET UNITYSDK_OFFSET(0xA5E90F0)
#define CLASS_3_7FB52CA5D471CEAF___IFIXBASEPROXY_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xA5E9150)
#define CLASS_3_7FB52CA5D471CEAF___IFIXBASEPROXY_STEP_OFFSET UNITYSDK_OFFSET(0xA5E91D0)

inline static constexpr unsigned int Class_3_7FB52CA5D471CEAF_TypeDefinitionIndex = 68628;

class Class_3_7FB52CA5D471CEAF : public ::Class_2_9C4E0E0141829F67
{
public:
	::System::Boolean Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean IsDone()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF_ISDONE_OFFSET))(this);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::System::Void Step(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF_STEP_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_IsDone()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF___IFIXBASEPROXY_ISDONE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF___IFIXBASEPROXY_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Step(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7FB52CA5D471CEAF___IFIXBASEPROXY_STEP_OFFSET))(this, a1);
	}
};
