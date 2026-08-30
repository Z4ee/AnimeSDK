#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLECHOOSETARGET_METHOD_3_2190DA078CB3F177_OFFSET UNITYSDK_OFFSET(0x1D4A70C0)
#define RPG_GAMECORE_MARBLECHOOSETARGET_METHOD_3_306D02C3043328B7_OFFSET UNITYSDK_OFFSET(0x1D4A7120)
#define RPG_GAMECORE_MARBLECHOOSETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A7110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleChooseTarget_TypeDefinitionIndex = 16661;

	class MarbleChooseTarget : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECHOOSETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2190DA078CB3F177(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleChooseTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleChooseTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECHOOSETARGET_METHOD_3_2190DA078CB3F177_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_306D02C3043328B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleChooseTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleChooseTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECHOOSETARGET_METHOD_3_306D02C3043328B7_OFFSET))(a1, a2);
		}
	};
}
