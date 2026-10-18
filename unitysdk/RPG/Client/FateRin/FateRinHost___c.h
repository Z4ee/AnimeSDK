#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6F4C4ABEDB8B5E9;
namespace System { class Action; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFA5A80)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFA5AB0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__TRANSFERANDAUTOSHOWHOUGUMAPPAGE_B__21_0_OFFSET UNITYSDK_OFFSET(0xCFA5AF0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C___CCTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xCFA5AC0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c_TypeDefinitionIndex = 80524;

	class FateRinHost___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FateRinHost___c_TypeDefinitionIndex)->GetStaticField(0x574E0);
		}
		static ::RPG::Client::FateRin::FateRinHost___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::FateRinHost___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinHost___c_TypeDefinitionIndex)->GetStaticField(0x574E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__CTOR_OFFSET))(this);
		}

		::Class_1_C6F4C4ABEDB8B5E9* __cctor_b__0_0()
		{
			return ((::Class_1_C6F4C4ABEDB8B5E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C___CCTOR_B__0_0_OFFSET))(this);
		}

		::System::Void _TransferAndAutoShowHouguMapPage_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__TRANSFERANDAUTOSHOWHOUGUMAPPAGE_B__21_0_OFFSET))(this);
		}
	};
}
