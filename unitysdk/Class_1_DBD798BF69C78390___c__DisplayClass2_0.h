#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E22F560919B0BCA2;

#define CLASS_1_DBD798BF69C78390___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C965DC0)
#define CLASS_1_DBD798BF69C78390___C__DISPLAYCLASS2_0__UNREGISTERSKILLOWNER_B__0_OFFSET UNITYSDK_OFFSET(0x1C9667B0)

inline static constexpr unsigned int Class_1_DBD798BF69C78390___c__DisplayClass2_0_TypeDefinitionIndex = 43092;

class Class_1_DBD798BF69C78390___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_1_E22F560919B0BCA2* skillOwner; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _UnregisterSkillOwner_b__0(::Class_1_E22F560919B0BCA2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E22F560919B0BCA2*))((::PBYTE)hIl2Cpp + CLASS_1_DBD798BF69C78390___C__DISPLAYCLASS2_0__UNREGISTERSKILLOWNER_B__0_OFFSET))(this, a1);
	}
};
