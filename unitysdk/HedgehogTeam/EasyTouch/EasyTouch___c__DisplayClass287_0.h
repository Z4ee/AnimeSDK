#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HedgehogTeam::EasyTouch { class ECamera; }
namespace UnityEngine { class Camera; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__DISPLAYCLASS287_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1651FF20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__DISPLAYCLASS287_0__REMOVECAMERA_B__0_OFFSET UNITYSDK_OFFSET(0x16521490)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch___c__DisplayClass287_0_TypeDefinitionIndex = 39038;

	class EasyTouch___c__DisplayClass287_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* cam; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__DISPLAYCLASS287_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveCamera_b__0(::HedgehogTeam::EasyTouch::ECamera* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::ECamera*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH___C__DISPLAYCLASS287_0__REMOVECAMERA_B__0_OFFSET))(this, a1);
		}
	};
}
