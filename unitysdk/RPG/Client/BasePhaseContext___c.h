#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C0259C461ECB54D1;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_BASEPHASECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F1A9F0)
#define RPG_CLIENT_BASEPHASECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F1AA20)
#define RPG_CLIENT_BASEPHASECONTEXT___C__DISPOSE_B__10_0_OFFSET UNITYSDK_OFFSET(0x19F1AA50)
#define RPG_CLIENT_BASEPHASECONTEXT___C__INIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x19F1AA30)

namespace RPG::Client
{
	inline static constexpr unsigned int BasePhaseContext___c_TypeDefinitionIndex = 61209;

	class BasePhaseContext___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_C0259C461ECB54D1*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::Class_1_C0259C461ECB54D1*>**)Il2CppClass::FromTypeDefinitionIndex(BasePhaseContext___c_TypeDefinitionIndex)->GetStaticField(0x3E90);
		}
		static ::RPG::Client::BasePhaseContext___c** StaticGet___9()
		{
			return (::RPG::Client::BasePhaseContext___c**)Il2CppClass::FromTypeDefinitionIndex(BasePhaseContext___c_TypeDefinitionIndex)->GetStaticField(0x3E98);
		}
		static ::System::Action_1<::Class_1_C0259C461ECB54D1*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_1_C0259C461ECB54D1*>**)Il2CppClass::FromTypeDefinitionIndex(BasePhaseContext___c_TypeDefinitionIndex)->GetStaticField(0x3EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void _init_b__2_0(::Class_1_C0259C461ECB54D1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C0259C461ECB54D1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT___C__INIT_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _Dispose_b__10_0(::Class_1_C0259C461ECB54D1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C0259C461ECB54D1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASECONTEXT___C__DISPOSE_B__10_0_OFFSET))(this, a1);
		}
	};
}
