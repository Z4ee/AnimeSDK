#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::ChenLing { class ChenLingRTDamageData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B8CEB0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B8CEF0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__REORDER_B__6_0_OFFSET UNITYSDK_OFFSET(0x19B8CF00)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRTDamageCollection___c_TypeDefinitionIndex = 73876;

	class ChenLingRTDamageCollection___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*, ::System::Single>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingRTDamageCollection___c_TypeDefinitionIndex)->GetStaticField(0x38E70);
		}
		static ::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageCollection___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageCollection___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingRTDamageCollection___c_TypeDefinitionIndex)->GetStaticField(0x38E78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__CTOR_OFFSET))(this);
		}

		::System::Single _ReOrder_b__6_0(::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingRTDamageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGECOLLECTION___C__REORDER_B__6_0_OFFSET))(this, a1);
		}
	};
}
