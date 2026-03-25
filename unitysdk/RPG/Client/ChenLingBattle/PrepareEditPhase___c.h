#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x933C130)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x933C170)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTFINISHPREPARE_B__8_0_OFFSET UNITYSDK_OFFSET(0x933C1A0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTFINISHPREPARE_B__8_1_OFFSET UNITYSDK_OFFSET(0x933C300)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTMOVEENTITY_B__10_0_OFFSET UNITYSDK_OFFSET(0x933C310)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTSELLHANDCARD_B__6_0_OFFSET UNITYSDK_OFFSET(0x933C190)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTUSEHANDCARD_B__3_1_OFFSET UNITYSDK_OFFSET(0x933C180)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareEditPhase___c_TypeDefinitionIndex = 62067;

	class PrepareEditPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(PrepareEditPhase___c_TypeDefinitionIndex)->GetStaticField(0x460F0);
		}
		static ::RPG::Client::ChenLingBattle::PrepareEditPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::PrepareEditPhase___c**)Il2CppClass::FromTypeDefinitionIndex(PrepareEditPhase___c_TypeDefinitionIndex)->GetStaticField(0x460F8);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(PrepareEditPhase___c_TypeDefinitionIndex)->GetStaticField(0x46100);
		}
		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__8_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(PrepareEditPhase___c_TypeDefinitionIndex)->GetStaticField(0x46108);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__8_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(PrepareEditPhase___c_TypeDefinitionIndex)->GetStaticField(0x46110);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(PrepareEditPhase___c_TypeDefinitionIndex)->GetStaticField(0x46118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestUseHandCard_b__3_1(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTUSEHANDCARD_B__3_1_OFFSET))(this, e);
		}

		::System::Void _RequestSellHandCard_b__6_0(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTSELLHANDCARD_B__6_0_OFFSET))(this, e);
		}

		::RPG::Client::Promises::IPromise* _RequestFinishPrepare_b__8_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTFINISHPREPARE_B__8_0_OFFSET))(this);
		}

		::System::Void _RequestFinishPrepare_b__8_1(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTFINISHPREPARE_B__8_1_OFFSET))(this, e);
		}

		::System::Void _RequestMoveEntity_b__10_0(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE___C__REQUESTMOVEENTITY_B__10_0_OFFSET))(this, e);
		}
	};
}
