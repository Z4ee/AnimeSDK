#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerTag; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_DRINKMAKERTAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA19E230)
#define RPG_CLIENT_DRINKMAKERTAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA19E270)
#define RPG_CLIENT_DRINKMAKERTAG___C__GETALLTAGNAMESBYTYPE_B__0_0_OFFSET UNITYSDK_OFFSET(0xA19E280)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerTag___c_TypeDefinitionIndex = 58632;

	class DrinkMakerTag___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DrinkMakerTag___c** StaticGet___9()
		{
			return (::RPG::Client::DrinkMakerTag___c**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerTag___c_TypeDefinitionIndex)->GetStaticField(0x673F0);
		}
		static ::System::Comparison_1<::RPG::Client::DrinkMakerTag*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::Client::DrinkMakerTag*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerTag___c_TypeDefinitionIndex)->GetStaticField(0x673F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllTagNamesByType_b__0_0(::RPG::Client::DrinkMakerTag* lhs, ::RPG::Client::DrinkMakerTag* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerTag*, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERTAG___C__GETALLTAGNAMESBYTYPE_B__0_0_OFFSET))(this, lhs, rhs);
		}
	};
}
