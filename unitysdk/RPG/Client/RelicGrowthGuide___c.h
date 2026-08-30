#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_887;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_RELICGROWTHGUIDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B666310)
#define RPG_CLIENT_RELICGROWTHGUIDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B666350)
#define RPG_CLIENT_RELICGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B666360)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicGrowthGuide___c_TypeDefinitionIndex = 65616;

	class RelicGrowthGuide___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RelicGrowthGuide___c** StaticGet___9()
		{
			return (::RPG::Client::RelicGrowthGuide___c**)Il2CppClass::FromTypeDefinitionIndex(RelicGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x66850);
		}
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_887*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_887*>**)Il2CppClass::FromTypeDefinitionIndex(RelicGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x66858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsGrowable_b__2_0(::Class_0_16E4307DCC419505_887* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_887*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET))(this, a1);
		}
	};
}
