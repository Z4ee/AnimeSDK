#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEABB30)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDEABB70)
#define RPG_CLIENT_ROGUEENDLESSACTIVITYDATA___C___HASNEWAREA_B__5_0_OFFSET UNITYSDK_OFFSET(0xDEABB80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessActivityData___c_TypeDefinitionIndex = 61747;

	class RogueEndlessActivityData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueEndlessActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueEndlessActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueEndlessActivityData___c_TypeDefinitionIndex)->GetStaticField(0x63380);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueEndlessActivityData___c_TypeDefinitionIndex)->GetStaticField(0x63388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __HasNewArea_b__5_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSACTIVITYDATA___C___HASNEWAREA_B__5_0_OFFSET))(this, a1);
		}
	};
}
