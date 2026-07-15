#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FC7BB0)
#define RPG_CLIENT_MAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC7BE0)
#define RPG_CLIENT_MAP___C__LOADSTAGEONSTEP2_B__19_0_OFFSET UNITYSDK_OFFSET(0x17FC7BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int Map___c_TypeDefinitionIndex = 58142;

	class Map___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Map___c** StaticGet___9()
		{
			return (::RPG::Client::Map___c**)Il2CppClass::FromTypeDefinitionIndex(Map___c_TypeDefinitionIndex)->GetStaticField(0x410C0);
		}
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Map___c_TypeDefinitionIndex)->GetStaticField(0x410C8);
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
