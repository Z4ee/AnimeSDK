#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B670A60)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B670AA0)
#define RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL___C___INITWITHSMARTSUITPLAN_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B670AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetCustomSaveViewModel___c_TypeDefinitionIndex = 66858;

	class RelicPresetCustomSaveViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RelicPresetCustomSaveViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicPresetCustomSaveViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetCustomSaveViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66970);
		}
		static ::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RelicPresetCustomSaveViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __InitWithSmartSuitPlan_b__6_0(::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETCUSTOMSAVEVIEWMODEL___C___INITWITHSMARTSUITPLAN_B__6_0_OFFSET))(this, a1);
		}
	};
}
