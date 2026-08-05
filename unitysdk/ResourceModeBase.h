#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RESOURCEMODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CDF30)

inline static constexpr unsigned int ResourceModeBase_TypeDefinitionIndex = 86895;

class ResourceModeBase : public ::System::Object
{
public:
	::System::Action* versionResourceDone; // 0x10

	::System::Void _ctor(::System::Action* versionResourceDone)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RESOURCEMODEBASE__CTOR_OFFSET))(this, versionResourceDone);
	}
};
