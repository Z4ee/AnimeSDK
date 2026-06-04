#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BASEGACHAGROUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3AAE60)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AAEA0)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C__ISFEATURECLOSED_B__6_0_OFFSET UNITYSDK_OFFSET(0xB3AAEE0)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C__ISVALID_B__5_0_OFFSET UNITYSDK_OFFSET(0xB3AAEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaGroupData___c_TypeDefinitionIndex = 60101;

	class BaseGachaGroupData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BaseGachaGroupData___c** StaticGet___9()
		{
			return (::RPG::Client::BaseGachaGroupData___c**)Il2CppClass::FromTypeDefinitionIndex(BaseGachaGroupData___c_TypeDefinitionIndex)->GetStaticField(0x644A0);
		}
		static ::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BaseGachaGroupData___c_TypeDefinitionIndex)->GetStaticField(0x644A8);
		}
		static ::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::BaseGachaPoolData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BaseGachaGroupData___c_TypeDefinitionIndex)->GetStaticField(0x644B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsValid_b__5_0(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__ISVALID_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsFeatureClosed_b__6_0(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__ISFEATURECLOSED_B__6_0_OFFSET))(this, a1);
		}
	};
}
