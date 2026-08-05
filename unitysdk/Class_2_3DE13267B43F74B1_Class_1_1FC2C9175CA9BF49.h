#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/System/Object.h"

class Class_2_3DE13267B43F74B1;
class Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184;
class Class_3_0D78EA91F90092C6;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_3DE13267B43F74B1_CLASS_1_1FC2C9175CA9BF49_METHOD_1_024BC028AEC97107_OFFSET UNITYSDK_OFFSET(0x11CBDFE0)
#define CLASS_2_3DE13267B43F74B1_CLASS_1_1FC2C9175CA9BF49__CTOR_OFFSET UNITYSDK_OFFSET(0x11CBDFD0)

inline static constexpr unsigned int Class_2_3DE13267B43F74B1_Class_1_1FC2C9175CA9BF49_TypeDefinitionIndex = 52302;

class Class_2_3DE13267B43F74B1_Class_1_1FC2C9175CA9BF49 : public ::System::Object
{
public:
	::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* Field_1_1; // 0x18
	::Class_2_3DE13267B43F74B1* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE13267B43F74B1_CLASS_1_1FC2C9175CA9BF49__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_024BC028AEC97107(::System::Int32 a1, ::Class_3_0D78EA91F90092C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_0D78EA91F90092C6*))((::PBYTE)hIl2Cpp + CLASS_2_3DE13267B43F74B1_CLASS_1_1FC2C9175CA9BF49_METHOD_1_024BC028AEC97107_OFFSET))(this, a1, a2);
	}
};
