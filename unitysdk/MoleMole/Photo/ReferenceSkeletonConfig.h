#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class BoneSocketConfig; }

#define MOLEMOLE_PHOTO_REFERENCESKELETONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B14B30)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int ReferenceSkeletonConfig_TypeDefinitionIndex = 81752;

	class ReferenceSkeletonConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Photo::BoneSocketConfig*>* sockets; // 0x10
		::Il2CppArray<::PipelineCamera::SerializableHashString>* curves; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_REFERENCESKELETONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
