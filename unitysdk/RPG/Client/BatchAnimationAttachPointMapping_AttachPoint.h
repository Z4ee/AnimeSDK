#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_BATCHANIMATIONATTACHPOINTMAPPING_ATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B8180)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationAttachPointMapping_AttachPoint_TypeDefinitionIndex = 64981;

	class BatchAnimationAttachPointMapping_AttachPoint : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 BoneIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONATTACHPOINTMAPPING_ATTACHPOINT__CTOR_OFFSET))(this);
		}
	};
}
