#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETPHAINONCHARGEPOINT_METHOD_3_D23EB9774B07F170_OFFSET UNITYSDK_OFFSET(0x176DB0C0)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINT_METHOD_3_DFB3350920B77EC0_OFFSET UNITYSDK_OFFSET(0x176DB040)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x176DB090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPhainonChargePoint_TypeDefinitionIndex = 21391;

	class SetPhainonChargePoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DFB3350920B77EC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonChargePoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonChargePoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINT_METHOD_3_DFB3350920B77EC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D23EB9774B07F170(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonChargePoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonChargePoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINT_METHOD_3_D23EB9774B07F170_OFFSET))(a1, a2);
		}
	};
}
