#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChenLing { class ChenLingRTDamageData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6841B0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6841F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__REORDER_B__6_0_OFFSET UNITYSDK_OFFSET(0xA684200)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRTDamageCollection___c_TypeDefinitionIndex = 71329;

	class ChenLingRTDamageCollection___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageCollection___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageCollection___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingRTDamageCollection___c_TypeDefinitionIndex)->GetStaticField(0x28E20);
		}
		static ::System::Func_2<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*, ::System::Single>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingRTDamageCollection___c_TypeDefinitionIndex)->GetStaticField(0x28E28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__CTOR_OFFSET))(this);
		}

		::System::Single _ReOrder_b__6_0(::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData* a)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__REORDER_B__6_0_OFFSET))(this, a);
		}
	};
}
