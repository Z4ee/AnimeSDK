#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHFIRSTPERFORMANCE_METHOD_3_0F230798475D4DFC_OFFSET UNITYSDK_OFFSET(0x1E0DB810)
#define RPG_GAMECORE_FINISHFIRSTPERFORMANCE_METHOD_3_E45C46042F306CCF_OFFSET UNITYSDK_OFFSET(0x1E0DB850)
#define RPG_GAMECORE_FINISHFIRSTPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DB840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishFirstPerformance_TypeDefinitionIndex = 20852;

	class FinishFirstPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PerformanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHFIRSTPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0F230798475D4DFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishFirstPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishFirstPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHFIRSTPERFORMANCE_METHOD_3_0F230798475D4DFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E45C46042F306CCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishFirstPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishFirstPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHFIRSTPERFORMANCE_METHOD_3_E45C46042F306CCF_OFFSET))(a1, a2);
		}
	};
}
