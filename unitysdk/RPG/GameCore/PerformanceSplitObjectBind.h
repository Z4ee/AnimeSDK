#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceSplitObjectAnimMap; }

#define RPG_GAMECORE_PERFORMANCESPLITOBJECTBIND_METHOD_2_B3205576D09D2D8C_OFFSET UNITYSDK_OFFSET(0x174A1F50)
#define RPG_GAMECORE_PERFORMANCESPLITOBJECTBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x174A20A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSplitObjectBind_TypeDefinitionIndex = 16142;

	class PerformanceSplitObjectBind : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChildInstanceID; // 0x10
		::Il2CppArray<::RPG::GameCore::PerformanceSplitObjectAnimMap*>* MainStateToChildState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESPLITOBJECTBIND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B3205576D09D2D8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSplitObjectBind*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSplitObjectBind*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESPLITOBJECTBIND_METHOD_2_B3205576D09D2D8C_OFFSET))(a1, a2);
		}
	};
}
