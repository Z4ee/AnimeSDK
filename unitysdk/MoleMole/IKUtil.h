#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_IKUTIL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x125CFE90)
#define MOLEMOLE_IKUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x125D0030)

namespace MoleMole
{
	inline static constexpr unsigned int IKUtil_TypeDefinitionIndex = 77265;

	class IKUtil : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Vector3 _prvPos; // 0x58
		::UnityEngine::Vector3 _prvRot; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IKUTIL__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IKUTIL_LATEUPDATE_OFFSET))(this);
		}
	};
}
