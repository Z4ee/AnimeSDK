#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::CustomRP { class PPFilterStack; }
namespace RPG::CustomRP { class RPGBlink; }
namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace RPG::CustomRP { class RPGGaussianBlur; }
namespace RPG::CustomRP { class RPGLensGlitch2; }
namespace RPG::CustomRP { class RPGPPPattern; }
namespace RPG::CustomRP { class RPGRadialBlur; }
namespace RPG::CustomRP { class RPGVignette; }
namespace System { class String; }

#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_1_OFFSET UNITYSDK_OFFSET(0x16835850)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0x16832B00)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x16835480)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_1_OFFSET UNITYSDK_OFFSET(0x168341E0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_2_OFFSET UNITYSDK_OFFSET(0x16838540)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_3_OFFSET UNITYSDK_OFFSET(0x16837D00)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x16834A50)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x16833DE0)
#define RPG_CUSTOMRP_PREVIEWPPFS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x168394B0)
#define RPG_CUSTOMRP_PREVIEWPPFS_START_OFFSET UNITYSDK_OFFSET(0x168328F0)
#define RPG_CUSTOMRP_PREVIEWPPFS_UPDATE_OFFSET UNITYSDK_OFFSET(0x16832970)
#define RPG_CUSTOMRP_PREVIEWPPFS__CTOR_OFFSET UNITYSDK_OFFSET(0x16839D40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int previewPPFS_TypeDefinitionIndex = 52161;

	class previewPPFS : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::PPFilterStack* ppf; // 0x18
		::System::Single rate; // 0x20
		::System::String* ppfpath; // 0x28
		::RPG::Client::EnvironmentSystem* LKDKHHMECAG; // 0x30
		::RPG::CustomRP::RPGColorGrading* POMGLACAHDI; // 0x38
		::RPG::CustomRP::RPGRadialBlur* LHPICBOLAFO; // 0x40
		::RPG::CustomRP::RPGVignette* BCFEKNAMPPP; // 0x48
		::RPG::CustomRP::RPGChromaticAberration* MOIHNDMLBPP; // 0x50
		::RPG::CustomRP::RPGGaussianBlur* PMCFCEMADNP; // 0x58
		::RPG::CustomRP::RPGBlink* JKPIJFGCNOP; // 0x60
		::RPG::CustomRP::RPGPPPattern* MMODKOPKKCK; // 0x68
		::RPG::CustomRP::RPGLensGlitch2* IDEHNOEPNIJ; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_0E3D8071A5930FA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_OFFSET))(this);
		}

		::System::Void Method_5_7B411317D337F87A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_OFFSET))(this);
		}

		::System::Void Method_5_6FE6E0587E8D1F5C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_6FE6E0587E8D1F5C_OFFSET))(this);
		}

		::System::Void Method_5_D799715F2EF979EA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_D799715F2EF979EA_OFFSET))(this);
		}

		::System::Void Method_5_7B411317D337F87A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_1_OFFSET))(this);
		}

		::System::Void Method_5_7B411317D337F87A_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_2_OFFSET))(this);
		}

		::System::Void Method_5_0E3D8071A5930FA8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_1_OFFSET))(this);
		}

		::System::Void Method_5_7B411317D337F87A_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_3_OFFSET))(this);
		}
	};
}
