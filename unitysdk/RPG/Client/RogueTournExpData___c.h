#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournExpRewardDataItem; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNEXPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C27D20)
#define RPG_CLIENT_ROGUETOURNEXPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C27D50)
#define RPG_CLIENT_ROGUETOURNEXPDATA___C___TRYINITREWARDROWS_B__12_0_OFFSET UNITYSDK_OFFSET(0x19C27D60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExpData___c_TypeDefinitionIndex = 64857;

	class RogueTournExpData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournExpData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournExpData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournExpData___c_TypeDefinitionIndex)->GetStaticField(0x2AA50);
		}
		static ::System::Comparison_1<::RPG::Client::RogueTournExpRewardDataItem*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournExpRewardDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournExpData___c_TypeDefinitionIndex)->GetStaticField(0x2AA58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __TryInitRewardRows_b__12_0(::RPG::Client::RogueTournExpRewardDataItem* a1, ::RPG::Client::RogueTournExpRewardDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournExpRewardDataItem*, ::RPG::Client::RogueTournExpRewardDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXPDATA___C___TRYINITREWARDROWS_B__12_0_OFFSET))(this, a1, a2);
		}
	};
}
