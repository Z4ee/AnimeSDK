#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_A4151B6BBD8048F5_OFFSET UNITYSDK_OFFSET(0x1CDB6680)
#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_D6DA17C4CBFC8E74_OFFSET UNITYSDK_OFFSET(0x1CDB6630)
#define RPG_GAMECORE_ADDSTAGEABILITYBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB6670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddStageAbilityByName_TypeDefinitionIndex = 22714;

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

		static ::System::Void Method_3_D6DA17C4CBFC8E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddStageAbilityByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddStageAbilityByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_D6DA17C4CBFC8E74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4151B6BBD8048F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSTAGEABILITYBYNAME_METHOD_3_A4151B6BBD8048F5_OFFSET))(a1, a2);
		}
	};
}
