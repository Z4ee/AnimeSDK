#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_58325379324D754F_OFFSET UNITYSDK_OFFSET(0x1873E430)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_716E189235F6C131_OFFSET UNITYSDK_OFFSET(0x1873E500)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1873E4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchHandGestureType_TypeDefinitionIndex = 19943;

	class ByCompareSwitchHandGestureType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ESwitchHandGestureType GestureType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_58325379324D754F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchHandGestureType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_58325379324D754F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_716E189235F6C131(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_METHOD_4_716E189235F6C131_OFFSET))(a1, a2);
		}
	};
}
