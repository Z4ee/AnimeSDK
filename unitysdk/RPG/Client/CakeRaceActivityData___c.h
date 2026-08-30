#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CAKERACEACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C636300)
#define RPG_CLIENT_CAKERACEACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C636340)
#define RPG_CLIENT_CAKERACEACTIVITYDATA___C___GOTOENTRANCEPAGE_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C636350)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceActivityData___c_TypeDefinitionIndex = 61693;

	class CakeRaceActivityData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeRaceActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceActivityData___c_TypeDefinitionIndex)->GetStaticField(0x16D20);
		}
		static ::System::Action** StaticGet___9__5_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceActivityData___c_TypeDefinitionIndex)->GetStaticField(0x16D28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Void __GotoEntrancePage_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEACTIVITYDATA___C___GOTOENTRANCEPAGE_B__5_1_OFFSET))(this);
		}
	};
}
