#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginSyncTargetNormalizedTime; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_EBD2E97EDDC48B89_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16587B00)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_1266718F168A426C_OFFSET UNITYSDK_OFFSET(0x165885B0)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_8B73A4B695AF2EBA_OFFSET UNITYSDK_OFFSET(0x16587D90)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x16587BD0)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x16587B70)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_AF93A280AD1D3043_OFFSET UNITYSDK_OFFSET(0x16588600)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x16587A90)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16587D40)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_D8767955799CFD63_OFFSET UNITYSDK_OFFSET(0x16587DE0)
#define CLASS_2_EBD2E97EDDC48B89__CTOR_OFFSET UNITYSDK_OFFSET(0x165886C0)

inline static constexpr unsigned int Class_2_EBD2E97EDDC48B89_TypeDefinitionIndex = 69868;

class Class_2_EBD2E97EDDC48B89 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Animator* ENJHGOIKBMG; // 0x18
	::UnityEngine::Animator* FGJKNDNCCCJ; // 0x20
	::System::Int32 ENMONAJOEME; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8B73A4B695AF2EBA(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_8B73A4B695AF2EBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8767955799CFD63(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_D8767955799CFD63_OFFSET))(this, a1);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_2_AF93A280AD1D3043(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Animator*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_AF93A280AD1D3043_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime* Method_2_1266718F168A426C()
	{
		return ((::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_1266718F168A426C_OFFSET))(this);
	}
};
