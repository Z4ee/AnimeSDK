#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dSource; }

#define CRIWARE_CRIMANAAMBISONICSOURCE_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1DC4B2D0)
#define CRIWARE_CRIMANAAMBISONICSOURCE_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1DC4AFF0)
#define CRIWARE_CRIMANAAMBISONICSOURCE_FORCEUPDATEAMBISONICSOURCEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1DC4B530)
#define CRIWARE_CRIMANAAMBISONICSOURCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DC4B2E0)
#define CRIWARE_CRIMANAAMBISONICSOURCE_ROATATEAMBISONICSOURCEORIENTATIONBYTRANSFORMOFCHILD_OFFSET UNITYSDK_OFFSET(0x1DC4B780)
#define CRIWARE_CRIMANAAMBISONICSOURCE_UPDATEAMBISONICSOURCEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1DC4B160)
#define CRIWARE_CRIMANAAMBISONICSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4BB00)

namespace CriWare
{
	inline static constexpr unsigned int CriManaAmbisonicSource_TypeDefinitionIndex = 38829;

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

		::System::Void RoatateAmbisonicSourceOrientationByTransformOfChild(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAAMBISONICSOURCE_ROATATEAMBISONICSOURCEORIENTATIONBYTRANSFORMOFCHILD_OFFSET))(this, a1);
		}
	};
}
