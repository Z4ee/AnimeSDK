#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_96CF51151A4ADA1E_OFFSET UNITYSDK_OFFSET(0x194125D0)
#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_A4151B6BBD8048F5_OFFSET UNITYSDK_OFFSET(0x19412650)
#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19412620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddStageAbilityByName_TypeDefinitionIndex = 21718;

	class AddStageAbilityByName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StageAbilityName; // 0x18
		::System::Boolean ReadFromTable; // 0x20
		::System::Boolean CanReplace; // 0x21
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96CF51151A4ADA1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddStageAbilityByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddStageAbilityByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_96CF51151A4ADA1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4151B6BBD8048F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_A4151B6BBD8048F5_OFFSET))(a1, a2);
		}
	};
}
