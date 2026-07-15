#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChimeraViewProxy.h"

namespace System { class String; }

#define RPG_CLIENT_CHIMERAVIEWPROXY_GET_INDEXINTEAM_OFFSET UNITYSDK_OFFSET(0x1ADEA270)
#define RPG_CLIENT_CHIMERAVIEWPROXY_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x1ADEA3A0)
#define RPG_CLIENT_CHIMERAVIEWPROXY_SET_INDEXINTEAM_OFFSET UNITYSDK_OFFSET(0x1ADEA280)
#define RPG_CLIENT_CHIMERAVIEWPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEA7A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraViewProxy_TypeDefinitionIndex = 65600;

	class ChimeraViewProxy : public ::RPG::Client::BaseChimeraViewProxy
	{
	public:
		::System::Int32 _IndexInTeam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_IndexInTeam()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY_GET_INDEXINTEAM_OFFSET))(this);
		}

		::System::Void set_IndexInTeam(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY_SET_INDEXINTEAM_OFFSET))(this, a1);
		}

		::System::Void PostEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY_POSTEVENT_OFFSET))(this, a1);
		}
	};
}
