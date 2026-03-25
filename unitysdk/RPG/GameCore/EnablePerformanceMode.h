#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEPERFORMANCEMODE_METHOD_3_6B37B84D069D392E_OFFSET UNITYSDK_OFFSET(0x171995B0)
#define RPG_GAMECORE_ENABLEPERFORMANCEMODE_METHOD_3_FD4068388DE3E3FF_OFFSET UNITYSDK_OFFSET(0x17199530)
#define RPG_GAMECORE_ENABLEPERFORMANCEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17199580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnablePerformanceMode_TypeDefinitionIndex = 19737;

	class EnablePerformanceMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPERFORMANCEMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD4068388DE3E3FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnablePerformanceMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnablePerformanceMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPERFORMANCEMODE_METHOD_3_FD4068388DE3E3FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B37B84D069D392E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnablePerformanceMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnablePerformanceMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPERFORMANCEMODE_METHOD_3_6B37B84D069D392E_OFFSET))(a1, a2);
		}
	};
}
