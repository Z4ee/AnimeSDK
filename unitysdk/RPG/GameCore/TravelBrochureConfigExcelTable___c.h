#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TravelBrochureConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6E60)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6E90)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C___SAFEINITIALIZE_B__20_0_OFFSET UNITYSDK_OFFSET(0x1D5E6EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureConfigExcelTable___c_TypeDefinitionIndex = 15204;

	class TravelBrochureConfigExcelTable___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TravelBrochureConfigExcelTable___c** StaticGet___9()
		{
			return (::RPG::GameCore::TravelBrochureConfigExcelTable___c**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable___c_TypeDefinitionIndex)->GetStaticField(0x2B320);
		}
		static ::System::Comparison_1<::RPG::GameCore::TravelBrochureConfigRow*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::TravelBrochureConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable___c_TypeDefinitionIndex)->GetStaticField(0x2B328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SafeInitialize_b__20_0(::RPG::GameCore::TravelBrochureConfigRow* a1, ::RPG::GameCore::TravelBrochureConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TravelBrochureConfigRow*, ::RPG::GameCore::TravelBrochureConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C___SAFEINITIALIZE_B__20_0_OFFSET))(this, a1, a2);
		}
	};
}
