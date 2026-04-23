#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_482F98D76EE0F67C_OFFSET UNITYSDK_OFFSET(0xADD6530)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_5AA26BB73B32743F_OFFSET UNITYSDK_OFFSET(0xADD6740)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_67AEF306C0668389_OFFSET UNITYSDK_OFFSET(0xADD67B0)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_6E5CBF6743011AF7_OFFSET UNITYSDK_OFFSET(0xADD65C0)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_832172BF04246E66_OFFSET UNITYSDK_OFFSET(0xADD60B0)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_B981968D52A481FE_OFFSET UNITYSDK_OFFSET(0xADD6970)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_C8F1E529227E18C5_OFFSET UNITYSDK_OFFSET(0xADD6650)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET__CTOR_OFFSET UNITYSDK_OFFSET(0xADD6A20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_TypeDefinitionIndex = 71810;

	class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* MainCamera; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry*>* _CandidateConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_832172BF04246E66(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_832172BF04246E66_OFFSET))(this, a1);
		}

		::System::Void Method_1_482F98D76EE0F67C(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_482F98D76EE0F67C_OFFSET))(this, a1);
		}

		::System::Void Method_1_6E5CBF6743011AF7(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_6E5CBF6743011AF7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_C8F1E529227E18C5(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_C8F1E529227E18C5_OFFSET))(this, a1);
		}

		::System::Void Method_1_67AEF306C0668389(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_67AEF306C0668389_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_5AA26BB73B32743F(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_5AA26BB73B32743F_OFFSET))(this, a1);
		}

		::System::Void Method_1_B981968D52A481FE(::Cinemachine::CinemachineVirtualCamera* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET_METHOD_1_B981968D52A481FE_OFFSET))(this, a1, a2, a3);
		}
	};
}
