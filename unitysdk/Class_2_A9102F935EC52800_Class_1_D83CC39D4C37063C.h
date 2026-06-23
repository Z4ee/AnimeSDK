#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_5FB2F93A997B7BFE;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A9102F935EC52800_CLASS_1_D83CC39D4C37063C_METHOD_1_64121FCCC75E8545_OFFSET UNITYSDK_OFFSET(0x1A0ABDB0)
#define CLASS_2_A9102F935EC52800_CLASS_1_D83CC39D4C37063C_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x1A0ABDA0)
#define CLASS_2_A9102F935EC52800_CLASS_1_D83CC39D4C37063C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0ABD90)

inline static constexpr unsigned int Class_2_A9102F935EC52800_Class_1_D83CC39D4C37063C_TypeDefinitionIndex = 74481;

class Class_2_A9102F935EC52800_Class_1_D83CC39D4C37063C : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_5FB2F93A997B7BFE*>* Field_1_0; // 0x18
	::System::Action_1<::System::Int32>* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9102F935EC52800_CLASS_1_D83CC39D4C37063C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A9102F935EC52800_CLASS_1_D83CC39D4C37063C_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}

	::System::Void Method_1_64121FCCC75E8545(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_A9102F935EC52800_CLASS_1_D83CC39D4C37063C_METHOD_1_64121FCCC75E8545_OFFSET))(this, a1);
	}
};
