#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float2.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/float4x4.h"

namespace UnityEngine { class Camera; }

#define CLASS_1_C718CA2BA55264E0_METHOD_1_091419E03D3FC6D9_OFFSET UNITYSDK_OFFSET(0x12F0F8E0)
#define CLASS_1_C718CA2BA55264E0_METHOD_1_18B79C7EF6DDDCA9_OFFSET UNITYSDK_OFFSET(0x12F0FBE0)
#define CLASS_1_C718CA2BA55264E0_METHOD_1_36FBFF3C75427E6C_OFFSET UNITYSDK_OFFSET(0x12F10020)
#define CLASS_1_C718CA2BA55264E0_METHOD_1_58B24C6A51E2C1BE_OFFSET UNITYSDK_OFFSET(0x12F0FED0)
#define CLASS_1_C718CA2BA55264E0_METHOD_1_718E7C51B7C44061_OFFSET UNITYSDK_OFFSET(0x12F0FA60)
#define CLASS_1_C718CA2BA55264E0_METHOD_1_7B7DC6CAFF28E419_OFFSET UNITYSDK_OFFSET(0x12F0FDA0)
#define CLASS_1_C718CA2BA55264E0_METHOD_1_AF50BB73CADDBA63_OFFSET UNITYSDK_OFFSET(0x12F10150)
#define CLASS_1_C718CA2BA55264E0_METHOD_1_E94BD292FCB603E0_1_OFFSET UNITYSDK_OFFSET(0x12F0FF90)
#define CLASS_1_C718CA2BA55264E0_METHOD_1_E94BD292FCB603E0_OFFSET UNITYSDK_OFFSET(0x12F0FB40)

inline static constexpr unsigned int Class_1_C718CA2BA55264E0_TypeDefinitionIndex = 78266;

class Class_1_C718CA2BA55264E0 : public ::System::Object
{
public:
	static ::Unity::Mathematics::float2 Method_1_091419E03D3FC6D9(::Unity::Mathematics::float4x4& a1, ::Unity::Mathematics::float3 a2, ::Unity::Mathematics::float2 a3)
	{
		return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float4x4&, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + CLASS_1_C718CA2BA55264E0_METHOD_1_091419E03D3FC6D9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_718E7C51B7C44061(::Unity::Mathematics::float3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::Unity::Mathematics::float3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C718CA2BA55264E0_METHOD_1_718E7C51B7C44061_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_E94BD292FCB603E0(::Unity::Mathematics::float3 a1, ::Unity::Mathematics::float3 a2)
	{
		return ((::System::Single(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + CLASS_1_C718CA2BA55264E0_METHOD_1_E94BD292FCB603E0_OFFSET))(a1, a2);
	}

	static ::Unity::Mathematics::float4x4 Method_1_18B79C7EF6DDDCA9(::UnityEngine::Camera* a1)
	{
		return ((::Unity::Mathematics::float4x4(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_C718CA2BA55264E0_METHOD_1_18B79C7EF6DDDCA9_OFFSET))(a1);
	}

	static ::Unity::Mathematics::float3 Method_1_7B7DC6CAFF28E419(::Unity::Mathematics::float4x4& a1, ::Unity::Mathematics::float3 a2)
	{
		return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float4x4&, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + CLASS_1_C718CA2BA55264E0_METHOD_1_7B7DC6CAFF28E419_OFFSET))(a1, a2);
	}

	static ::Unity::Mathematics::float2 Method_1_58B24C6A51E2C1BE(::Unity::Mathematics::float2 a1, ::Unity::Mathematics::float2 a2, ::Unity::Mathematics::float2 a3, ::Unity::Mathematics::float2 a4)
	{
		return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + CLASS_1_C718CA2BA55264E0_METHOD_1_58B24C6A51E2C1BE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_E94BD292FCB603E0_1(::Unity::Mathematics::float3 a1, ::Unity::Mathematics::float3 a2)
	{
		return ((::System::Single(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + CLASS_1_C718CA2BA55264E0_METHOD_1_E94BD292FCB603E0_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_36FBFF3C75427E6C(::Unity::Mathematics::float4x4& a1, ::Unity::Mathematics::float3 a2)
	{
		return ((::System::Boolean(*)(::Unity::Mathematics::float4x4&, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + CLASS_1_C718CA2BA55264E0_METHOD_1_36FBFF3C75427E6C_OFFSET))(a1, a2);
	}

	static ::Unity::Mathematics::float2 Method_1_AF50BB73CADDBA63(::Unity::Mathematics::float4x4& a1, ::Unity::Mathematics::float3 a2, ::Unity::Mathematics::float2 a3, ::Unity::Mathematics::float2 a4, ::Unity::Mathematics::float2 a5)
	{
		return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float4x4&, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + CLASS_1_C718CA2BA55264E0_METHOD_1_AF50BB73CADDBA63_OFFSET))(a1, a2, a3, a4, a5);
	}
};
