#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Motions/MonoUIMarquee_MarqueeAxis.h"
#include "unitysdk/RPG/Client/Motions/MonoUIMarquee_MarqueeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_3F1B1DE9D9F51912;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD8C7AA0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_1BEAB60076010082_OFFSET UNITYSDK_OFFSET(0xD8C8230)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_75B0F17F1816A50B_OFFSET UNITYSDK_OFFSET(0xD8C8530)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD8C7E10)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0xD8C7DA0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xD8C7F20)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0xD8C8170)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0xD8C80B0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD8C7C30)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE__CTOR_OFFSET UNITYSDK_OFFSET(0xD8C8800)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE___CREATECIRCLEMOTION_B__9_0_OFFSET UNITYSDK_OFFSET(0xD8C8810)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoUIMarquee_TypeDefinitionIndex = 73438;

	class MonoUIMarquee : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Motions::MonoUIMarquee_MarqueeAxis _Axis; // 0x18
		::RPG::Client::Motions::MonoUIMarquee_MarqueeType _Type; // 0x1C
		::System::Single _WaitTime; // 0x20
		::System::Single _Speed; // 0x24
		::UnityEngine::RectTransform* LFGMLJCCPCH; // 0x28
		::UnityEngine::RectTransform* FHEMCAFOIKG; // 0x30
		::System::Single OEGGDCLHOHA; // 0x38
		::System::Single CJBBAOGJNCJ; // 0x3C
		::System::Boolean FJMFKJEIOIO; // 0x40
		::System::Boolean ELKJMCILPMA; // 0x41
		::Class_3_3F1B1DE9D9F51912* FOFBPABLCLA; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_UPDATE_OFFSET))(this);
		}

		::System::Boolean Method_5_CF8BA38996D09531()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_CF8BA38996D09531_OFFSET))(this);
		}

		::System::Single Method_5_FAE9C4050544FE63()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FAE9C4050544FE63_OFFSET))(this);
		}

		::System::Single Method_5_FAE9C4050544FE63_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FAE9C4050544FE63_1_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_F5447CD65612575D_OFFSET))(this);
		}

		::Class_3_3F1B1DE9D9F51912* Method_5_1BEAB60076010082()
		{
			return ((::Class_3_3F1B1DE9D9F51912*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_1BEAB60076010082_OFFSET))(this);
		}

		::Class_3_3F1B1DE9D9F51912* Method_5_75B0F17F1816A50B()
		{
			return ((::Class_3_3F1B1DE9D9F51912*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_75B0F17F1816A50B_OFFSET))(this);
		}

		::System::Void __CreateCircleMotion_b__9_0(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE___CREATECIRCLEMOTION_B__9_0_OFFSET))(this, a1);
		}
	};
}
