#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DEBATERETURNTESTIMONY_METHOD_3_8F452363C2A88F20_OFFSET UNITYSDK_OFFSET(0x1D0195B0)
#define RPG_GAMECORE_DEBATERETURNTESTIMONY_METHOD_3_9194A26FF1A1B4DD_OFFSET UNITYSDK_OFFSET(0x1D0194E0)
#define RPG_GAMECORE_DEBATERETURNTESTIMONY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0195A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateReturnTestimony_TypeDefinitionIndex = 21683;

	class DebateReturnTestimony : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATERETURNTESTIMONY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9194A26FF1A1B4DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateReturnTestimony*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateReturnTestimony*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATERETURNTESTIMONY_METHOD_3_9194A26FF1A1B4DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F452363C2A88F20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateReturnTestimony* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateReturnTestimony*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATERETURNTESTIMONY_METHOD_3_8F452363C2A88F20_OFFSET))(a1, a2);
		}
	};
}
