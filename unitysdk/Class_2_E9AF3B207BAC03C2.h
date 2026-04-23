#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class Effect_FlareOcclusion; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1251CB90)
#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_7ED485F184B9E7CC_OFFSET UNITYSDK_OFFSET(0x1251D1F0)
#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1251D2B0)
#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x1251CB20)
#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1251D260)
#define CLASS_2_E9AF3B207BAC03C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1251D2A0)

inline static constexpr unsigned int Class_2_E9AF3B207BAC03C2_TypeDefinitionIndex = 64974;

class Class_2_E9AF3B207BAC03C2 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::ParticleSystem* Field_2_0; // 0x18
	::UnityEngine::Camera* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Effect_FlareOcclusion* Method_2_7ED485F184B9E7CC()
	{
		return ((::RPG::Client::Effect_FlareOcclusion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_7ED485F184B9E7CC_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
