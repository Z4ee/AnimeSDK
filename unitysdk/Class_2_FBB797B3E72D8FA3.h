#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace System { class String; }

#define CLASS_2_FBB797B3E72D8FA3_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1637D0A0)
#define CLASS_2_FBB797B3E72D8FA3__CTOR_OFFSET UNITYSDK_OFFSET(0x1637D010)

inline static constexpr unsigned int Class_2_FBB797B3E72D8FA3_TypeDefinitionIndex = 71669;

class Class_2_FBB797B3E72D8FA3 : public ::RPG::Client::UIController
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBB797B3E72D8FA3__CTOR_OFFSET))(this);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBB797B3E72D8FA3_VIEWPREFABPATH_OFFSET))(this);
	}
};
