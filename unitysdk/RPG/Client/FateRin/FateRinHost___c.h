#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
namespace System { class Action; }

#define RPG_CLIENT_FATERIN_FATERINHOST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A38B860)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A38B890)
#define RPG_CLIENT_FATERIN_FATERINHOST___C__TRANSFERANDAUTOSHOWHOUGUMAPPAGE_B__21_0_OFFSET UNITYSDK_OFFSET(0x1A38B8D0)
#define RPG_CLIENT_FATERIN_FATERINHOST___C___CCTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A38B8A0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinHost___c_TypeDefinitionIndex = 75567;

	class FateRinHost___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::FateRinHost___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::FateRinHost___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinHost___c_TypeDefinitionIndex)->GetStaticField(0xAC30);
		}
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(FateRinHost___c_TypeDefinitionIndex)->GetStaticField(0xAC38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__CTOR_OFFSET))(this);
		}

		::Class_1_7B4E9156998275BE* __cctor_b__0_0()
		{
			return ((::Class_1_7B4E9156998275BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C___CCTOR_B__0_0_OFFSET))(this);
		}

		::System::Void _TransferAndAutoShowHouguMapPage_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINHOST___C__TRANSFERANDAUTOSHOWHOUGUMAPPAGE_B__21_0_OFFSET))(this);
		}
	};
}
