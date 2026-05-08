#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_CONSTRAINT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BC8E3F0)
#define ROOTMOTION_FINALIK_CONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8E500)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Constraint_TypeDefinitionIndex = 36552;

	class Constraint : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Single weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_CONSTRAINT_GET_ISVALID_OFFSET))(this);
		}
	};
}
