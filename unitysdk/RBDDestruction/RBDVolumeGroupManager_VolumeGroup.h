#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RBDDestruction { class VolumeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RBDDESTRUCTION_RBDVOLUMEGROUPMANAGER_VOLUMEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xF7946B0)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDVolumeGroupManager_VolumeGroup_TypeDefinitionIndex = 27195;

	class RBDVolumeGroupManager_VolumeGroup : public ::System::Object
	{
	public:
		::System::String* groupName; // 0x10
		::UnityEngine::Color groupColor; // 0x18
		::System::Collections::Generic::List_1<::RBDDestruction::VolumeData*>* volumes; // 0x28
		::System::Boolean foldout; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDVOLUMEGROUPMANAGER_VOLUMEGROUP__CTOR_OFFSET))(this);
		}
	};
}
