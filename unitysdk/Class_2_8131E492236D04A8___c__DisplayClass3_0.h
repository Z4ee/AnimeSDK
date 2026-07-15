#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_450;

#define CLASS_2_8131E492236D04A8___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167502C0)
#define CLASS_2_8131E492236D04A8___C__DISPLAYCLASS3_0__GETEXPERTINNODE_B__0_OFFSET UNITYSDK_OFFSET(0x16750300)

inline static constexpr unsigned int Class_2_8131E492236D04A8___c__DisplayClass3_0_TypeDefinitionIndex = 62108;

class Class_2_8131E492236D04A8___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::UInt32 chapterID; // 0x10
	::System::UInt32 sectionID; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetExpertInNode_b__0(::Class_1_D17272E82AE804C2_450* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_450*))((::PBYTE)hIl2Cpp + CLASS_2_8131E492236D04A8___C__DISPLAYCLASS3_0__GETEXPERTINNODE_B__0_OFFSET))(this, a1);
	}
};
