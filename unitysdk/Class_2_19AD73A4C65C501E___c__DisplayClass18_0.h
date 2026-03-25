#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

class Class_2_DBF482F9F6F56036;

#define CLASS_2_19AD73A4C65C501E___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1192CF30)
#define CLASS_2_19AD73A4C65C501E___C__DISPLAYCLASS18_0___GETORBPANELBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1192D610)

inline static constexpr unsigned int Class_2_19AD73A4C65C501E___c__DisplayClass18_0_TypeDefinitionIndex = 59199;

class Class_2_19AD73A4C65C501E___c__DisplayClass18_0 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightOrbType orbType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19AD73A4C65C501E___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetOrbPanelByType_b__0(::Class_2_DBF482F9F6F56036* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_DBF482F9F6F56036*))((::PBYTE)hIl2Cpp + CLASS_2_19AD73A4C65C501E___C__DISPLAYCLASS18_0___GETORBPANELBYTYPE_B__0_OFFSET))(this, x);
	}
};
