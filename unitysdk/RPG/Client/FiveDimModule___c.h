#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FIVEDIMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x190D0480)
#define RPG_CLIENT_FIVEDIMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x190D04B0)
#define RPG_CLIENT_FIVEDIMMODULE___C__ONENTERGAME_B__169_0_OFFSET UNITYSDK_OFFSET(0x190D04C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimModule___c_TypeDefinitionIndex = 64273;

	class FiveDimModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__169_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FiveDimModule___c_TypeDefinitionIndex)->GetStaticField(0x140E0);
		}
		static ::RPG::Client::FiveDimModule___c** StaticGet___9()
		{
			return (::RPG::Client::FiveDimModule___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimModule___c_TypeDefinitionIndex)->GetStaticField(0x140E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnterGame_b__169_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___C__ONENTERGAME_B__169_0_OFFSET))(this);
		}
	};
}
