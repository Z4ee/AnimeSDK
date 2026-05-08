#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_55;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_468A4FBF2E9F527C_CLASS_1_0641BA7CF7B42BBA_METHOD_1_C36FE8192154F8C7_OFFSET UNITYSDK_OFFSET(0xFA84FC0)
#define CLASS_2_468A4FBF2E9F527C_CLASS_1_0641BA7CF7B42BBA__CTOR_OFFSET UNITYSDK_OFFSET(0xFA84FB0)

inline static constexpr unsigned int Class_2_468A4FBF2E9F527C_Class_1_0641BA7CF7B42BBA_TypeDefinitionIndex = 66071;

class Class_2_468A4FBF2E9F527C_Class_1_0641BA7CF7B42BBA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_55*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_468A4FBF2E9F527C_CLASS_1_0641BA7CF7B42BBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C36FE8192154F8C7(::System::Boolean a1, ::Class_3_025FF4981524A424_55* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_55*))((::PBYTE)hIl2Cpp + CLASS_2_468A4FBF2E9F527C_CLASS_1_0641BA7CF7B42BBA_METHOD_1_C36FE8192154F8C7_OFFSET))(this, a1, a2);
	}
};
