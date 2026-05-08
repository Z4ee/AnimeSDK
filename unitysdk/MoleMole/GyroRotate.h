#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GyroBaseMono.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_GYROROTATE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1B722800)
#define MOLEMOLE_GYROROTATE_METHOD_6_189C865264480324_OFFSET UNITYSDK_OFFSET(0x1B722850)
#define MOLEMOLE_GYROROTATE_METHOD_6_7D3DB889EB40A97B_OFFSET UNITYSDK_OFFSET(0x1B723170)
#define MOLEMOLE_GYROROTATE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B722760)
#define MOLEMOLE_GYROROTATE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B7224C0)
#define MOLEMOLE_GYROROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7230F0)

namespace MoleMole
{
	inline static constexpr unsigned int GyroRotate_TypeDefinitionIndex = 7790;

	class GyroRotate : public ::GyroBaseMono
	{
	public:
		::UnityEngine::Quaternion Field_6_0; // 0x60
		::UnityEngine::Vector3 Field_6_1; // 0x70
		::UnityEngine::Quaternion Field_6_2; // 0x7C
		::UnityEngine::Vector3 Field_6_3; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_ONDISABLE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_6_189C865264480324()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_METHOD_6_189C865264480324_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_6_7D3DB889EB40A97B(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_GYROROTATE_METHOD_6_7D3DB889EB40A97B_OFFSET))(this, a1);
		}
	};
}
