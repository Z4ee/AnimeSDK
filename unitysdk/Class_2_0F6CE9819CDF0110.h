#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class Animator; }

#define CLASS_2_0F6CE9819CDF0110_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xA993D30)
#define CLASS_2_0F6CE9819CDF0110__CTOR_OFFSET UNITYSDK_OFFSET(0xA993DE0)
#define CLASS_2_0F6CE9819CDF0110__ONBIND_OFFSET UNITYSDK_OFFSET(0xA993CD0)
#define CLASS_2_0F6CE9819CDF0110___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA993E50)

inline static constexpr unsigned int Class_2_0F6CE9819CDF0110_TypeDefinitionIndex = 66927;

class Class_2_0F6CE9819CDF0110 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Animator* Field_2_0; // 0x60
	::System::Nullable_1<::System::Boolean> Field_2_1; // 0x68
	::System::Int32 Field_2_2; // 0x6C
	::System::Int32 Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F6CE9819CDF0110__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F6CE9819CDF0110__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0F6CE9819CDF0110_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F6CE9819CDF0110___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
