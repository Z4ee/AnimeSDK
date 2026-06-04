#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Motions/MonoUIMarquee_MarqueeAxis.h"
#include "unitysdk/RPG/Client/Motions/MonoUIMarquee_MarqueeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_3F1B1DE9D9F51912;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1A58D0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_1BEAB60076010082_OFFSET UNITYSDK_OFFSET(0xC1A5F00)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_75B0F17F1816A50B_OFFSET UNITYSDK_OFFSET(0xC1A6200)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xC1A5CC0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC1A5BB0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0xC1A5B40)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0xC1A5E40)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0xC1A5D80)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_UPDATE_OFFSET UNITYSDK_OFFSET(0xC1A5A30)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE__CTOR_OFFSET UNITYSDK_OFFSET(0xC1A64D0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE___CREATECIRCLEMOTION_B__9_0_OFFSET UNITYSDK_OFFSET(0xC1A64E0)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoUIMarquee_TypeDefinitionIndex = 68640;

	class MonoUIMarquee : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Motions::MonoUIMarquee_MarqueeAxis _Axis; // 0x18
		::RPG::Client::Motions::MonoUIMarquee_MarqueeType _Type; // 0x1C
		::System::Single _WaitTime; // 0x20
		::System::Single _Speed; // 0x24
		::UnityEngine::RectTransform* Field_5_4; // 0x28
		::UnityEngine::RectTransform* Field_5_5; // 0x30
		::System::Single Field_5_6; // 0x38
		::System::Single Field_5_7; // 0x3C
		::System::Boolean Field_5_8; // 0x40
		::System::Boolean Field_5_9; // 0x41
		::Class_3_3F1B1DE9D9F51912* Field_5_10; // 0x48

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

		::System::Void Method_5_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_7744894CEC41BF06_OFFSET))(this);
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
