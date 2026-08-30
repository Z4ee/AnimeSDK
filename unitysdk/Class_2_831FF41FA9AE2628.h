#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class Effect_FlareOcclusion; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_831FF41FA9AE2628_METHOD_2_29A67649D953C695_OFFSET UNITYSDK_OFFSET(0x156BCE40)
#define CLASS_2_831FF41FA9AE2628_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x156BC7A0)
#define CLASS_2_831FF41FA9AE2628_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x156BCEB0)
#define CLASS_2_831FF41FA9AE2628_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x156BC810)
#define CLASS_2_831FF41FA9AE2628__CTOR_OFFSET UNITYSDK_OFFSET(0x156BCEF0)

inline static constexpr unsigned int Class_2_831FF41FA9AE2628_TypeDefinitionIndex = 70439;

class Class_2_831FF41FA9AE2628 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::ParticleSystem* NBJDDOGJDBP; // 0x18
	::UnityEngine::Camera* EKLHELJMIKG; // 0x20
	::System::Boolean JNKCOMNDMAD; // 0x28
	::System::Boolean EMEKMDPDPJG; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_831FF41FA9AE2628__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_831FF41FA9AE2628_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_831FF41FA9AE2628_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_831FF41FA9AE2628_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Effect_FlareOcclusion* Method_2_29A67649D953C695()
	{
		return ((::RPG::Client::Effect_FlareOcclusion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_831FF41FA9AE2628_METHOD_2_29A67649D953C695_OFFSET))(this);
	}
};
