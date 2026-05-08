#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"

namespace MoleMole { class MonoEffectPluginAttachPoint_AttachInfo; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHPOINT_GETATTACHPOINTBYENTITY_OFFSET UNITYSDK_OFFSET(0x12F9C880)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F9CC20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachPoint_TypeDefinitionIndex = 64350;

	class MonoEffectPluginAttachPoint : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::System::String* AttachPoint; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginAttachPoint_AttachInfo*>* AttachOverrideInfoMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::String* GetAttachPointByEntity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHPOINT_GETATTACHPOINTBYENTITY_OFFSET))(this, a1);
		}
	};
}
