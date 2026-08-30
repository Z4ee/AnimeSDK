#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B3CB0277F28E93FA;
namespace RPG::Client::FateRin::Card { class FateRinCardKeywordViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFE2CF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE2D30)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xCFE2D40)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0xCFE2D60)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardKeywordListViewModel___c_TypeDefinitionIndex = 79817;

	class FateRinCardKeywordListViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_B3CB0277F28E93FA*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_B3CB0277F28E93FA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardKeywordListViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3450);
		}
		static ::System::Func_2<::Class_1_B3CB0277F28E93FA*, ::RPG::Client::FateRin::Card::FateRinCardKeywordViewModel*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::Class_1_B3CB0277F28E93FA*, ::RPG::Client::FateRin::Card::FateRinCardKeywordViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardKeywordListViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3458);
		}
		static ::RPG::Client::FateRin::Card::FateRinCardKeywordListViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Card::FateRinCardKeywordListViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardKeywordListViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0_0(::Class_1_B3CB0277F28E93FA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B3CB0277F28E93FA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::FateRinCardKeywordViewModel* __ctor_b__0_1(::Class_1_B3CB0277F28E93FA* a1)
		{
			return ((::RPG::Client::FateRin::Card::FateRinCardKeywordViewModel*(*)(::PVOID, ::Class_1_B3CB0277F28E93FA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL___C___CTOR_B__0_1_OFFSET))(this, a1);
		}
	};
}
