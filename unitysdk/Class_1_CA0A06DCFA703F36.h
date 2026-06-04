#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CruiseOrbitBGCurvePlugin;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CA0A06DCFA703F36_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xA9FEAA0)
#define CLASS_1_CA0A06DCFA703F36_METHOD_1_5928E4108213B98A_OFFSET UNITYSDK_OFFSET(0xA9FEAF0)
#define CLASS_1_CA0A06DCFA703F36_METHOD_1_62A648FFC2897E5C_OFFSET UNITYSDK_OFFSET(0xA9FF110)
#define CLASS_1_CA0A06DCFA703F36_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA9FF0B0)
#define CLASS_1_CA0A06DCFA703F36_METHOD_1_BCFB2CE7B27B1CE4_OFFSET UNITYSDK_OFFSET(0xA9FEC50)
#define CLASS_1_CA0A06DCFA703F36__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FF200)

inline static constexpr unsigned int Class_1_CA0A06DCFA703F36_TypeDefinitionIndex = 53852;

class Class_1_CA0A06DCFA703F36 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CruiseOrbitBGCurvePlugin*>* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0A06DCFA703F36__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0A06DCFA703F36_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_1_5928E4108213B98A(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CA0A06DCFA703F36_METHOD_1_5928E4108213B98A_OFFSET))(this, a1);
	}

	::CruiseOrbitBGCurvePlugin* Method_1_BCFB2CE7B27B1CE4(::System::String* a1, ::System::String* a2)
	{
		return ((::CruiseOrbitBGCurvePlugin*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA0A06DCFA703F36_METHOD_1_BCFB2CE7B27B1CE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0A06DCFA703F36_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_62A648FFC2897E5C(::CruiseOrbitBGCurvePlugin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::CruiseOrbitBGCurvePlugin*))((::PBYTE)hIl2Cpp + CLASS_1_CA0A06DCFA703F36_METHOD_1_62A648FFC2897E5C_OFFSET))(this, a1);
	}
};
