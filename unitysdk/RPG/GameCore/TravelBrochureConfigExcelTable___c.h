#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TravelBrochureConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178B5760)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178B5790)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C___SAFEINITIALIZE_B__20_0_OFFSET UNITYSDK_OFFSET(0x178B57A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureConfigExcelTable___c_TypeDefinitionIndex = 14107;

	class TravelBrochureConfigExcelTable___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::TravelBrochureConfigRow*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::TravelBrochureConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable___c_TypeDefinitionIndex)->GetStaticField(0x1DB30);
		}
		static ::RPG::GameCore::TravelBrochureConfigExcelTable___c** StaticGet___9()
		{
			return (::RPG::GameCore::TravelBrochureConfigExcelTable___c**)Il2CppClass::FromTypeDefinitionIndex(TravelBrochureConfigExcelTable___c_TypeDefinitionIndex)->GetStaticField(0x1DB38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SafeInitialize_b__20_0(::RPG::GameCore::TravelBrochureConfigRow* rowA, ::RPG::GameCore::TravelBrochureConfigRow* rowB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TravelBrochureConfigRow*, ::RPG::GameCore::TravelBrochureConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGEXCELTABLE___C___SAFEINITIALIZE_B__20_0_OFFSET))(this, rowA, rowB);
		}
	};
}
