#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTADDSTAGEABILITYBYNAME_METHOD_3_0ED7DEC6E4D62A26_OFFSET UNITYSDK_OFFSET(0x1CCD26A0)
#define RPG_GAMECORE_RTADDSTAGEABILITYBYNAME_METHOD_3_744A64A7A5EBFB63_OFFSET UNITYSDK_OFFSET(0x1CCD26F0)
#define RPG_GAMECORE_RTADDSTAGEABILITYBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD26E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAddStageAbilityByName_TypeDefinitionIndex = 23805;

	class RtAddStageAbilityByName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StageAbilityName; // 0x18
		::System::Boolean CanReplace; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTADDSTAGEABILITYBYNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0ED7DEC6E4D62A26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAddStageAbilityByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAddStageAbilityByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTADDSTAGEABILITYBYNAME_METHOD_3_0ED7DEC6E4D62A26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_744A64A7A5EBFB63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAddStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAddStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTADDSTAGEABILITYBYNAME_METHOD_3_744A64A7A5EBFB63_OFFSET))(a1, a2);
		}
	};
}
