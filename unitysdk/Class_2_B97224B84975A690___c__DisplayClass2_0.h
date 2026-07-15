#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B97224B84975A690;
class Class_3_E03EC9D105CCFA3C;
namespace RPG::GameCore { class LevelGraphComponent; }

#define CLASS_2_B97224B84975A690___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192413F0)
#define CLASS_2_B97224B84975A690___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x19242370)

inline static constexpr unsigned int Class_2_B97224B84975A690___c__DisplayClass2_0_TypeDefinitionIndex = 56046;

class Class_2_B97224B84975A690___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::LevelGraphComponent* levelGraphCom; // 0x10
	::Class_3_E03EC9D105CCFA3C* dataCom; // 0x18
	::Class_2_B97224B84975A690* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97224B84975A690___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B97224B84975A690___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
