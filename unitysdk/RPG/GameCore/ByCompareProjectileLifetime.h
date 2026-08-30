#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_212313B378ECEA9B_OFFSET UNITYSDK_OFFSET(0x1CEF0640)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_A0A0760DF542A0C7_OFFSET UNITYSDK_OFFSET(0x1CEF0420)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_AB3539A63B46BF36_OFFSET UNITYSDK_OFFSET(0x1CEF03E0)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_B9C9A32263736274_OFFSET UNITYSDK_OFFSET(0x1CEF0610)
#define RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF0410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareProjectileLifetime_TypeDefinitionIndex = 20009;

	class ByCompareProjectileLifetime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AB3539A63B46BF36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareProjectileLifetime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareProjectileLifetime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_AB3539A63B46BF36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A0A0760DF542A0C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_A0A0760DF542A0C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B9C9A32263736274(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_B9C9A32263736274_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_212313B378ECEA9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROJECTILELIFETIME_METHOD_4_212313B378ECEA9B_OFFSET))(a1, a2);
		}
	};
}
