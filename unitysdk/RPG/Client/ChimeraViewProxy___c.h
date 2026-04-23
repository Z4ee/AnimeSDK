#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHIMERAVIEWPROXY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA086C50)
#define RPG_CLIENT_CHIMERAVIEWPROXY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA086C90)
#define RPG_CLIENT_CHIMERAVIEWPROXY___C__POSTEVENT_B__4_0_OFFSET UNITYSDK_OFFSET(0xA086CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraViewProxy___c_TypeDefinitionIndex = 63313;

	class ChimeraViewProxy___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraViewProxy___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraViewProxy___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraViewProxy___c_TypeDefinitionIndex)->GetStaticField(0x5BE20);
		}
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraViewProxy___c_TypeDefinitionIndex)->GetStaticField(0x5BE28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY___C__CTOR_OFFSET))(this);
		}

		::System::Void _PostEvent_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAVIEWPROXY___C__POSTEVENT_B__4_0_OFFSET))(this);
		}
	};
}
