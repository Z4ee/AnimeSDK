#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Motions/MonoUIMarquee_MarqueeAxis.h"
#include "unitysdk/RPG/Client/Motions/MonoUIMarquee_MarqueeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_3F1B1DE9D9F51912;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D90420)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x9D90810)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9D90700)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x9D90690)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_F3E6D35BDBDAABF3_OFFSET UNITYSDK_OFFSET(0x9D90DB0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0x9D90990)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x9D908D0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FD75E07BF87A91BC_OFFSET UNITYSDK_OFFSET(0x9D90A50)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D90580)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D910F0)
#define RPG_CLIENT_MOTIONS_MONOUIMARQUEE___CREATECIRCLEMOTION_B__9_0_OFFSET UNITYSDK_OFFSET(0x9D91100)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoUIMarquee_TypeDefinitionIndex = 60264;

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

		::Class_3_3F1B1DE9D9F51912* Method_5_FD75E07BF87A91BC()
		{
			return ((::Class_3_3F1B1DE9D9F51912*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_FD75E07BF87A91BC_OFFSET))(this);
		}

		::Class_3_3F1B1DE9D9F51912* Method_5_F3E6D35BDBDAABF3()
		{
			return ((::Class_3_3F1B1DE9D9F51912*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE_METHOD_5_F3E6D35BDBDAABF3_OFFSET))(this);
		}

		::System::Void __CreateCircleMotion_b__9_0(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOUIMARQUEE___CREATECIRCLEMOTION_B__9_0_OFFSET))(this, trans);
		}
	};
}
