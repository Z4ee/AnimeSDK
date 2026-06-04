#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_3C63735B33A34D37_OFFSET UNITYSDK_OFFSET(0x19527800)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_477028AC0311ED49_OFFSET UNITYSDK_OFFSET(0x19527AC0)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_5857530F0645A0A4_OFFSET UNITYSDK_OFFSET(0x19527B40)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_A0A0760DF542A0C7_OFFSET UNITYSDK_OFFSET(0x195278D0)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x19527880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareProjectileLifetime_TypeDefinitionIndex = 19109;

	class ByCompareProjectileLifetime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3C63735B33A34D37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareProjectileLifetime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareProjectileLifetime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_3C63735B33A34D37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A0A0760DF542A0C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_A0A0760DF542A0C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_477028AC0311ED49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_477028AC0311ED49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5857530F0645A0A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_5857530F0645A0A4_OFFSET))(a1, a2);
		}
	};
}
