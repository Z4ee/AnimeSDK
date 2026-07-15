#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESPLITOBJECTANIMMAP_METHOD_2_2EE51CE3DBE1F4D4_OFFSET UNITYSDK_OFFSET(0x1B4B88C0)
#define RPG_GAMECORE_PERFORMANCESPLITOBJECTANIMMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B89F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSplitObjectAnimMap_TypeDefinitionIndex = 16864;

	class PerformanceSplitObjectAnimMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MainState; // 0x10
		::System::String* ChildState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESPLITOBJECTANIMMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2EE51CE3DBE1F4D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceSplitObjectAnimMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceSplitObjectAnimMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESPLITOBJECTANIMMAP_METHOD_2_2EE51CE3DBE1F4D4_OFFSET))(a1, a2);
		}
	};
}
