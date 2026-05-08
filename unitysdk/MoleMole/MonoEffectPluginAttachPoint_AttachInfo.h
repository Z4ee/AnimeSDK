#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHPOINT_ATTACHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1175ECA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachPoint_AttachInfo_TypeDefinitionIndex = 64351;

	class MonoEffectPluginAttachPoint_AttachInfo : public ::System::Object
	{
	public:
		::System::Int32 templateID; // 0x10
		::System::String* attachPoint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHPOINT_ATTACHINFO__CTOR_OFFSET))(this);
		}
	};
}
