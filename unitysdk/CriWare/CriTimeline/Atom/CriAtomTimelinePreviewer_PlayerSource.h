#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dSource; }
namespace CriWare { class CriAtomExPlayer; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_CLEARLASTPOS_OFFSET UNITYSDK_OFFSET(0x1FB94560)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FB94080)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB940D0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FB93FF0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_SET3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FB941B0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB93D80)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomTimelinePreviewer_PlayerSource_TypeDefinitionIndex = 35044;

	class CriAtomTimelinePreviewer_PlayerSource : public ::System::Object
	{
	public:
		::CriWare::CriAtomEx3dSource* source3d; // 0x10
		::CriWare::CriAtomExPlayer* player; // 0x18
		::System::Nullable_1<::UnityEngine::Vector3> lastPos; // 0x20
		::System::Boolean disposed; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_DISPOSE_1_OFFSET))(this);
		}

		::System::Void Set3dTransform(::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 up, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_SET3DTRANSFORM_OFFSET))(this, pos, forward, up, deltaTime);
		}

		::System::Void ClearLastPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE_CLEARLASTPOS_OFFSET))(this);
		}
	};
}
