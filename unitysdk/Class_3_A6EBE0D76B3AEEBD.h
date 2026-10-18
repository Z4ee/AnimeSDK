#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByTeamOnFieldCount; }

#define CLASS_3_A6EBE0D76B3AEEBD_METHOD_3_0C40E517E32C6432_OFFSET UNITYSDK_OFFSET(0x1C9E9830)
#define CLASS_3_A6EBE0D76B3AEEBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E9810)

inline static constexpr unsigned int Class_3_A6EBE0D76B3AEEBD_TypeDefinitionIndex = 43155;

class Class_3_A6EBE0D76B3AEEBD : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByTeamOnFieldCount* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByTeamOnFieldCount* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByTeamOnFieldCount*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_A6EBE0D76B3AEEBD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_0C40E517E32C6432()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EBE0D76B3AEEBD_METHOD_3_0C40E517E32C6432_OFFSET))(this);
	}
};
