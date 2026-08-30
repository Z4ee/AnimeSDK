#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitEnvProfile.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_1C50AA9C2499369B_METHOD_4_DC9F2B18FBAB6ADB_OFFSET UNITYSDK_OFFSET(0x1C750B90)
#define CLASS_4_1C50AA9C2499369B_METHOD_4_E8248A0562730A66_OFFSET UNITYSDK_OFFSET(0x1C750B40)
#define CLASS_4_1C50AA9C2499369B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C750B80)

inline static constexpr unsigned int Class_4_1C50AA9C2499369B_TypeDefinitionIndex = 21655;

class Class_4_1C50AA9C2499369B : public ::RPG::GameCore::TransitEnvProfile
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1C50AA9C2499369B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_E8248A0562730A66(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1C50AA9C2499369B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1C50AA9C2499369B*&))((::PBYTE)hIl2Cpp + CLASS_4_1C50AA9C2499369B_METHOD_4_E8248A0562730A66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_DC9F2B18FBAB6ADB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1C50AA9C2499369B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1C50AA9C2499369B*))((::PBYTE)hIl2Cpp + CLASS_4_1C50AA9C2499369B_METHOD_4_DC9F2B18FBAB6ADB_OFFSET))(a1, a2);
	}
};
