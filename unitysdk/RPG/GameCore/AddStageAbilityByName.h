#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_9BA19A360810BFDC_OFFSET UNITYSDK_OFFSET(0x16F21490)
#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_A98AC0A0959AAA7D_OFFSET UNITYSDK_OFFSET(0x16F21410)
#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x16F21460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddStageAbilityByName_TypeDefinitionIndex = 21177;

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

		static ::System::Void Method_3_A98AC0A0959AAA7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddStageAbilityByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddStageAbilityByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_A98AC0A0959AAA7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9BA19A360810BFDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_9BA19A360810BFDC_OFFSET))(a1, a2);
		}
	};
}
