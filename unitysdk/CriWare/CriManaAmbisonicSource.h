#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dSource; }

#define CRIWARE_CRIMANAAMBISONICSOURCE_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12C1B830)
#define CRIWARE_CRIMANAAMBISONICSOURCE_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x12C1B550)
#define CRIWARE_CRIMANAAMBISONICSOURCE_FORCEUPDATEAMBISONICSOURCEORIENTATION_OFFSET UNITYSDK_OFFSET(0x12C1BA90)
#define CRIWARE_CRIMANAAMBISONICSOURCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12C1B840)
#define CRIWARE_CRIMANAAMBISONICSOURCE_ROATATEAMBISONICSOURCEORIENTATIONBYTRANSFORMOFCHILD_OFFSET UNITYSDK_OFFSET(0x12C1BCE0)
#define CRIWARE_CRIMANAAMBISONICSOURCE_UPDATEAMBISONICSOURCEORIENTATION_OFFSET UNITYSDK_OFFSET(0x12C1B6C0)
#define CRIWARE_CRIMANAAMBISONICSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1C160)

namespace CriWare
{
	inline static constexpr unsigned int CriManaAmbisonicSource_TypeDefinitionIndex = 36868;

	class CriManaAmbisonicSource : public ::CriWare::CriMonoBehaviour
	{
	public:
		::CriWare::CriAtomEx3dSource* atomEx3DsourceForAmbisonics; // 0x28
		::UnityEngine::Vector3 ambisonicSourceOrientationFront; // 0x30
		::UnityEngine::Vector3 ambisonicSourceOrientationTop; // 0x3C
		::UnityEngine::Vector3 lastEulerOfAmbisonicSource; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAAMBISONICSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAAMBISONICSOURCE_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAAMBISONICSOURCE_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAAMBISONICSOURCE_ONENABLE_OFFSET))(this);
		}

		::System::Void ForceUpdateAmbisonicSourceOrientation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAAMBISONICSOURCE_FORCEUPDATEAMBISONICSOURCEORIENTATION_OFFSET))(this);
		}

		::System::Void UpdateAmbisonicSourceOrientation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAAMBISONICSOURCE_UPDATEAMBISONICSOURCEORIENTATION_OFFSET))(this);
		}

		::System::Void RoatateAmbisonicSourceOrientationByTransformOfChild(::UnityEngine::Vector3& input_euler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAAMBISONICSOURCE_ROATATEAMBISONICSOURCEORIENTATIONBYTRANSFORMOFCHILD_OFFSET))(this, input_euler);
		}
	};
}
