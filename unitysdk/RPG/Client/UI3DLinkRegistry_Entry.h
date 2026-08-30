#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UIController; }

#define RPG_CLIENT_UI3DLINKREGISTRY_ENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x80380)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DLinkRegistry_Entry_TypeDefinitionIndex = 72922;

	struct alignas(8) UI3DLinkRegistry_Entry
	{
		::RPG::Client::IUI3DController* UI3D; // 0x10
		::RPG::Client::UIController* UI2D; // 0x18

		::System::Void _ctor(::RPG::Client::IUI3DController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IUI3DController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DLINKREGISTRY_ENTRY__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
