#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_44;

#define CLASS_2_746196C2D88E7431___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x134D7EE0)
#define CLASS_2_746196C2D88E7431___C__DISPLAYCLASS3_0__GETEXPERTINNODE_B__0_OFFSET UNITYSDK_OFFSET(0x134D7F80)

inline static constexpr unsigned int Class_2_746196C2D88E7431___c__DisplayClass3_0_TypeDefinitionIndex = 60814;

class Class_2_746196C2D88E7431___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::UInt32 chapterID; // 0x10
	::System::UInt32 sectionID; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_746196C2D88E7431___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetExpertInNode_b__0(::Class_1_D1E0AD3915BCCF29_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_44*))((::PBYTE)hIl2Cpp + CLASS_2_746196C2D88E7431___C__DISPLAYCLASS3_0__GETEXPERTINNODE_B__0_OFFSET))(this, a1);
	}
};
