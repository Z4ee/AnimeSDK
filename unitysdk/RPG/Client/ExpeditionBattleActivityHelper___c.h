#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B88AC60)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88ACA0)
#define RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C__GETRANDOMMONSTERICONPATHS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B88ACB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleActivityHelper___c_TypeDefinitionIndex = 61710;

	class ExpeditionBattleActivityHelper___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ExpeditionBattleActivityHelper___c** StaticGet___9()
		{
			return (::RPG::Client::ExpeditionBattleActivityHelper___c**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleActivityHelper___c_TypeDefinitionIndex)->GetStaticField(0x647D0);
		}
		static ::System::Func_2<::System::UInt32, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleActivityHelper___c_TypeDefinitionIndex)->GetStaticField(0x647D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetRandomMonsterIconPaths_b__4_0(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEACTIVITYHELPER___C__GETRANDOMMONSTERICONPATHS_B__4_0_OFFSET))(this, a1);
		}
	};
}
