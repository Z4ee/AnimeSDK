#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }

#define RPG_CLIENT_ENVIRONMENTSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEB00E0)
#define RPG_CLIENT_ENVIRONMENTSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCEB0120)
#define RPG_CLIENT_ENVIRONMENTSYSTEM___C___UPDATEGBUFFERLIGHTINGMATBYKEYWORD_B__223_0_OFFSET UNITYSDK_OFFSET(0xCEB0130)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentSystem___c_TypeDefinitionIndex = 69750;

	class EnvironmentSystem___c : public ::System::Object
	{
	public:
		static ::RPG::Client::EnvironmentSystem___c** StaticGet___9()
		{
			return (::RPG::Client::EnvironmentSystem___c**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem___c_TypeDefinitionIndex)->GetStaticField(0x65D40);
		}
		static ::RPG::Client::OnAssetOperationDelegate** StaticGet___9__223_0()
		{
			return (::RPG::Client::OnAssetOperationDelegate**)Il2CppClass::FromTypeDefinitionIndex(EnvironmentSystem___c_TypeDefinitionIndex)->GetStaticField(0x65D48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateGBufferLightingMatByKeyword_b__223_0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTSYSTEM___C___UPDATEGBUFFERLIGHTINGMATBYKEYWORD_B__223_0_OFFSET))(this, a1);
		}
	};
}
