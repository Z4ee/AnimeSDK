#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_METHOD_3_0B2789046BD20C83_OFFSET UNITYSDK_OFFSET(0x1CDC5F50)
#define RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_METHOD_3_B7EF0286FC44C3F5_OFFSET UNITYSDK_OFFSET(0x1CDC5DD0)
#define RPG_GAMECORE_ADVDISTRICTENABLETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC5EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDistrictEnableTrigger_TypeDefinitionIndex = 20949;

	class AdvDistrictEnableTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* DistrictID; // 0x20
		::System::Boolean Enable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTENABLETRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B7EF0286FC44C3F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDistrictEnableTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDistrictEnableTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_METHOD_3_B7EF0286FC44C3F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B2789046BD20C83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDistrictEnableTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDistrictEnableTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISTRICTENABLETRIGGER_METHOD_3_0B2789046BD20C83_OFFSET))(a1, a2);
		}
	};
}
