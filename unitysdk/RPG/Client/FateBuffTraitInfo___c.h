#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATEBUFFTRAITINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9677510)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__COUNTUNLOCKEDSLOTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x9677560)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9677550)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFAMPLIFICATION_B__28_0_OFFSET UNITYSDK_OFFSET(0x9677760)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFAMPLIFICATION_B__28_1_OFFSET UNITYSDK_OFFSET(0x9677770)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFSLOT_B__20_0_OFFSET UNITYSDK_OFFSET(0x9677580)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFSLOT_B__20_1_OFFSET UNITYSDK_OFFSET(0x9677640)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo___c_TypeDefinitionIndex = 51917;

	class FateBuffTraitInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x47CD0);
		}
		static ::RPG::Client::FateBuffTraitInfo___c** StaticGet___9()
		{
			return (::RPG::Client::FateBuffTraitInfo___c**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x47CD8);
		}
		static ::System::Func_2<::RPG::Client::FateBuffSlotData*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::FateBuffSlotData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x47CE0);
		}
		static ::System::Comparison_1<::RPG::Client::FateBuffData*>** StaticGet___9__20_1()
		{
			return (::System::Comparison_1<::RPG::Client::FateBuffData*>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x47CE8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x47CF0);
		}
		static ::System::Comparison_1<::RPG::Client::FateBuffSlotData*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::RPG::Client::FateBuffSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(FateBuffTraitInfo___c_TypeDefinitionIndex)->GetStaticField(0x47CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CountUnlockedSlots_b__12_0(::RPG::Client::FateBuffSlotData* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__COUNTUNLOCKEDSLOTS_B__12_0_OFFSET))(this, s);
		}

		::System::Int32 __RefreshBuffSlot_b__20_0(::RPG::Client::FateBuffSlotData* x, ::RPG::Client::FateBuffSlotData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateBuffSlotData*, ::RPG::Client::FateBuffSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFSLOT_B__20_0_OFFSET))(this, x, y);
		}

		::System::Int32 __RefreshBuffSlot_b__20_1(::RPG::Client::FateBuffData* x, ::RPG::Client::FateBuffData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateBuffData*, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFSLOT_B__20_1_OFFSET))(this, x, y);
		}

		::System::UInt32 __RefreshBuffAmplification_b__28_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFAMPLIFICATION_B__28_0_OFFSET))(this, x);
		}

		::System::UInt32 __RefreshBuffAmplification_b__28_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> x)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C___REFRESHBUFFAMPLIFICATION_B__28_1_OFFSET))(this, x);
		}
	};
}
