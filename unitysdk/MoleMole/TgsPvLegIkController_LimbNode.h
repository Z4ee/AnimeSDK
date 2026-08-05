#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class LimbIK; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TGSPVLEGIKCONTROLLER_LIMBNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1190F510)

namespace MoleMole
{
	inline static constexpr unsigned int TgsPvLegIkController_LimbNode_TypeDefinitionIndex = 56647;

	class TgsPvLegIkController_LimbNode : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::RootMotion::FinalIK::LimbIK* ik; // 0x18

		::System::Void _ctor(::RootMotion::FinalIK::LimbIK* tIk, ::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::LimbIK*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TGSPVLEGIKCONTROLLER_LIMBNODE__CTOR_OFFSET))(this, tIk, t);
		}
	};
}
