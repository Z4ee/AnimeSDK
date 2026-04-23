#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_850703FC67A72520;
namespace RPG::GameCore { class MissionDisableRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_850703FC67A72520___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98B51C0)
#define CLASS_2_850703FC67A72520___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x98B5490)

inline static constexpr unsigned int Class_2_850703FC67A72520___c__DisplayClass2_0_TypeDefinitionIndex = 49119;

class Class_2_850703FC67A72520___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* mainMissionList; // 0x10
	::Class_2_850703FC67A72520* __4__this; // 0x18
	::RPG::GameCore::MissionDisableRow* subMissionDisableRow; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
