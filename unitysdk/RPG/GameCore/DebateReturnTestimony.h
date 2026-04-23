#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEBATERETURNTESTIMONY_METHOD_3_13AB92FDEA9712D4_OFFSET UNITYSDK_OFFSET(0x18853D40)
#define RPG_GAMECORE_DEBATERETURNTESTIMONY_METHOD_3_8F452363C2A88F20_OFFSET UNITYSDK_OFFSET(0x18853E50)
#define RPG_GAMECORE_DEBATERETURNTESTIMONY__CTOR_OFFSET UNITYSDK_OFFSET(0x18853E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateReturnTestimony_TypeDefinitionIndex = 20784;

	class DebateReturnTestimony : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATERETURNTESTIMONY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13AB92FDEA9712D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateReturnTestimony*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateReturnTestimony*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATERETURNTESTIMONY_METHOD_3_13AB92FDEA9712D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F452363C2A88F20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateReturnTestimony* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateReturnTestimony*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATERETURNTESTIMONY_METHOD_3_8F452363C2A88F20_OFFSET))(a1, a2);
		}
	};
}
