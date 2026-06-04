#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::CustomRP { class CloudTransition_KeyFrame; }
namespace RPG::CustomRP { class VolumetricCloudLayer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CUSTOMRP_CLOUDTRANSITION_ADDKEYFRAME_OFFSET UNITYSDK_OFFSET(0x18ED0040)
#define RPG_CUSTOMRP_CLOUDTRANSITION_CREATEKEYFRAME_OFFSET UNITYSDK_OFFSET(0x18ECFC00)
#define RPG_CUSTOMRP_CLOUDTRANSITION_FINDPREVANDNEXTKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x18ECFB70)
#define RPG_CUSTOMRP_CLOUDTRANSITION_GET_TIME_OFFSET UNITYSDK_OFFSET(0x18ED0DC0)
#define RPG_CUSTOMRP_CLOUDTRANSITION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18ECFA10)
#define RPG_CUSTOMRP_CLOUDTRANSITION_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18ED0DA0)
#define RPG_CUSTOMRP_CLOUDTRANSITION_REMOVEKEYFRAME_OFFSET UNITYSDK_OFFSET(0x18ECFF20)
#define RPG_CUSTOMRP_CLOUDTRANSITION_SETKEYFRAMETIME_OFFSET UNITYSDK_OFFSET(0x18ECFD40)
#define RPG_CUSTOMRP_CLOUDTRANSITION_SET_TIME_OFFSET UNITYSDK_OFFSET(0x18ED0DD0)
#define RPG_CUSTOMRP_CLOUDTRANSITION_START_OFFSET UNITYSDK_OFFSET(0x18ECFA00)
#define RPG_CUSTOMRP_CLOUDTRANSITION_UPDATESHADERPARAMS_1_OFFSET UNITYSDK_OFFSET(0x18ED0D80)
#define RPG_CUSTOMRP_CLOUDTRANSITION_UPDATESHADERPARAMS_OFFSET UNITYSDK_OFFSET(0x18ED0260)
#define RPG_CUSTOMRP_CLOUDTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED0E00)
#define RPG_CUSTOMRP_CLOUDTRANSITION__GETNEXTKEYFRAME_OFFSET UNITYSDK_OFFSET(0x18ECFEB0)
#define RPG_CUSTOMRP_CLOUDTRANSITION__GETPREVKEYFRAME_OFFSET UNITYSDK_OFFSET(0x18ECFE50)
#define RPG_CUSTOMRP_CLOUDTRANSITION__KEYFRAMEINDEXVALID_OFFSET UNITYSDK_OFFSET(0x18ED0D50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CloudTransition_TypeDefinitionIndex = 35403;

	class CloudTransition : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _time; // 0x18
		::System::Collections::Generic::List_1<::RPG::CustomRP::CloudTransition_KeyFrame*>* KeyFrames; // 0x20
		::RPG::CustomRP::VolumetricCloudLayer* _cloudLayer; // 0x28
		::System::Int32 _cachedPrevKeyFrameIndex; // 0x30
		::System::Int32 _cachedNextKeyFrameIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_START_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_INITIALIZE_OFFSET))(this);
		}

		::RPG::CustomRP::CloudTransition_KeyFrame* CreateKeyFrame()
		{
			return ((::RPG::CustomRP::CloudTransition_KeyFrame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_CREATEKEYFRAME_OFFSET))(this);
		}

		::System::Void SetKeyFrameTime(::RPG::CustomRP::CloudTransition_KeyFrame* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CloudTransition_KeyFrame*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_SETKEYFRAMETIME_OFFSET))(this, a1, a2);
		}

		::RPG::CustomRP::CloudTransition_KeyFrame* _GetPrevKeyFrame(::RPG::CustomRP::CloudTransition_KeyFrame* a1)
		{
			return ((::RPG::CustomRP::CloudTransition_KeyFrame*(*)(::PVOID, ::RPG::CustomRP::CloudTransition_KeyFrame*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION__GETPREVKEYFRAME_OFFSET))(this, a1);
		}

		::RPG::CustomRP::CloudTransition_KeyFrame* _GetNextKeyFrame(::RPG::CustomRP::CloudTransition_KeyFrame* a1)
		{
			return ((::RPG::CustomRP::CloudTransition_KeyFrame*(*)(::PVOID, ::RPG::CustomRP::CloudTransition_KeyFrame*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION__GETNEXTKEYFRAME_OFFSET))(this, a1);
		}

		::System::Void RemoveKeyFrame(::RPG::CustomRP::CloudTransition_KeyFrame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CloudTransition_KeyFrame*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_REMOVEKEYFRAME_OFFSET))(this, a1);
		}

		::System::Void AddKeyFrame(::RPG::CustomRP::CloudTransition_KeyFrame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CloudTransition_KeyFrame*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_ADDKEYFRAME_OFFSET))(this, a1);
		}

		::System::Void UpdateShaderParams(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_UPDATESHADERPARAMS_OFFSET))(this, a1);
		}

		::System::Void UpdateShaderParams_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_UPDATESHADERPARAMS_1_OFFSET))(this);
		}

		::System::Void FindPrevAndNextKeyFrames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_FINDPREVANDNEXTKEYFRAMES_OFFSET))(this);
		}

		::System::Boolean _KeyFrameIndexValid(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION__KEYFRAMEINDEXVALID_OFFSET))(this, a1);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Single get_Time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CLOUDTRANSITION_SET_TIME_OFFSET))(this, a1);
		}
	};
}
