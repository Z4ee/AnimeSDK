#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MAPNPC___C__BEGINFADEIN_B__7_0_OFFSET UNITYSDK_OFFSET(0x9B01F60)
#define RPG_CLIENT_MAPNPC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B01F10)
#define RPG_CLIENT_MAPNPC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B01F50)

namespace RPG::Client
{
	inline static constexpr unsigned int MapNpc___c_TypeDefinitionIndex = 49344;

	class MapNpc___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MapNpc___c** StaticGet___9()
		{
			return (::RPG::Client::MapNpc___c**)Il2CppClass::FromTypeDefinitionIndex(MapNpc___c_TypeDefinitionIndex)->GetStaticField(0x2C6B0);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MapNpc___c_TypeDefinitionIndex)->GetStaticField(0x2C6B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC___C__CTOR_OFFSET))(this);
		}

		::System::Void _BeginFadein_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPNPC___C__BEGINFADEIN_B__7_0_OFFSET))(this);
		}
	};
}
