#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleAddBullet; }

#define CLASS_2_A792FBECECF4D1D6_METHOD_2_4B2CD7086A8CA682_OFFSET UNITYSDK_OFFSET(0x1CA12840)
#define CLASS_2_A792FBECECF4D1D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA12830)

inline static constexpr unsigned int Class_2_A792FBECECF4D1D6_TypeDefinitionIndex = 43111;

class Class_2_A792FBECECF4D1D6 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAddBullet* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAddBullet* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddBullet*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_A792FBECECF4D1D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4B2CD7086A8CA682()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A792FBECECF4D1D6_METHOD_2_4B2CD7086A8CA682_OFFSET))(this);
	}
};
