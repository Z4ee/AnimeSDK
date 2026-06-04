#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AchievementSeriesRow; }

#define CLASS_1_881442E831533FF0_METHOD_1_919A1BDA4D006EDB_OFFSET UNITYSDK_OFFSET(0x13BB3120)
#define CLASS_1_881442E831533FF0_METHOD_1_C894F393998A0438_OFFSET UNITYSDK_OFFSET(0x13BB3110)
#define CLASS_1_881442E831533FF0_METHOD_1_D3B7E4F5CEA0567D_OFFSET UNITYSDK_OFFSET(0x13BB3050)
#define CLASS_1_881442E831533FF0__CTOR_OFFSET UNITYSDK_OFFSET(0x13BB3100)

inline static constexpr unsigned int Class_1_881442E831533FF0_TypeDefinitionIndex = 57365;

class Class_1_881442E831533FF0 : public ::System::Object
{
public:
	::RPG::GameCore::AchievementSeriesRow* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_881442E831533FF0__CTOR_OFFSET))(this);
	}

	static ::Class_1_881442E831533FF0* Method_1_D3B7E4F5CEA0567D(::System::UInt32 a1)
	{
		return ((::Class_1_881442E831533FF0*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_881442E831533FF0_METHOD_1_D3B7E4F5CEA0567D_OFFSET))(a1);
	}

	::RPG::GameCore::AchievementSeriesRow* Method_1_C894F393998A0438()
	{
		return ((::RPG::GameCore::AchievementSeriesRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_881442E831533FF0_METHOD_1_C894F393998A0438_OFFSET))(this);
	}

	::System::Void Method_1_919A1BDA4D006EDB(::RPG::GameCore::AchievementSeriesRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AchievementSeriesRow*))((::PBYTE)hIl2Cpp + CLASS_1_881442E831533FF0_METHOD_1_919A1BDA4D006EDB_OFFSET))(this, a1);
	}
};
