#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_RELICGROWTHGUIDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6D9660)
#define RPG_CLIENT_RELICGROWTHGUIDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D96A0)
#define RPG_CLIENT_RELICGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET UNITYSDK_OFFSET(0xC6D96B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicGrowthGuide___c_TypeDefinitionIndex = 61289;

	class RelicGrowthGuide___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_798*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_798*>**)Il2CppClass::FromTypeDefinitionIndex(RelicGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x29DC0);
		}
		static ::RPG::Client::RelicGrowthGuide___c** StaticGet___9()
		{
			return (::RPG::Client::RelicGrowthGuide___c**)Il2CppClass::FromTypeDefinitionIndex(RelicGrowthGuide___c_TypeDefinitionIndex)->GetStaticField(0x29DC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsGrowable_b__2_0(::Class_0_16E4307DCC419505_798* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_798*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE___C__GET_ISGROWABLE_B__2_0_OFFSET))(this, a1);
		}
	};
}
