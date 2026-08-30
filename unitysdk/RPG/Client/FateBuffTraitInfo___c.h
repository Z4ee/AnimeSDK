#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATEBUFFTRAITINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C178FA0)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__COUNTUNLOCKEDSLOTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C178FF0)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C178FE0)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFAMPLIFICATION_B__29_0_OFFSET UNITYSDK_OFFSET(0x1C179370)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFAMPLIFICATION_B__29_1_OFFSET UNITYSDK_OFFSET(0x1C179380)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFSLOT_B__21_0_OFFSET UNITYSDK_OFFSET(0x1C179010)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFSLOT_B__21_1_OFFSET UNITYSDK_OFFSET(0x1C179170)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo___c_TypeDefinitionIndex = 64062;

	class FateBuffTraitInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::FateBuffSlotData*>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::RPG::Client::FateBuffSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x65110);
		}
		static ::System::Func_2<::RPG::Client::FateBuffSlotData*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::FateBuffSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x65118);
		}
		static ::System::Comparison_1<::RPG::Client::FateBuffData*>** StaticGet___9__21_1()
		{
			return (::System::Comparison_1<::RPG::Client::FateBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x65120);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x65128);
		}
		static ::RPG::Client::FateBuffTraitInfo___c** StaticGet___9()
		{
			return (::RPG::Client::FateBuffTraitInfo___c**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x65130);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x65138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CountUnlockedSlots_b__12_0(::RPG::Client::FateBuffSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__COUNTUNLOCKEDSLOTS_B__12_0_OFFSET))(this, a1);
		}

		::System::Int32 __RefreshBuffSlot_b__21_0(::RPG::Client::FateBuffSlotData* a1, ::RPG::Client::FateBuffSlotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateBuffSlotData*, ::RPG::Client::FateBuffSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFSLOT_B__21_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __RefreshBuffSlot_b__21_1(::RPG::Client::FateBuffData* a1, ::RPG::Client::FateBuffData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateBuffData*, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFSLOT_B__21_1_OFFSET))(this, a1, a2);
		}

		::System::UInt32 __RefreshBuffAmplification_b__29_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFAMPLIFICATION_B__29_0_OFFSET))(this, a1);
		}

		::System::UInt32 __RefreshBuffAmplification_b__29_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFAMPLIFICATION_B__29_1_OFFSET))(this, a1);
		}
	};
}
