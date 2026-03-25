#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BASEGACHAGROUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x91705A0)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x91705E0)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C__ISFEATURECLOSED_B__6_0_OFFSET UNITYSDK_OFFSET(0x9170620)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C__ISVALID_B__5_0_OFFSET UNITYSDK_OFFSET(0x91705F0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaGroupData___c_TypeDefinitionIndex = 52215;

	class BaseGachaGroupData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BaseGachaGroupData___c_TypeDefinitionIndex)->GetStaticField(0x37580);
		}
		static ::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BaseGachaGroupData___c_TypeDefinitionIndex)->GetStaticField(0x37588);
		}
		static ::RPG::Client::BaseGachaGroupData___c** StaticGet___9()
		{
			return (::RPG::Client::BaseGachaGroupData___c**)Il2CppClass::FromTypeDefinitionIndex(BaseGachaGroupData___c_TypeDefinitionIndex)->GetStaticField(0x37590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsValid_b__5_0(::RPG::Client::BaseGachaPoolData* baseGachaPoolData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__ISVALID_B__5_0_OFFSET))(this, baseGachaPoolData);
		}

		::System::Boolean _IsFeatureClosed_b__6_0(::RPG::Client::BaseGachaPoolData* baseGachaPoolData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__ISFEATURECLOSED_B__6_0_OFFSET))(this, baseGachaPoolData);
		}
	};
}
