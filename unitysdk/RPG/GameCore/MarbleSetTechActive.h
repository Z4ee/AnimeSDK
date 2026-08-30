#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESETTECHACTIVE_METHOD_3_05D1E9416596047A_OFFSET UNITYSDK_OFFSET(0x1D4B3010)
#define RPG_GAMECORE_MARBLESETTECHACTIVE_METHOD_3_89E7214945186E46_OFFSET UNITYSDK_OFFSET(0x1D4B3120)
#define RPG_GAMECORE_MARBLESETTECHACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B3110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetTechActive_TypeDefinitionIndex = 16663;

	class MarbleSetTechActive : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Boolean Active; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETTECHACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05D1E9416596047A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetTechActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetTechActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETTECHACTIVE_METHOD_3_05D1E9416596047A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89E7214945186E46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetTechActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetTechActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETTECHACTIVE_METHOD_3_89E7214945186E46_OFFSET))(a1, a2);
		}
	};
}
