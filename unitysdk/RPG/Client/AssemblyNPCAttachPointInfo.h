#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ASSEMBLYNPCATTACHPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32F410)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemblyNPCAttachPointInfo_TypeDefinitionIndex = 60187;

	class AssemblyNPCAttachPointInfo : public ::System::Object
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::String* AttachPointPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMBLYNPCATTACHPOINTINFO__CTOR_OFFSET))(this);
		}
	};
}
