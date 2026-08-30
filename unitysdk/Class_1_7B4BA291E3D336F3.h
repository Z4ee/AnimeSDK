#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_7B4BA291E3D336F3_GET_ID_OFFSET UNITYSDK_OFFSET(0x16338930)
#define CLASS_1_7B4BA291E3D336F3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x163389C0)
#define CLASS_1_7B4BA291E3D336F3_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16338950)
#define CLASS_1_7B4BA291E3D336F3_METHOD_1_C760A38F3B93AC62_OFFSET UNITYSDK_OFFSET(0x16338A20)
#define CLASS_1_7B4BA291E3D336F3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16338CB0)
#define CLASS_1_7B4BA291E3D336F3_METHOD_1_FA7F07669215B524_OFFSET UNITYSDK_OFFSET(0x16338D40)
#define CLASS_1_7B4BA291E3D336F3_SET_ID_OFFSET UNITYSDK_OFFSET(0x16338940)
#define CLASS_1_7B4BA291E3D336F3__CTOR_OFFSET UNITYSDK_OFFSET(0x16338E70)

inline static constexpr unsigned int Class_1_7B4BA291E3D336F3_TypeDefinitionIndex = 57179;

class Class_1_7B4BA291E3D336F3 : public ::System::Object
{
public:
	// static const ::System::Single OFLDDKENMCE; // 0x0
	// static const ::System::Single ICMKFFBMCJC; // 0x0
	::UnityEngine::AnimationCurve* HNAFDCODNGN; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18
	::System::Boolean BJBBGPNPDNM; // 0x1C
	::System::Boolean DMIBLDMPCMH; // 0x1D
	::System::Boolean HKBAKDEIEHK; // 0x1E
	::System::Single GEJKDKGKFPK; // 0x20
	::System::Single CDKHGBOPKDM; // 0x24
	::System::Boolean JDIALKFNJDP; // 0x28
	::System::Boolean CJKOLDONNCL; // 0x29
	::System::Single MGIAJMOKOCC; // 0x2C
	::System::Single KNCNBOIDKLD; // 0x30
	::UnityEngine::Vector3 AKEGBNBJKKM; // 0x34
	::UnityEngine::Quaternion NGEJDEFDOOP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4BA291E3D336F3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4BA291E3D336F3_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7B4BA291E3D336F3_SET_ID_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4BA291E3D336F3_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4BA291E3D336F3_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_C760A38F3B93AC62(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::AnimationCurve* a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7B4BA291E3D336F3_METHOD_1_C760A38F3B93AC62_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4BA291E3D336F3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_FA7F07669215B524()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4BA291E3D336F3_METHOD_1_FA7F07669215B524_OFFSET))(this);
	}
};
