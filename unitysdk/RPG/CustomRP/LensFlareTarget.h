#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class LensFlareElement; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_LENSFLARETARGET_COMPARETO_OFFSET UNITYSDK_OFFSET(0x18EE7B80)
#define RPG_CUSTOMRP_LENSFLARETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE7BD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LensFlareTarget_TypeDefinitionIndex = 35495;

	class LensFlareTarget : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::CustomRP::LensFlareElement*>* Elements; // 0x10
		::UnityEngine::GameObject* Target; // 0x18
		::UnityEngine::RenderTexture* ProbeTex; // 0x20
		::System::Single TotalAlphaScale; // 0x28
		::System::Single TotalSizeScale; // 0x2C
		::System::Int32 Priority; // 0x30
		::System::Single ColorThreshold; // 0x34
		::System::Single DephtBias; // 0x38
		::System::Single SampleRedius; // 0x3C
		::System::Single TotalAspectScale; // 0x40
		::System::Single TotalRotationOffset; // 0x44
		::System::Single TotalOffsetScale; // 0x48
		::System::Single MinSizeWhenFade; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LENSFLARETARGET__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LENSFLARETARGET_COMPARETO_OFFSET))(this, a1);
		}
	};
}
