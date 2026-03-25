#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEPREDICATECONFIG_METHOD_3_03B3E2F3E296DE5B_OFFSET UNITYSDK_OFFSET(0x17394FE0)
#define RPG_GAMECORE_MARBLEPREDICATECONFIG_METHOD_3_301930FD20218805_OFFSET UNITYSDK_OFFSET(0x17396070)
#define RPG_GAMECORE_MARBLEPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17388C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePredicateConfig_TypeDefinitionIndex = 15412;

	class MarblePredicateConfig : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnSuccess; // 0x10
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnFail; // 0x18
		::System::Boolean Inverse; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03B3E2F3E296DE5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarblePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPREDICATECONFIG_METHOD_3_03B3E2F3E296DE5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_301930FD20218805(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarblePredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPREDICATECONFIG_METHOD_3_301930FD20218805_OFFSET))(a1, a2);
		}
	};
}
