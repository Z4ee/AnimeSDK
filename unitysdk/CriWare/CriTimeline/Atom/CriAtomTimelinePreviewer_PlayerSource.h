#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare { class CriAtomEx3dListener; }
namespace CriWare { class CriAtomEx3dSource; }
namespace CriWare { class CriAtomExPlayer; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D9D80)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomTimelinePreviewer_PlayerSource_TypeDefinitionIndex = 32840;

	struct alignas(8) CriAtomTimelinePreviewer_PlayerSource
	{
		::CriWare::CriAtomExPlayer* player; // 0x10
		::CriWare::CriAtomEx3dSource* source3d; // 0x18

		::System::Void _ctor(::CriWare::CriAtomEx3dListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PLAYERSOURCE__CTOR_OFFSET))(this, listener);
		}
	};
}
