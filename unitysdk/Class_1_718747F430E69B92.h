#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_746370D3F3911884.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace UnityEngine { class Transform; }

#define CLASS_1_718747F430E69B92_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2175E0)
#define CLASS_1_718747F430E69B92_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2188C0)
#define CLASS_1_718747F430E69B92_METHOD_1_1591423933F5313B_OFFSET UNITYSDK_OFFSET(0xA2170C0)
#define CLASS_1_718747F430E69B92_METHOD_1_29FB6D44E2E57FC6_OFFSET UNITYSDK_OFFSET(0xA218760)
#define CLASS_1_718747F430E69B92_METHOD_1_5A203A710B89D8CD_OFFSET UNITYSDK_OFFSET(0xA217AE0)
#define CLASS_1_718747F430E69B92_METHOD_1_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0xA217630)
#define CLASS_1_718747F430E69B92_METHOD_1_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0xA218400)
#define CLASS_1_718747F430E69B92_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xA2185B0)
#define CLASS_1_718747F430E69B92_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA217EA0)
#define CLASS_1_718747F430E69B92_METHOD_1_C51373E4514C9B29_OFFSET UNITYSDK_OFFSET(0xA217F30)
#define CLASS_1_718747F430E69B92_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2188D0)
#define CLASS_1_718747F430E69B92__CTOR_OFFSET UNITYSDK_OFFSET(0xA2188E0)

inline static constexpr unsigned int Class_1_718747F430E69B92_TypeDefinitionIndex = 55902;

class Class_1_718747F430E69B92 : public ::System::Object
{
public:
	::UnityEngine::Transform* _Transform_k__BackingField; // 0x10
	::UnityEngine::Vector3 Field_1_2; // 0x18
	::UnityEngine::Vector3 Field_1_5; // 0x24
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_3; // 0x3C
	::UnityEngine::Quaternion Field_1_6; // 0x48
	::UnityEngine::Vector3 Field_1_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1591423933F5313B(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_METHOD_1_1591423933F5313B_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_5B944DF9FC8FD32D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_METHOD_1_5B944DF9FC8FD32D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A203A710B89D8CD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_METHOD_1_5A203A710B89D8CD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_C51373E4514C9B29(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_METHOD_1_C51373E4514C9B29_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_29FB6D44E2E57FC6(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_746370D3F3911884& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_746370D3F3911884&))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_METHOD_1_29FB6D44E2E57FC6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* get_Transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void set_Transform(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_SET_TRANSFORM_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718747F430E69B92_METHOD_1_77FD543600E00498_1_OFFSET))(this);
	}
};
