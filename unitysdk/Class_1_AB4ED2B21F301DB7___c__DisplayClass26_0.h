#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }

#define CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1784B250)
#define CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS26_0___PICKLEAVEEMPLOYEE_B__1_OFFSET UNITYSDK_OFFSET(0x1784C080)

inline static constexpr unsigned int Class_1_AB4ED2B21F301DB7___c__DisplayClass26_0_TypeDefinitionIndex = 78992;

class Class_1_AB4ED2B21F301DB7___c__DisplayClass26_0 : public ::System::Object
{
public:
	::System::UInt32 id; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __PickLeaveEmployee_b__1(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C__DISPLAYCLASS26_0___PICKLEAVEEMPLOYEE_B__1_OFFSET))(this, a1);
	}
};
