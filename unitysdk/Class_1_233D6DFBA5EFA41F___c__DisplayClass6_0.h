#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_233D6DFBA5EFA41F;
class Class_1_B6BE44583A9235C2;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_233D6DFBA5EFA41F___C__DISPLAYCLASS6_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xDFB2850)
#define CLASS_1_233D6DFBA5EFA41F___C__DISPLAYCLASS6_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0xDFB2880)
#define CLASS_1_233D6DFBA5EFA41F___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDFB2620)

inline static constexpr unsigned int Class_1_233D6DFBA5EFA41F___c__DisplayClass6_0_TypeDefinitionIndex = 79646;

class Class_1_233D6DFBA5EFA41F___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_1_233D6DFBA5EFA41F* __4__this; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* sortedExamIDs; // 0x18
	::System::UInt32 currentExamID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_233D6DFBA5EFA41F___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::Class_1_B6BE44583A9235C2* _Create_b__0(::System::UInt32 a1)
	{
		return ((::Class_1_B6BE44583A9235C2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_233D6DFBA5EFA41F___C__DISPLAYCLASS6_0__CREATE_B__0_OFFSET))(this, a1);
	}

	::System::Boolean _Create_b__1(::Class_1_B6BE44583A9235C2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B6BE44583A9235C2*))((::PBYTE)hIl2Cpp + CLASS_1_233D6DFBA5EFA41F___C__DISPLAYCLASS6_0__CREATE_B__1_OFFSET))(this, a1);
	}
};
