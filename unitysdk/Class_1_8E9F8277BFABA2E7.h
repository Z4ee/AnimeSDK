#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8E9F8277BFABA2E7_Struct_2_F7C243F317D8E44A_4.h"
#include "unitysdk/Struct_2_8DF040A9B305C5B6.h"
#include "unitysdk/Struct_2_BC31E95B6D19294E.h"
#include "unitysdk/System/Object.h"

class Class_1_831E63A5931DEE9A;
class Class_1_ECA794E759B34D01;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8E9F8277BFABA2E7_METHOD_1_37FAE0BD18CB026C_OFFSET UNITYSDK_OFFSET(0x1CEA1A40)
#define CLASS_1_8E9F8277BFABA2E7_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1CEA1AC0)
#define CLASS_1_8E9F8277BFABA2E7_METHOD_1_A862EC093E560646_OFFSET UNITYSDK_OFFSET(0x1CEA1B50)
#define CLASS_1_8E9F8277BFABA2E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA19C0)

inline static constexpr unsigned int Class_1_8E9F8277BFABA2E7_TypeDefinitionIndex = 87857;

class Class_1_8E9F8277BFABA2E7 : public ::System::Object
{
public:
	::Class_1_831E63A5931DEE9A* Field_1_4; // 0x10
	::System::Action_2<::System::Int32, ::System::UInt32>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_1_8E9F8277BFABA2E7_Struct_2_F7C243F317D8E44A_4>* Field_1_7; // 0x20
	::System::Boolean Field_1_5; // 0x28
	::Struct_2_8DF040A9B305C5B6 Field_1_2; // 0x2C
	::Struct_2_BC31E95B6D19294E Field_1_3; // 0x30
	::System::Int32 Field_1_0; // 0x40
	::System::UInt32 Field_1_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E9F8277BFABA2E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_37FAE0BD18CB026C(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8E9F8277BFABA2E7_METHOD_1_37FAE0BD18CB026C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E9F8277BFABA2E7_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_A862EC093E560646(::System::Single a1, ::Class_1_ECA794E759B34D01* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Class_1_ECA794E759B34D01*))((::PBYTE)hIl2Cpp + CLASS_1_8E9F8277BFABA2E7_METHOD_1_A862EC093E560646_OFFSET))(this, a1, a2);
	}
};
