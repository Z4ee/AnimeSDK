#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEDEBUG_METHOD_3_41A4F2B9983A0D76_OFFSET UNITYSDK_OFFSET(0x1D4A7570)
#define RPG_GAMECORE_MARBLEDEBUG_METHOD_3_D746D1DE8A2B97E7_OFFSET UNITYSDK_OFFSET(0x1D4A74D0)
#define RPG_GAMECORE_MARBLEDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A7560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleDebug_TypeDefinitionIndex = 16683;

	class MarbleDebug : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D746D1DE8A2B97E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleDebug*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleDebug*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDEBUG_METHOD_3_D746D1DE8A2B97E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_41A4F2B9983A0D76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleDebug* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleDebug*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDEBUG_METHOD_3_41A4F2B9983A0D76_OFFSET))(a1, a2);
		}
	};
}
