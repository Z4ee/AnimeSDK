#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class VirtualCameraFollowBehavior; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_VIRTUALCAMERAFOLLOWMONOPLUGIN_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7781B0)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA778210)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA778260)
#define RPG_CLIENT_VIRTUALCAMERAFOLLOWMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA778280)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCameraFollowMonoPlugin_TypeDefinitionIndex = 57588;

	class VirtualCameraFollowMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::VirtualCameraFollowBehavior*>
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::UnityEngine::Rendering::CRPVirtualCamera* VC; // 0x38
		::UnityEngine::Transform* targetObject; // 0x40
		::UnityEngine::Transform* ScreenObject; // 0x48
		::System::Boolean useRotateVC; // 0x50
		::System::Boolean useAnimateBlend; // 0x51
		::UnityEngine::Transform* ReferrenceCameraTrans; // 0x58
		::UnityEngine::Transform* MainCamera; // 0x60
		::System::Boolean UseFOVCorrection; // 0x68
		::System::Single DefaultFOV; // 0x6C
		::System::Single QuadRatio; // 0x70
		::System::Boolean UseFakeRT; // 0x74
		::UnityEngine::Transform* ScreenCornerA; // 0x78
		::UnityEngine::Transform* ScreenCornerB; // 0x80
		::UnityEngine::Transform* ScreenCornerC; // 0x88
		::UnityEngine::Transform* ScreenCornerD; // 0x90
		::RPG::CustomRP::CRPVirtualCameraVolumn* Volumn; // 0x98
		::System::Int32 VCIndex; // 0xA0
		::System::Single fadeRate; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWMONOPLUGIN_CLEAR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAFOLLOWMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
