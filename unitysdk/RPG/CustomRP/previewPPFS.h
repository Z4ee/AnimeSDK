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

#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_1_OFFSET UNITYSDK_OFFSET(0xA7B4A90)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0xA7B26D0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0xA7B35A0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0xA7B6A20)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_AE80CBC984AADFD5_1_OFFSET UNITYSDK_OFFSET(0xA7B6440)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xA7B3FC0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0xA7B3A00)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0xA7B4660)
#define RPG_CUSTOMRP_PREVIEWPPFS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA7B72F0)
#define RPG_CUSTOMRP_PREVIEWPPFS_START_OFFSET UNITYSDK_OFFSET(0xA7B2530)
#define RPG_CUSTOMRP_PREVIEWPPFS_UPDATE_OFFSET UNITYSDK_OFFSET(0xA7B25B0)
#define RPG_CUSTOMRP_PREVIEWPPFS__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B7EC0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int previewPPFS_TypeDefinitionIndex = 41900;

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

		::System::Void Method_5_AE80CBC984AADFD5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_AE80CBC984AADFD5_OFFSET))(this);
		}

		::System::Void Method_5_C83B2479936B63C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_C83B2479936B63C3_OFFSET))(this);
		}

		::System::Void Method_5_81A66FB988DFA6AA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_81A66FB988DFA6AA_OFFSET))(this);
		}

		::System::Void Method_5_B29205EE7F7B640C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_B29205EE7F7B640C_OFFSET))(this);
		}

		::System::Void Method_5_A2172401030892FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_A2172401030892FD_OFFSET))(this);
		}

		::System::Void Method_5_0E3D8071A5930FA8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_1_OFFSET))(this);
		}

		::System::Void Method_5_AE80CBC984AADFD5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_AE80CBC984AADFD5_1_OFFSET))(this);
		}
	};
}
