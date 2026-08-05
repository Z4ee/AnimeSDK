#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_PARENTCAMERAMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapActionVirtualStateDrivenCamera_ParentCameraMove_TypeDefinitionIndex = 42008;

	struct alignas(8) NapActionVirtualStateDrivenCamera_ParentCameraMove
	{
		::System::String* m_CameraMoveMode; // 0x10
		::System::String* m_ParentCameraMoveMode; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPACTIONVIRTUALSTATEDRIVENCAMERA_PARENTCAMERAMOVE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
