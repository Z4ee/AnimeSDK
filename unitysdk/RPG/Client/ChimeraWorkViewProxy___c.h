#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA08B830)
#define RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA08B870)
#define RPG_CLIENT_CHIMERAWORKVIEWPROXY___C__POSTEVENT_B__2_0_OFFSET UNITYSDK_OFFSET(0xA08B880)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkViewProxy___c_TypeDefinitionIndex = 63315;

	class ChimeraWorkViewProxy___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraWorkViewProxy___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraWorkViewProxy___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkViewProxy___c_TypeDefinitionIndex)->GetStaticField(0x5C290);
		}
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkViewProxy___c_TypeDefinitionIndex)->GetStaticField(0x5C298);
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
