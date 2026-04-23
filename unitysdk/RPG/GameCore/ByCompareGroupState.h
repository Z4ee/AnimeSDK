#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_8B9CCD7A6DF2067C_OFFSET UNITYSDK_OFFSET(0x1872F230)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_C93AAE7418A6A698_OFFSET UNITYSDK_OFFSET(0x1872F150)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1872F1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupState_TypeDefinitionIndex = 20997;

	class ByCompareGroupState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType EquationType; // 0x20
		::System::UInt32 Value; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C93AAE7418A6A698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_C93AAE7418A6A698_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B9CCD7A6DF2067C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_8B9CCD7A6DF2067C_OFFSET))(a1, a2);
		}
	};
}
