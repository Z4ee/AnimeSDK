#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChimeraViewProxy.h"

namespace System { class String; }

#define RPG_CLIENT_CHIMERAWORKVIEWPROXY_POSTEVENT_OFFSET UNITYSDK_OFFSET(0xB6C9990)
#define RPG_CLIENT_CHIMERAWORKVIEWPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C9D80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkViewProxy_TypeDefinitionIndex = 64231;

	class ChimeraWorkViewProxy : public ::RPG::Client::BaseChimeraViewProxy
	{
	public:
		::System::Int32 Phase; // 0x30
		::System::Int32 IndexInRound; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKVIEWPROXY__CTOR_OFFSET))(this);
		}

		::System::Void PostEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKVIEWPROXY_POSTEVENT_OFFSET))(this, a1);
		}
	};
}
