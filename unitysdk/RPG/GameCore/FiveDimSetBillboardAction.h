#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }

#define RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_METHOD_3_39D181CA47819778_OFFSET UNITYSDK_OFFSET(0x1BEAFDE0)
#define RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_METHOD_3_521FC0774F872BB5_OFFSET UNITYSDK_OFFSET(0x1BEAFD30)
#define RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEAFDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetBillboardAction_TypeDefinitionIndex = 18044;

	class FiveDimSetBillboardAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimSetBillboardInfo* BillboardInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_521FC0774F872BB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetBillboardAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetBillboardAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_METHOD_3_521FC0774F872BB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39D181CA47819778(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETBILLBOARDACTION_METHOD_3_39D181CA47819778_OFFSET))(a1, a2);
		}
	};
}
