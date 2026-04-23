#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_621;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0B8CC0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0xA0B8D00)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA0B8CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityLightConeRewardFactory___c_TypeDefinitionIndex = 56881;

	class CommonActivityLightConeRewardFactory___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_621*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_621*>**)Il2CppClass::FromTypeDefinitionIndex(CommonActivityLightConeRewardFactory___c_TypeDefinitionIndex)->GetStaticField(0x5EAA0);
		}
		static ::RPG::Client::CommonActivityLightConeRewardFactory___c** StaticGet___9()
		{
			return (::RPG::Client::CommonActivityLightConeRewardFactory___c**)Il2CppClass::FromTypeDefinitionIndex(CommonActivityLightConeRewardFactory___c_TypeDefinitionIndex)->GetStaticField(0x5EAA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__0_0(::Class_0_16E4307DCC419505_621* x, ::Class_0_16E4307DCC419505_621* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_621*, ::Class_0_16E4307DCC419505_621*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CREATE_B__0_0_OFFSET))(this, x, y);
		}
	};
}
