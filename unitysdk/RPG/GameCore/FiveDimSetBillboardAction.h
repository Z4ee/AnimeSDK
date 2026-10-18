#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }

#define RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_METHOD_4_34B3DD6A4F54A68C_OFFSET UNITYSDK_OFFSET(0x1D6AB310)
#define RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_METHOD_4_C9731329FAFA53C9_OFFSET UNITYSDK_OFFSET(0x1D6AB3C0)
#define RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AB3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetBillboardAction_TypeDefinitionIndex = 18777;

	class FiveDimSetBillboardAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimSetBillboardInfo* BillboardInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34B3DD6A4F54A68C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetBillboardAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetBillboardAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_METHOD_4_34B3DD6A4F54A68C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C9731329FAFA53C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_METHOD_4_C9731329FAFA53C9_OFFSET))(a1, a2);
		}
	};
}
