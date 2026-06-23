#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0AC327AA661D91B2.h"

class Class_5_F638703ACD0FA08E;
namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace MoleMole::Config { class HollowParticleTransformModuleConfig; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_2_085F9B5F742DFB7F_METHOD_2_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x12767DF0)
#define CLASS_2_085F9B5F742DFB7F_METHOD_2_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0x12767D50)
#define CLASS_2_085F9B5F742DFB7F_METHOD_2_B91C57E164ECE2C2_OFFSET UNITYSDK_OFFSET(0x12767AF0)
#define CLASS_2_085F9B5F742DFB7F_METHOD_2_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x12767C00)
#define CLASS_2_085F9B5F742DFB7F_METHOD_2_D8B50DB58E5EFCCD_OFFSET UNITYSDK_OFFSET(0x12767C10)
#define CLASS_2_085F9B5F742DFB7F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12767AE0)
#define CLASS_2_085F9B5F742DFB7F__CTOR_OFFSET UNITYSDK_OFFSET(0x12767BB0)

inline static constexpr unsigned int Class_2_085F9B5F742DFB7F_TypeDefinitionIndex = 65990;

class Class_2_085F9B5F742DFB7F : public ::Class_1_0AC327AA661D91B2
{
public:
	::MoleMole::Config::HollowParticleTransformModuleConfig* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085F9B5F742DFB7F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085F9B5F742DFB7F_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_0AC327AA661D91B2* Method_2_B91C57E164ECE2C2(::MoleMole::Config::HollowChessboardParticleModuleConfig* a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::Class_1_0AC327AA661D91B2*(*)(::PVOID, ::MoleMole::Config::HollowChessboardParticleModuleConfig*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_2_085F9B5F742DFB7F_METHOD_2_B91C57E164ECE2C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_085F9B5F742DFB7F_METHOD_2_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8B50DB58E5EFCCD(::Class_5_F638703ACD0FA08E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_2_085F9B5F742DFB7F_METHOD_2_D8B50DB58E5EFCCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B944DF9FC8FD32D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_085F9B5F742DFB7F_METHOD_2_5B944DF9FC8FD32D_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_085F9B5F742DFB7F_METHOD_2_4D71BCFB74C16073_OFFSET))(this);
	}
};
