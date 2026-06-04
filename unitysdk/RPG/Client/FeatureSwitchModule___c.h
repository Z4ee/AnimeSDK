#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_8;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FEATURESWITCHMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9C0280)
#define RPG_CLIENT_FEATURESWITCHMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9C02C0)
#define RPG_CLIENT_FEATURESWITCHMODULE___C___CHECKSHIELDEDOUTFITSCHANGED_B__24_0_OFFSET UNITYSDK_OFFSET(0xB9C02D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FeatureSwitchModule___c_TypeDefinitionIndex = 59964;

	class FeatureSwitchModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FeatureSwitchModule___c** StaticGet___9()
		{
			return (::RPG::Client::FeatureSwitchModule___c**)Il2CppClass::FromTypeDefinitionIndex(FeatureSwitchModule___c_TypeDefinitionIndex)->GetStaticField(0x19420);
		}
		static ::System::Func_2<::Class_1_075C34D03AFA1215_8*, ::System::UInt32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_1_075C34D03AFA1215_8*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FeatureSwitchModule___c_TypeDefinitionIndex)->GetStaticField(0x19428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __CheckShieldedOutfitsChanged_b__24_0(::Class_1_075C34D03AFA1215_8* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_075C34D03AFA1215_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE___C___CHECKSHIELDEDOUTFITSCHANGED_B__24_0_OFFSET))(this, a1);
		}
	};
}
