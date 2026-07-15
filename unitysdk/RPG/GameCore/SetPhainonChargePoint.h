#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETPHAINONCHARGEPOINT_METHOD_3_8892FECD41DBD9C3_OFFSET UNITYSDK_OFFSET(0x1C605260)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINT_METHOD_3_D23EB9774B07F170_OFFSET UNITYSDK_OFFSET(0x1C6052A0)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C605290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPhainonChargePoint_TypeDefinitionIndex = 22327;

	class SetPhainonChargePoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8892FECD41DBD9C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonChargePoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonChargePoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINT_METHOD_3_8892FECD41DBD9C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D23EB9774B07F170(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonChargePoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonChargePoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINT_METHOD_3_D23EB9774B07F170_OFFSET))(a1, a2);
		}
	};
}
