#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateTraitBuffItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATETRAITDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9BBA10)
#define RPG_CLIENT_FATETRAITDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9BBA50)
#define RPG_CLIENT_FATETRAITDATA___C__ISANYBUFFACTIVE_B__6_0_OFFSET UNITYSDK_OFFSET(0xB9BBA60)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitData___c_TypeDefinitionIndex = 59804;

	class FateTraitData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateTraitData___c** StaticGet___9()
		{
			return (::RPG::Client::FateTraitData___c**)Il2CppClass::FromTypeDefinitionIndex(FateTraitData___c_TypeDefinitionIndex)->GetStaticField(0x191A0);
		}
		static ::System::Func_2<::RPG::Client::FateTraitBuffItem*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::FateTraitBuffItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateTraitData___c_TypeDefinitionIndex)->GetStaticField(0x191A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAnyBuffActive_b__6_0(::RPG::Client::FateTraitBuffItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateTraitBuffItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA___C__ISANYBUFFACTIVE_B__6_0_OFFSET))(this, a1);
		}
	};
}
