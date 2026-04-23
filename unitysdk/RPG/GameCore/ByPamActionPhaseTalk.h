#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_0071C0E6C399AFB1_OFFSET UNITYSDK_OFFSET(0x1875BE50)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_A929381BFF99FAAB_OFFSET UNITYSDK_OFFSET(0x1875BF20)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1875BED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamActionPhaseTalk_TypeDefinitionIndex = 18933;

	class ByPamActionPhaseTalk : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0071C0E6C399AFB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamActionPhaseTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamActionPhaseTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_0071C0E6C399AFB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A929381BFF99FAAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_METHOD_4_A929381BFF99FAAB_OFFSET))(a1, a2);
		}
	};
}
