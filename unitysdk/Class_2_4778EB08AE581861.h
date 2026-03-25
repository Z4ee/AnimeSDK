#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4778EB08AE581861_METHOD_2_06A6F3C551B79E23_OFFSET UNITYSDK_OFFSET(0x1091BCA0)
#define CLASS_2_4778EB08AE581861_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1091BDD0)
#define CLASS_2_4778EB08AE581861_METHOD_2_7F5959D5B740D04C_OFFSET UNITYSDK_OFFSET(0x1091BD20)
#define CLASS_2_4778EB08AE581861_METHOD_2_994AEE4DBD645811_OFFSET UNITYSDK_OFFSET(0x1091BBF0)
#define CLASS_2_4778EB08AE581861__CTOR_OFFSET UNITYSDK_OFFSET(0x1091BE60)
#define CLASS_2_4778EB08AE581861__ONBIND_OFFSET UNITYSDK_OFFSET(0x1091BA00)
#define CLASS_2_4778EB08AE581861___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1091BE90)

inline static constexpr unsigned int Class_2_4778EB08AE581861_TypeDefinitionIndex = 58955;

class Class_2_4778EB08AE581861 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::Animation* Field_2_3; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_1; // 0x78

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4778EB08AE581861___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
