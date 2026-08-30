#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPrepWaitCustomTimeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_METHOD_3_27ADDF7F6BE244E9_OFFSET UNITYSDK_OFFSET(0x1D160430)
#define RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_METHOD_3_819808574CD9309A_OFFSET UNITYSDK_OFFSET(0x1D1603F0)
#define RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D160420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepWaitCustomTime_TypeDefinitionIndex = 19743;

	class GridFightPrepWaitCustomTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightPrepWaitCustomTimeType CustomTimeType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_819808574CD9309A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepWaitCustomTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepWaitCustomTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_METHOD_3_819808574CD9309A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27ADDF7F6BE244E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepWaitCustomTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepWaitCustomTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPWAITCUSTOMTIME_METHOD_3_27ADDF7F6BE244E9_OFFSET))(a1, a2);
		}
	};
}
