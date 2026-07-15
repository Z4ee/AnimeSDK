#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginSyncTargetNormalizedTime; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_73A46C6487CE333A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169EA6A0)
#define CLASS_2_73A46C6487CE333A_METHOD_2_1266718F168A426C_OFFSET UNITYSDK_OFFSET(0xBF8C330)
#define CLASS_2_73A46C6487CE333A_METHOD_2_5C939BE33A739650_OFFSET UNITYSDK_OFFSET(0x169EA960)
#define CLASS_2_73A46C6487CE333A_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x169EA770)
#define CLASS_2_73A46C6487CE333A_METHOD_2_AF93A280AD1D3043_OFFSET UNITYSDK_OFFSET(0xBF8C270)
#define CLASS_2_73A46C6487CE333A_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x169EA630)
#define CLASS_2_73A46C6487CE333A_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x169EA710)
#define CLASS_2_73A46C6487CE333A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169EA910)
#define CLASS_2_73A46C6487CE333A_METHOD_2_D8767955799CFD63_OFFSET UNITYSDK_OFFSET(0x169EA9B0)
#define CLASS_2_73A46C6487CE333A__CTOR_OFFSET UNITYSDK_OFFSET(0xBF8C380)

inline static constexpr unsigned int Class_2_73A46C6487CE333A_TypeDefinitionIndex = 66766;

class Class_2_73A46C6487CE333A : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Animator* Field_2_0; // 0x18
	::UnityEngine::Animator* Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5C939BE33A739650(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A_METHOD_2_5C939BE33A739650_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8767955799CFD63(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A_METHOD_2_D8767955799CFD63_OFFSET))(this, a1);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_2_AF93A280AD1D3043(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Animator*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A_METHOD_2_AF93A280AD1D3043_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime* Method_2_1266718F168A426C()
	{
		return ((::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73A46C6487CE333A_METHOD_2_1266718F168A426C_OFFSET))(this);
	}
};
