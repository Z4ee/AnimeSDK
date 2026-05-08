#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_PARENTCAMERAMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

namespace Cinemachine
{
	inline static constexpr unsigned int NapVirtualStateDrivenCamera_ParentCameraMove_TypeDefinitionIndex = 32508;

	struct alignas(8) NapVirtualStateDrivenCamera_ParentCameraMove
	{
		::System::String* m_CameraMoveMode; // 0x10
		::System::String* m_ParentCameraMoveMode; // 0x18

		::System::Void _ctor(::System::String* h, ::System::String* p)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPVIRTUALSTATEDRIVENCAMERA_PARENTCAMERAMOVE__CTOR_OFFSET))(this, h, p);
		}
	};
}
