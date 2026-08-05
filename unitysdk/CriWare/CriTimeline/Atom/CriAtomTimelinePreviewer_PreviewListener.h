#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dListener; }
namespace CriWare { class CriAtomListener; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FB8F400)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB8F430)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_EXILE_OFFSET UNITYSDK_OFFSET(0x1FB8FF90)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FB8F380)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_SET3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FB8F4F0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB8F320)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomTimelinePreviewer_PreviewListener_TypeDefinitionIndex = 35045;

	class CriAtomTimelinePreviewer_PreviewListener : public ::System::Object
	{
	public:
		::CriWare::CriAtomListener* transformObj; // 0x10
		::CriWare::CriAtomEx3dListener* listener; // 0x18
		::System::Nullable_1<::UnityEngine::Vector3> lastPos; // 0x20
		::System::Boolean disposed; // 0x30

		::System::Void _ctor(::CriWare::CriAtomListener* listenerObj)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER__CTOR_OFFSET))(this, listenerObj);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_DISPOSE_OFFSET))(this);
		}

		::System::Void dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_DISPOSE_1_OFFSET))(this);
		}

		::System::Void Set3dTransform(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_SET3DTRANSFORM_OFFSET))(this, deltaTime);
		}

		::System::Void Exile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMTIMELINEPREVIEWER_PREVIEWLISTENER_EXILE_OFFSET))(this);
		}
	};
}
