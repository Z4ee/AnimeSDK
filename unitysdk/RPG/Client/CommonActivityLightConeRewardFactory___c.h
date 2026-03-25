#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_531;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x940B0C0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x940B100)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x940B0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityLightConeRewardFactory___c_TypeDefinitionIndex = 50040;

	class CommonActivityLightConeRewardFactory___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_531*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_531*>**)Il2CppClass::FromTypeDefinitionIndex(CommonActivityLightConeRewardFactory___c_TypeDefinitionIndex)->GetStaticField(0x415E0);
		}
		static ::RPG::Client::CommonActivityLightConeRewardFactory___c** StaticGet___9()
		{
			return (::RPG::Client::CommonActivityLightConeRewardFactory___c**)Il2CppClass::FromTypeDefinitionIndex(CommonActivityLightConeRewardFactory___c_TypeDefinitionIndex)->GetStaticField(0x415E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__0_0(::Class_0_16E4307DCC419505_531* x, ::Class_0_16E4307DCC419505_531* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_531*, ::Class_0_16E4307DCC419505_531*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CREATE_B__0_0_OFFSET))(this, x, y);
		}
	};
}
