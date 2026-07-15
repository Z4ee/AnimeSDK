#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NearType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETACTIONDELAYNEARTARGET_METHOD_3_052366C1468342E1_OFFSET UNITYSDK_OFFSET(0x1C2D0460)
#define RPG_GAMECORE_SETACTIONDELAYNEARTARGET_METHOD_3_CCD654CFC5A8F818_OFFSET UNITYSDK_OFFSET(0x1C2D0420)
#define RPG_GAMECORE_SETACTIONDELAYNEARTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D0450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetActionDelayNearTarget_TypeDefinitionIndex = 22777;

	class SetActionDelayNearTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* NearTargetType; // 0x20
		::RPG::GameCore::NearType NearType; // 0x28
		::System::Boolean IsInit; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAYNEARTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCD654CFC5A8F818(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActionDelayNearTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActionDelayNearTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAYNEARTARGET_METHOD_3_CCD654CFC5A8F818_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_052366C1468342E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActionDelayNearTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActionDelayNearTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAYNEARTARGET_METHOD_3_052366C1468342E1_OFFSET))(a1, a2);
		}
	};
}
