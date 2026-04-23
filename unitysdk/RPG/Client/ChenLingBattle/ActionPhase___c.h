#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F8AA50)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F8AA90)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__REQUESTSELLHANDCARD_B__5_0_OFFSET UNITYSDK_OFFSET(0x9F8AAA0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ActionPhase___c_TypeDefinitionIndex = 70048;

	class ActionPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(ActionPhase___c_TypeDefinitionIndex)->GetStaticField(0x4D420);
		}
		static ::RPG::Client::ChenLingBattle::ActionPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::ActionPhase___c**)Il2CppClass::FromTypeDefinitionIndex(ActionPhase___c_TypeDefinitionIndex)->GetStaticField(0x4D428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestSellHandCard_b__5_0(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONPHASE___C__REQUESTSELLHANDCARD_B__5_0_OFFSET))(this, e);
		}
	};
}
