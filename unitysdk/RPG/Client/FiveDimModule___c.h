#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FIVEDIMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B5F90)
#define RPG_CLIENT_FIVEDIMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B5FC0)
#define RPG_CLIENT_FIVEDIMMODULE___C__ONENTERGAME_B__159_0_OFFSET UNITYSDK_OFFSET(0xA3B5FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimModule___c_TypeDefinitionIndex = 59077;

	class FiveDimModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FiveDimModule___c** StaticGet___9()
		{
			return (::RPG::Client::FiveDimModule___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimModule___c_TypeDefinitionIndex)->GetStaticField(0x10D00);
		}
		static ::System::Action** StaticGet___9__159_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FiveDimModule___c_TypeDefinitionIndex)->GetStaticField(0x10D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterGame_b__159_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__ONENTERGAME_B__159_0_OFFSET))(this);
		}
	};
}
