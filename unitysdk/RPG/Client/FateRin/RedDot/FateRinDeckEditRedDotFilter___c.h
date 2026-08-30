#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5B05A0)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B05E0)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C__GETSUBKEYS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B5B05F0)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinDeckEditRedDotFilter___c_TypeDefinitionIndex = 79414;

	class FateRinDeckEditRedDotFilter___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::RedDot::FateRinDeckEditRedDotFilter___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::RedDot::FateRinDeckEditRedDotFilter___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinDeckEditRedDotFilter___c_TypeDefinitionIndex)->GetStaticField(0xB060);
		}
		static ::System::Func_2<::RPG::GameCore::FateRinHouguOwnerType, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::FateRinHouguOwnerType, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinDeckEditRedDotFilter___c_TypeDefinitionIndex)->GetStaticField(0xB068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetSubKeys_b__1_0(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER___C__GETSUBKEYS_B__1_0_OFFSET))(this, a1);
		}
	};
}
