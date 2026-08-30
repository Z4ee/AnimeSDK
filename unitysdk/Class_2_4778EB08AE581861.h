#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4778EB08AE581861_METHOD_2_06A6F3C551B79E23_OFFSET UNITYSDK_OFFSET(0xF439A70)
#define CLASS_2_4778EB08AE581861_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xF439BA0)
#define CLASS_2_4778EB08AE581861_METHOD_2_7F5959D5B740D04C_OFFSET UNITYSDK_OFFSET(0xF439AF0)
#define CLASS_2_4778EB08AE581861_METHOD_2_994AEE4DBD645811_OFFSET UNITYSDK_OFFSET(0xF4399C0)
#define CLASS_2_4778EB08AE581861__CTOR_OFFSET UNITYSDK_OFFSET(0xF439C30)
#define CLASS_2_4778EB08AE581861__ONBIND_OFFSET UNITYSDK_OFFSET(0xF439830)

inline static constexpr unsigned int Class_2_4778EB08AE581861_TypeDefinitionIndex = 71928;

class Class_2_4778EB08AE581861 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* CMAAILAJKLG; // 0x0
	// static const ::System::String* DGNLNMNPMGI; // 0x0
	// static const ::System::String* ENFHEKDIEEN; // 0x0
	::UnityEngine::Transform* GHGAKNDLKGM; // 0x60
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
	::UnityEngine::Transform* FIACEDOMPEA; // 0x70
	::UnityEngine::Transform* CDJGLKECPHI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4778EB08AE581861__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4778EB08AE581861__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_994AEE4DBD645811(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4778EB08AE581861_METHOD_2_994AEE4DBD645811_OFFSET))(this, a1);
	}

	::System::Void Method_2_06A6F3C551B79E23(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4778EB08AE581861_METHOD_2_06A6F3C551B79E23_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7F5959D5B740D04C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4778EB08AE581861_METHOD_2_7F5959D5B740D04C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4778EB08AE581861_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}
};
