#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RTSTACKPROPERTY_METHOD_3_66E5A3E868B1F6DC_OFFSET UNITYSDK_OFFSET(0x19BF1F10)
#define RPG_GAMECORE_RTSTACKPROPERTY_METHOD_3_C2554CFA801BCD95_OFFSET UNITYSDK_OFFSET(0x19BF1E90)
#define RPG_GAMECORE_RTSTACKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF1EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtStackProperty_TypeDefinitionIndex = 22888;

	class RtStackProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RtAbilityProperty Property; // 0x18
		::RPG::GameCore::DynamicFloat* PropertyValue; // 0x20
		::System::Boolean IsRefresh; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2554CFA801BCD95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStackProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStackProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKPROPERTY_METHOD_3_C2554CFA801BCD95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66E5A3E868B1F6DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStackProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStackProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTACKPROPERTY_METHOD_3_66E5A3E868B1F6DC_OFFSET))(a1, a2);
		}
	};
}
