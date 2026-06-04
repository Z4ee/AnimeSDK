#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5271428CFA7EAD9C;
class Class_3_47866C0C90C73674;
namespace RPG::GameCore { class LevelGraphComponent; }

#define CLASS_2_5271428CFA7EAD9C___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14458AA0)
#define CLASS_2_5271428CFA7EAD9C___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x144599A0)

inline static constexpr unsigned int Class_2_5271428CFA7EAD9C___c__DisplayClass2_0_TypeDefinitionIndex = 54815;

class Class_2_5271428CFA7EAD9C___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::LevelGraphComponent* levelGraphCom; // 0x10
	::Class_3_47866C0C90C73674* dataCom; // 0x18
	::Class_2_5271428CFA7EAD9C* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5271428CFA7EAD9C___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
