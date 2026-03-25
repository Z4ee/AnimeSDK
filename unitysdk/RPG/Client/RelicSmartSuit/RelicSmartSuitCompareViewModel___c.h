#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2B90B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B90F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___C___PINSELECTEDRELIC_B__58_1_OFFSET UNITYSDK_OFFSET(0xA2B9100)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___C___UNPINSELECTEDRELIC_B__59_1_OFFSET UNITYSDK_OFFSET(0xA2B9130)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCompareViewModel___c_TypeDefinitionIndex = 61201;

	class RelicSmartSuitCompareViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__58_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitCompareViewModel___c_TypeDefinitionIndex)->GetStaticField(0x13910);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__59_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitCompareViewModel___c_TypeDefinitionIndex)->GetStaticField(0x13918);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitCompareViewModel___c_TypeDefinitionIndex)->GetStaticField(0x13920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void __PinSelectedRelic_b__58_1(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___C___PINSELECTEDRELIC_B__58_1_OFFSET))(this, exception);
		}

		::System::Void __UnPinSelectedRelic_b__59_1(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREVIEWMODEL___C___UNPINSELECTEDRELIC_B__59_1_OFFSET))(this, exception);
		}
	};
}
