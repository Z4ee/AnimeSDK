#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBEB8DB0)
#define RPG_CLIENT_MAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB8DE0)
#define RPG_CLIENT_MAP___C__LOADSTAGEONSTEP2_B__19_0_OFFSET UNITYSDK_OFFSET(0xBEB8DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int Map___c_TypeDefinitionIndex = 56895;

	class Map___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Map___c_TypeDefinitionIndex)->GetStaticField(0x51C50);
		}
		static ::RPG::Client::Map___c** StaticGet___9()
		{
			return (::RPG::Client::Map___c**)Il2CppClass::FromTypeDefinitionIndex(Map___c_TypeDefinitionIndex)->GetStaticField(0x51C58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP___C__CTOR_OFFSET))(this);
		}

		::System::Void _LoadStageOnStep2_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP___C__LOADSTAGEONSTEP2_B__19_0_OFFSET))(this);
		}
	};
}
