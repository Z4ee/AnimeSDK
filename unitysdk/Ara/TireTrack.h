#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Ara { class AraTrail; }

#define ARA_TIRETRACK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F643130)
#define ARA_TIRETRACK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F642FF0)
#define ARA_TIRETRACK_PROJECTTOGROUND_OFFSET UNITYSDK_OFFSET(0x1F643210)
#define ARA_TIRETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F643520)

namespace Ara
{
	inline static constexpr unsigned int TireTrack_TypeDefinitionIndex = 33568;

	class TireTrack : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Ara::AraTrail* trail; // 0x18
		::System::Single offset; // 0x20
		::System::Single maxDist; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TIRETRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TIRETRACK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TIRETRACK_ONDISABLE_OFFSET))(this);
		}

		::System::Void ProjectToGround()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TIRETRACK_PROJECTTOGROUND_OFFSET))(this);
		}
	};
}
