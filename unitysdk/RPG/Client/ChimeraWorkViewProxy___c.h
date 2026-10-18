#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB65BD0)
#define RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB65C10)
#define RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__POSTEVENT_B__2_0_OFFSET UNITYSDK_OFFSET(0xCB65C20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkViewProxy___c_TypeDefinitionIndex = 68653;

	class ChimeraWorkViewProxy___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraWorkViewProxy___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraWorkViewProxy___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkViewProxy___c_TypeDefinitionIndex)->GetStaticField(0x14950);
		}
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkViewProxy___c_TypeDefinitionIndex)->GetStaticField(0x14958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__CTOR_OFFSET))(this);
		}

		::System::Void _PostEvent_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__POSTEVENT_B__2_0_OFFSET))(this);
		}
	};
}
