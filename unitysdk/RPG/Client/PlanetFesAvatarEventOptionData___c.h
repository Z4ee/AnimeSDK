#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarEventOptionResultData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F85160)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F851A0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__GET_ISALLRESULTGOT_B__21_0_OFFSET UNITYSDK_OFFSET(0x9F851B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEventOptionData___c_TypeDefinitionIndex = 54144;

	class PlanetFesAvatarEventOptionData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarEventOptionData___c_TypeDefinitionIndex)->GetStaticField(0x46640);
		}
		static ::RPG::Client::PlanetFesAvatarEventOptionData___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesAvatarEventOptionData___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarEventOptionData___c_TypeDefinitionIndex)->GetStaticField(0x46648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsAllResultGot_b__21_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__GET_ISALLRESULTGOT_B__21_0_OFFSET))(this, x);
		}
	};
}
