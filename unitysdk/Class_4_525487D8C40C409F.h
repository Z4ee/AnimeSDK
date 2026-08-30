#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"

class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_4_525487D8C40C409F_CLONE_OFFSET UNITYSDK_OFFSET(0x156270D0)
#define CLASS_4_525487D8C40C409F_METHOD_4_01E9FC75CA5E0B40_OFFSET UNITYSDK_OFFSET(0x15626D60)
#define CLASS_4_525487D8C40C409F_METHOD_4_0F2AF21BF93699B5_OFFSET UNITYSDK_OFFSET(0x15626ED0)
#define CLASS_4_525487D8C40C409F_METHOD_4_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x15627180)
#define CLASS_4_525487D8C40C409F_REVERSE_OFFSET UNITYSDK_OFFSET(0x15627120)
#define CLASS_4_525487D8C40C409F_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x15626F80)
#define CLASS_4_525487D8C40C409F__CTOR_OFFSET UNITYSDK_OFFSET(0x15626EB0)

inline static constexpr unsigned int Class_4_525487D8C40C409F_TypeDefinitionIndex = 73424;

class Class_4_525487D8C40C409F : public ::Class_3_3F1B1DE9D9F51912
{
public:
	::UnityEngine::UI::Slider* DDAINBPMMJE; // 0x38
	::System::Single FMEBFPPJFJG; // 0x40
	::System::Single EGADJONKOFL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_525487D8C40C409F__CTOR_OFFSET))(this);
	}

	static ::Class_4_525487D8C40C409F* Method_4_01E9FC75CA5E0B40(::System::Single a1, ::System::Single a2)
	{
		return ((::Class_4_525487D8C40C409F*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_525487D8C40C409F_METHOD_4_01E9FC75CA5E0B40_OFFSET))(a1, a2);
	}

	::System::Boolean Method_4_0F2AF21BF93699B5(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_525487D8C40C409F_METHOD_4_0F2AF21BF93699B5_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_525487D8C40C409F_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_525487D8C40C409F_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_525487D8C40C409F_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_525487D8C40C409F_METHOD_4_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}
};
