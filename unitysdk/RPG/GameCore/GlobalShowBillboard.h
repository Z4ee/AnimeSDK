#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GLOBALSHOWBILLBOARD_METHOD_3_48D2A9D9888C9BF7_OFFSET UNITYSDK_OFFSET(0x172490C0)
#define RPG_GAMECORE_GLOBALSHOWBILLBOARD_METHOD_3_6276077FDAC2A346_OFFSET UNITYSDK_OFFSET(0x17249040)
#define RPG_GAMECORE_GLOBALSHOWBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x17249090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalShowBillboard_TypeDefinitionIndex = 18762;

	class GlobalShowBillboard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSHOWBILLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6276077FDAC2A346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalShowBillboard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalShowBillboard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSHOWBILLBOARD_METHOD_3_6276077FDAC2A346_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48D2A9D9888C9BF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalShowBillboard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalShowBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSHOWBILLBOARD_METHOD_3_48D2A9D9888C9BF7_OFFSET))(a1, a2);
		}
	};
}
