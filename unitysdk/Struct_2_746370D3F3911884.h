#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define STRUCT_2_746370D3F3911884_METHOD_2_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0x2DE8E60)
#define STRUCT_2_746370D3F3911884_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x2DE8C60)
#define STRUCT_2_746370D3F3911884_METHOD_2_823422828276EFD9_OFFSET UNITYSDK_OFFSET(0x2DE8BE0)
#define STRUCT_2_746370D3F3911884_METHOD_2_A500EF4391937E7C_OFFSET UNITYSDK_OFFSET(0x2DE8BD0)
#define STRUCT_2_746370D3F3911884_METHOD_2_B3328D37C222812F_OFFSET UNITYSDK_OFFSET(0x2DE8C20)

inline static constexpr unsigned int Struct_2_746370D3F3911884_TypeDefinitionIndex = 68452;

struct alignas(8) Struct_2_746370D3F3911884
{
	::RootMotion::IKJob::IKTransformRef DICDJJOJKGF; // 0x10
	::UnityEngine::Vector3 NAKDFBKDLND; // 0x20
	::UnityEngine::Vector3 OEBJPLAGEAE; // 0x2C
	::UnityEngine::Vector3 ODKDKPHFLCD; // 0x38
	::UnityEngine::Vector3 OPBJPEHJFJF; // 0x44
	::UnityEngine::Vector3 ADBKJGIHKOA; // 0x50
	::UnityEngine::Quaternion IEGCOKBHDIB; // 0x5C

	::System::Void Method_2_A500EF4391937E7C(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + STRUCT_2_746370D3F3911884_METHOD_2_A500EF4391937E7C_OFFSET))(this, a1);
	}

	::System::Void Method_2_823422828276EFD9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_746370D3F3911884_METHOD_2_823422828276EFD9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B3328D37C222812F(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_746370D3F3911884_METHOD_2_B3328D37C222812F_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_746370D3F3911884_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_746370D3F3911884_METHOD_2_77FD543600E00498_1_OFFSET))(this);
	}
};
