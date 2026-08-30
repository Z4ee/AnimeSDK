#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class TiltCommonConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9195CF3D054610FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15734440)
#define CLASS_1_9195CF3D054610FE_METHOD_1_270501FD20A7FAE5_OFFSET UNITYSDK_OFFSET(0x15734850)
#define CLASS_1_9195CF3D054610FE_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x15734DA0)
#define CLASS_1_9195CF3D054610FE_METHOD_1_56A48FE9D911825E_OFFSET UNITYSDK_OFFSET(0x15734380)
#define CLASS_1_9195CF3D054610FE_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x157344B0)
#define CLASS_1_9195CF3D054610FE_METHOD_1_7970C5CAFFD9CDA1_OFFSET UNITYSDK_OFFSET(0x15734B60)
#define CLASS_1_9195CF3D054610FE_METHOD_1_7F5BD18A0793220A_OFFSET UNITYSDK_OFFSET(0x157345C0)
#define CLASS_1_9195CF3D054610FE_METHOD_1_9EF665C07CB5B066_OFFSET UNITYSDK_OFFSET(0x15734780)
#define CLASS_1_9195CF3D054610FE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15734560)
#define CLASS_1_9195CF3D054610FE_METHOD_1_D5E732132848B990_OFFSET UNITYSDK_OFFSET(0x15734720)
#define CLASS_1_9195CF3D054610FE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15734CD0)
#define CLASS_1_9195CF3D054610FE_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x15734D40)
#define CLASS_1_9195CF3D054610FE_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x15734CE0)
#define CLASS_1_9195CF3D054610FE__CTOR_OFFSET UNITYSDK_OFFSET(0x15734350)

inline static constexpr unsigned int Class_1_9195CF3D054610FE_TypeDefinitionIndex = 73185;

class Class_1_9195CF3D054610FE : public ::System::Object
{
public:
	::UnityEngine::Transform* FDFOILMGAEL; // 0x10
	::RPG::Client::TiltCommonConfig* OLAMJJFPPBP; // 0x18
	::RPG::Client::TiltCommonConfig* IGHAHBNLIJA; // 0x20
	::System::Single HHDKAMBBFMC; // 0x28
	::System::Single JFNADPOMHNG; // 0x2C
	::System::Single JOIJCLKPKDM; // 0x30
	::System::Single PFOIJIHIMCG; // 0x34
	::System::Single GEJLALLADEB; // 0x38
	::System::Single FNGOHDPJADC; // 0x3C
	::System::Single DLMELDHDGBO; // 0x40
	::System::Single DADNKBDOCEP; // 0x44
	::System::Boolean DLGFMPNEHGO; // 0x48
	::System::Single ADAHMKKFHAE; // 0x4C
	::System::Single KEJOPLKCIGI; // 0x50
	::System::Single BKBPGELJAFE; // 0x54
	::System::Single ELEDNLGPJCN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_56A48FE9D911825E(::UnityEngine::GameObject* a1, ::RPG::Client::TiltCommonConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::TiltCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_56A48FE9D911825E_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7F5BD18A0793220A(::System::Single a1, ::System::Single a2, ::System::Single a3, ::RPG::GameCore::CharacterMotionFlag a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_7F5BD18A0793220A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_9EF665C07CB5B066(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_9EF665C07CB5B066_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_270501FD20A7FAE5(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_270501FD20A7FAE5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_7970C5CAFFD9CDA1(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_7970C5CAFFD9CDA1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::RPG::Client::TiltCommonConfig* Method_1_D5E732132848B990()
	{
		return ((::RPG::Client::TiltCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9195CF3D054610FE_METHOD_1_D5E732132848B990_OFFSET))(this);
	}
};
