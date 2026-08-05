#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RBDDESTRUCTION_VOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CFB10)

namespace RBDDestruction
{
	inline static constexpr unsigned int VolumeData_TypeDefinitionIndex = 27373;

	class VolumeData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::Color color; // 0x18
		::UnityEngine::Vector3 position; // 0x28
		::UnityEngine::Vector3 rotation; // 0x34
		::UnityEngine::Vector3 scale; // 0x40
		::System::Int32 index; // 0x4C

		::System::Void _ctor(::System::String* volumeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_VOLUMEDATA__CTOR_OFFSET))(this, volumeName);
		}
	};
}
