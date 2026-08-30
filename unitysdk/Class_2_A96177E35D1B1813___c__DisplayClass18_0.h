#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

class Class_2_DBF482F9F6F56036;

#define CLASS_2_A96177E35D1B1813___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F07D60)
#define CLASS_2_A96177E35D1B1813___C__DISPLAYCLASS18_0___GETORBPANELBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x16F08450)

inline static constexpr unsigned int Class_2_A96177E35D1B1813___c__DisplayClass18_0_TypeDefinitionIndex = 72212;

class Class_2_A96177E35D1B1813___c__DisplayClass18_0 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightOrbType orbType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetOrbPanelByType_b__0(::Class_2_DBF482F9F6F56036* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_DBF482F9F6F56036*))((::PBYTE)hIl2Cpp + CLASS_2_A96177E35D1B1813___C__DISPLAYCLASS18_0___GETORBPANELBYTYPE_B__0_OFFSET))(this, a1);
	}
};
