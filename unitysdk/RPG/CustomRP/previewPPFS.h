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

#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_00DEF5A164D9A9D5_1_OFFSET UNITYSDK_OFFSET(0x106B1640)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x106AD390)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_1_OFFSET UNITYSDK_OFFSET(0x106AE9C0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0x106ABD10)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x106AE5F0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_1_OFFSET UNITYSDK_OFFSET(0x106B0E00)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x106ADBC0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x106ACF90)
#define RPG_CUSTOMRP_PREVIEWPPFS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x106B2550)
#define RPG_CUSTOMRP_PREVIEWPPFS_START_OFFSET UNITYSDK_OFFSET(0x106ABB00)
#define RPG_CUSTOMRP_PREVIEWPPFS_UPDATE_OFFSET UNITYSDK_OFFSET(0x106ABB80)
#define RPG_CUSTOMRP_PREVIEWPPFS__CTOR_OFFSET UNITYSDK_OFFSET(0x106B2DE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int previewPPFS_TypeDefinitionIndex = 49503;

	class previewPPFS : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::PPFilterStack* ppf; // 0x18
		::System::Single rate; // 0x20
		::System::String* ppfpath; // 0x28
		::RPG::Client::EnvironmentSystem* Field_5_3; // 0x30
		::RPG::CustomRP::RPGColorGrading* Field_5_4; // 0x38
		::RPG::CustomRP::RPGRadialBlur* Field_5_5; // 0x40
		::RPG::CustomRP::RPGVignette* Field_5_6; // 0x48
		::RPG::CustomRP::RPGChromaticAberration* Field_5_7; // 0x50
		::RPG::CustomRP::RPGGaussianBlur* Field_5_8; // 0x58
		::RPG::CustomRP::RPGBlink* Field_5_9; // 0x60
		::RPG::CustomRP::RPGPPPattern* Field_5_10; // 0x68
		::RPG::CustomRP::RPGLensGlitch2* Field_5_11; // 0x70

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

		::System::Void Method_5_00DEF5A164D9A9D5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_00DEF5A164D9A9D5_OFFSET))(this);
		}

		::System::Void Method_5_00DEF5A164D9A9D5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_00DEF5A164D9A9D5_1_OFFSET))(this);
		}

		::System::Void Method_5_0E3D8071A5930FA8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_1_OFFSET))(this);
		}

		::System::Void Method_5_7B411317D337F87A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_7B411317D337F87A_1_OFFSET))(this);
		}
	};
}
