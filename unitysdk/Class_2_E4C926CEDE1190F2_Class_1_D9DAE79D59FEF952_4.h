#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_34;
class Class_0_16E4307DCC419505_36;
class Class_3_025FF4981524A424_403;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E4C926CEDE1190F2_CLASS_1_D9DAE79D59FEF952_4_METHOD_1_7E35F3A1E0331FD8_OFFSET UNITYSDK_OFFSET(0x1130CF30)
#define CLASS_2_E4C926CEDE1190F2_CLASS_1_D9DAE79D59FEF952_4_METHOD_1_B9DC0BB323151745_OFFSET UNITYSDK_OFFSET(0x1130CFB0)
#define CLASS_2_E4C926CEDE1190F2_CLASS_1_D9DAE79D59FEF952_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1130CF20)

inline static constexpr unsigned int Class_2_E4C926CEDE1190F2_Class_1_D9DAE79D59FEF952_4_TypeDefinitionIndex = 87560;

class Class_2_E4C926CEDE1190F2_Class_1_D9DAE79D59FEF952_4 : public ::System::Object
{
public:
	::System::Action_2<::Class_3_025FF4981524A424_403*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C926CEDE1190F2_CLASS_1_D9DAE79D59FEF952_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7E35F3A1E0331FD8(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_E4C926CEDE1190F2_CLASS_1_D9DAE79D59FEF952_4_METHOD_1_7E35F3A1E0331FD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9DC0BB323151745(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*))((::PBYTE)hIl2Cpp + CLASS_2_E4C926CEDE1190F2_CLASS_1_D9DAE79D59FEF952_4_METHOD_1_B9DC0BB323151745_OFFSET))(this, a1);
	}
};
