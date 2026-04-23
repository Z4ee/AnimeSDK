#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define FLOATINGPROXYPARTICLE_METHOD_2_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x1188F170)
#define FLOATINGPROXYPARTICLE_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1188FDB0)
#define FLOATINGPROXYPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x15A6600)

inline static constexpr unsigned int FloatingProxyParticle_TypeDefinitionIndex = 44237;

struct alignas(4) FloatingProxyParticle
{
	::UnityEngine::Vector4 posRadius; // 0x10
	::UnityEngine::Vector4 param; // 0x20
	::UnityEngine::Vector4 param1; // 0x30

	::System::Void _ctor(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + FLOATINGPROXYPARTICLE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FLOATINGPROXYPARTICLE_METHOD_2_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::System::Int32 Method_2_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FLOATINGPROXYPARTICLE_METHOD_2_F5599B7DA8E7E53C_1_OFFSET))();
	}
};
