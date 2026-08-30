#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_4_2354C5B9889B5244_METHOD_4_090740344CAC81EE_OFFSET UNITYSDK_OFFSET(0x16046950)
#define CLASS_4_2354C5B9889B5244_METHOD_4_17C8FC50682AAB84_OFFSET UNITYSDK_OFFSET(0x16046550)
#define CLASS_4_2354C5B9889B5244_METHOD_4_3DFACA893341BA03_OFFSET UNITYSDK_OFFSET(0x160466B0)
#define CLASS_4_2354C5B9889B5244_METHOD_4_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16046B90)
#define CLASS_4_2354C5B9889B5244_METHOD_4_B2E1F4B7BD95D0F7_OFFSET UNITYSDK_OFFSET(0x16046D70)
#define CLASS_4_2354C5B9889B5244_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x16046AD0)
#define CLASS_4_2354C5B9889B5244__CTOR_OFFSET UNITYSDK_OFFSET(0x16046690)

inline static constexpr unsigned int Class_4_2354C5B9889B5244_TypeDefinitionIndex = 73412;

class Class_4_2354C5B9889B5244 : public ::Class_3_3F1B1DE9D9F51912
{
public:
	// static const ::System::Single CDJIHHDDKPO; // 0x0
	// static const ::System::Single FMHEPOFHFKG; // 0x0
	// static const ::System::Single ANEBCHDJPKA; // 0x0
	::UnityEngine::Vector3 PKFMKJHMFDH; // 0x38
	::System::Single AKPGDFOEEKP; // 0x44
	::UnityEngine::Vector3 GJNGHBKNPIG; // 0x48
	::System::Single FKCIBFBHGIL; // 0x54
	::UnityEngine::Vector3 ICABBADGANM; // 0x58
	::System::Single DMBLHAAJMDF; // 0x64
	::System::Single EPLBKHOKDLG; // 0x68
	::UnityEngine::Vector3 JGBKIJNKAII; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2354C5B9889B5244__CTOR_OFFSET))(this);
	}

	static ::Class_4_2354C5B9889B5244* Method_4_17C8FC50682AAB84(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::Class_4_2354C5B9889B5244*(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_2354C5B9889B5244_METHOD_4_17C8FC50682AAB84_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_4_3DFACA893341BA03(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_2354C5B9889B5244_METHOD_4_3DFACA893341BA03_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_2354C5B9889B5244_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::System::Void Method_4_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_2354C5B9889B5244_METHOD_4_479759059E440327_OFFSET))(this, a1);
	}

	static ::System::Single Method_4_090740344CAC81EE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_2354C5B9889B5244_METHOD_4_090740344CAC81EE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_4_B2E1F4B7BD95D0F7(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_2354C5B9889B5244_METHOD_4_B2E1F4B7BD95D0F7_OFFSET))(a1, a2, a3);
	}
};
