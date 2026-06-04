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

#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_1_OFFSET UNITYSDK_OFFSET(0xCC5D110)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0xCC5AC30)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0xCC5CCD0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0xCC5BBC0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_F63FE1AA9633F811_1_OFFSET UNITYSDK_OFFSET(0xCC5C030)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_F63FE1AA9633F811_2_OFFSET UNITYSDK_OFFSET(0xCC5F1E0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_F63FE1AA9633F811_3_OFFSET UNITYSDK_OFFSET(0xCC5EBC0)
#define RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xCC5C610)
#define RPG_CUSTOMRP_PREVIEWPPFS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCC5FB50)
#define RPG_CUSTOMRP_PREVIEWPPFS_START_OFFSET UNITYSDK_OFFSET(0xCC5AA90)
#define RPG_CUSTOMRP_PREVIEWPPFS_UPDATE_OFFSET UNITYSDK_OFFSET(0xCC5AB10)
#define RPG_CUSTOMRP_PREVIEWPPFS__CTOR_OFFSET UNITYSDK_OFFSET(0xCC60720)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int previewPPFS_TypeDefinitionIndex = 48490;

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

		::System::Void Method_5_F63FE1AA9633F811()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_F63FE1AA9633F811_OFFSET))(this);
		}

		::System::Void Method_5_11A5396029C33A57()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_11A5396029C33A57_OFFSET))(this);
		}

		::System::Void Method_5_39FD7185C859CEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_39FD7185C859CEAD_OFFSET))(this);
		}

		::System::Void Method_5_F63FE1AA9633F811_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_F63FE1AA9633F811_1_OFFSET))(this);
		}

		::System::Void Method_5_F63FE1AA9633F811_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_F63FE1AA9633F811_2_OFFSET))(this);
		}

		::System::Void Method_5_0E3D8071A5930FA8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_0E3D8071A5930FA8_1_OFFSET))(this);
		}

		::System::Void Method_5_F63FE1AA9633F811_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PREVIEWPPFS_METHOD_5_F63FE1AA9633F811_3_OFFSET))(this);
		}
	};
}
