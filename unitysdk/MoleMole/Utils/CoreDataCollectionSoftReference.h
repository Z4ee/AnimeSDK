#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/SoftScriptObjectReference_1.h"

namespace PipelineCamera::CameraSequence { class CoreDataCollection; }

#define MOLEMOLE_UTILS_COREDATACOLLECTIONSOFTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x139E1B10)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int CoreDataCollectionSoftReference_TypeDefinitionIndex = 56177;

	class CoreDataCollectionSoftReference : public ::MoleMole::Utils::SoftScriptObjectReference_1<::PipelineCamera::CameraSequence::CoreDataCollection*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_COREDATACOLLECTIONSOFTREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
